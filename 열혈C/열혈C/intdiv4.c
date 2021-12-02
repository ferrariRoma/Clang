//
//  intdiv4.c
//  열혈C
//
//  Created by 안동규 on 2021/12/02.
//  600p example

#include "stdiv2.h"

Div IntDiv(int num1, int num2)
{
    Div dval;
    dval.quotient = num1/num2;
    dval.remainder = num1%num2;
    return dval;
}
