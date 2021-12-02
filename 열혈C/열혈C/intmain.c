//
//  intmain.c
//  열혈C
//
//  Created by 안동규 on 2021/12/02.
//

#include <stdio.h>
#include "stdiv2.h"
#include "intdiv4.h"

int main(void)
{
    Div val = IntDiv(5, 2);
    printf("몫: %d\n", val.quotient);
    printf("나머지: %d\n", val.remainder);
    return 0;
}
