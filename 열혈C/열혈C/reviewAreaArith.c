//
//  reviewAreaArith.c
//  열혈C
//
//  Created by 안동규 on 2021/12/02.
//  review 592p

#include "reviewBasicArith.h"

double TriangleArea(double base, double height)
{
    return Div(Mul(base, height), 2);
}
double CircleArea(double rad)
{
    return Mul(Mul(rad, rad), PI);
}
