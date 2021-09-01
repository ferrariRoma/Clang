// 경찰서 조서쓰기

#include <stdio.h>

int main_project(void)
{
    char name[256];
    printf("이름이 뭐에요?\n");
    scanf("%s", name);

    int year;
    printf("나이는 어떻게 되세요?\n");
    scanf("%d", &year);

    double weight;
    printf("몸무게는 어떻게 되세요?\n");
    scanf("%lf", &weight);
    // double은 입력시에 %lf, 출력시에는 %f!

    float height;
    printf("키는 어떻게 되세요?\n");
    scanf("%f", &height);
    getchar();
    // fflush(stdin);
    // 내가 이해를 한 것은,
    // fflush를 이용해서 scanf에서 입력되고 나서의 엔터를 없애준다.
    // 그래서 fgets가 건너띄는 오류가 나지 않게 해줌.
    // 검증결과 이 내용이 맞긴 한데 fflush(stdin)은 vs2015에서부터는 안된다고 한다.
    // 그럴때는 getchar()써주는 것도 방법임.
    // 하지만 getchar()도 결국 입력버퍼에서 들어있는 친구 중 한개만을 처리해주는 것이라서
    // 만능은 아니다. 물론 fflush도 안되는 컴파일러가 있어서 그 역시 만능은 아니다.
    // 이에 대해서는 계속해서 고민을 해보아야 할 문제라고 생각한다.
    // 가장 권장되는 방법은 %s로 문자열을 받아서 필요한 만큼 출력하도록 설정하는 것인 것 같다.

    char what[256];
    printf("무슨 일 때문에 입건되셨죠?\n");
    fgets(what,256,stdin);
    // fgets와 gets, scanf와 scanf_s의 차이는 안전장치의 유무
    // 파라미터를 보면 입력할 수 있는 숫자 제한을
    // 걸어놓았다.
    
    
    // 결과
    printf("제 이름은 %s 입니다.\n", name);
    printf("제 나이는 %d살 입니다.\n", year);
    printf("제 몸무게는 %.1lfkg 입니다.\n", weight);
    printf("제 키는 %.2fcm 입니다.\n", height);
    printf("제 범죄명은 %s 입니다.\n", what);
    

    return 0;
}
