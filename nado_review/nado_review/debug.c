//
//  debug.c
//  nado_review
//
//  Created by 안동규 on 2021/10/02.
//

#include <stdio.h>

int main()
{
    int number;
    char name[10];
    printf("니가 좋아하는 숫자를 입력하세요 : ");
    scanf("%d",&number);
    printf("\n\n만두쌤이 좋아하는 숫자는 %d입니다.\n\n", number);

    printf("내가 좋아하는 숫자를 입력해볼게요 : ");
    scanf("%d",&number);
    if(number==5)
    {
        do {
            number+=3;
            printf("%d",number);
        } while (number<20);
    }
    else{
        printf("\n\n좋아하는 숫자는 %d 입니다.\n\n",number);
    }

    return 0;
}
