#!/usr/bin/env perl

my $srcdir     = $ARGV[0];
my $functional = $ARGV[1];
my $order      = $ARGV[2];

my $mathfile = "$srcdir/mathematica/functionals/$functional.m";

# Find out the type of functional
open my $in, '<', $mathfile or 
    die "File $srcdir/mathematica/functionals/$functional.m does not exist\n";
my $line = <$in>;
close($in);

$line =~ /type:\s(\S*)\s/;
my $functype = $1;

open my $out, '>', "$srcdir/math2c/$functional.c" or 
    die "Could not open file $srcdir/math2c/$functional.c for writing\n";

print $out "/* 
  This file was generated automatically with $0.
  Do not edit this file directly as it can be overwritten!!

  Mathematica source: $mathfile
  Type of functional: $functype
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <util.h>
";

if($functype ne "work_gga_x"){
  die "Only work_gga_x is implemented at the moment\n";
}

my @der_type = ("f", "dfdx", "d2fdx2", "d3fdx3");
  print $out "
void math2c_${functional}_func
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
";

for(my $i=0; $i<=$order; $i++){
  print $out "
  if(order < $i) return;

  *$der_type[$i] = ";

  $math = `math -script $srcdir/mathematica/work_gga_x.m $mathfile $i`;
  print $out "$math;\n";
}
print $out "}\n";

close($out);
