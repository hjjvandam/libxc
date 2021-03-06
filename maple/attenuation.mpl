(*
 Copyright (C) 2017 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*)

(* error function:
    Int. J. of Quant. Chem. 100, 1047-1056 (2004)
    J. Chem. Phys. 120, 8425 (2004)
*)
att_erf_aux1 := a -> sqrt(Pi)*erf(1/(2*a)):
att_erf_aux2 := a -> exp(-1/(4*a^2)) - 1:
att_erf_aux3 := a -> 2*a^2*att_erf_aux2(a) + 1/2:
attenuation_erf := a ->
  1 - 8/3*a*(att_erf_aux1(a) + 2*a*(att_erf_aux2(a) - att_erf_aux3(a))):

(* erf_gau
    Int. J. of Quant. Chem. 100, 1047-1056 (2004)
*)
att_gau_aux1 := a -> sqrt(Pi)*erf(sqrt(3)/(2*a)):
att_gau_aux2 := a -> exp(-3/(4*a^2)):
attenuation_erf_gau := a ->
  8/3*a*(att_gau_aux1(a) - 2*sqrt(3)*a + 16*a^3/sqrt(27) + (2*a/sqrt(3) - 16*a^3/sqrt(27))*att_gau_aux2(a)):

(* yukawa
    Chem. Phys. Lett. 462(2008) 348-351
*)
att_yuk_aux1 := a -> arctan(1, a):
att_yuk_aux2 := a -> log(1.0 + 1.0/a^2):
att_yuk_aux3 := a -> a^2 + 1:
attenuation_yukawa := a -> my_piecewise3(
    a > 50, 1/(9*a^2) - 1/(30*a^4),
    1.0 - 8/3*a*(att_yuk_aux1(a) + a/4*(1 - (att_yuk_aux3(a) + 2)*att_yuk_aux2(a)))
):

