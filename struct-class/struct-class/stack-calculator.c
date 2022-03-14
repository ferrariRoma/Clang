//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX 100
//
//int Stack[MAX];
//int top;
//
//// Stack초기화
//void initStack(void)
//{
//    top = -1;
//}
//
//// Push
//int push(int num)
//{
//    // 꽉 차면 오버플로우
//    if(top>=MAX-1){
//        printf("\n Stack overflow");
//        return -1;
//    }
//    // ++를 먼저!
//    Stack[++top] = num;
//    return num;
//}
//
//// Pop
//int pop(void)
//{
//    // 텅 비었으면 언더플로우
//    if(top<0){
//        printf("\n Stack underflow");
//        return -1;
//    }
//    // --를 나중에!
//    return Stack[top--];
//}
//
//// Stack 출력
//void printStack(void){
//    // i에 top을 할당하고 top&bottom으로 ㄱ!
//    int i = top;
//    printf("\n Stack contents: Top -> Bottom\n");
//    for(;i>=0;i--){
//        printf("%-4d", Stack[i]);
//    }
//}
//
//// Top노드 반환
//int getStackTop(void)
//{
//    // 삼항 연산자를 이용해서 텅비면 -1 반환.
//    return (top<0) ? -1 : Stack[top];
//}
//
//// Stack비었는지
//int isEmpty(void)
//{
//    // 하나라도 있으면 1을 반환하게!
//    return (top<0);
//}
//
//// 사칙연산인지 아닌지 확인
//int isOperator(int k)
//{
//    // 사칙연산이면 1반환!
//    return (k == '+' || k == '-' || k == '*' || k == '/');
//}
//
//// 후위표기법 설정(인자로 문자열!
//int isLegal(char *s)
//{
//    int f = 0;
//    while(*s){
//        // 공백 넘어가기
//        while(*s == ""){
//            s++;
//        }
//        // 연산자면 f에 -를!
//        // 아니면 +를!, 아닐 땐 문자열도 +를!
//        if(isOperator(*s)){
//            f--;
//        } else{
//            f++;
//            while(*s!=""){
//                s++;
//            }
//        }
//        // f가 1보다 작으면 컷!, 아니면 문자열 +를!
//        // 즉, 2개 이상의 항을 가지고 있으면 계산이 가능하니까.
//        if(f<1) break;
//        s++;
//    }
//    return (f==1);
//}
//
//// 연산자 우선순위를 수치로 변환해주자.
//int precedence(int op)
//{
//    if(op == '(') return 0;
//    else if(op == '+' || op == '-') return 1;
//    else if(op == '*' || op == '/') return 2;
//    else return 3;
//}
//
//// 중위표기법을 후위표기법으로 변환
//void modifyStack(char *dst, char *src)
//{
//    char c;
//    initStack();
//    while(*src){
//        // 괄호가 시작되면 stack에 push
//        if(*src == '('){
//            push(*src);
//            src++;
//        }
//        // 괄호가 끝나는지
//        else if(*src == ')'){
//            while(getStackTop()!='('){
//                *dst++ = pop();
//                *dst++ = "";
//            }
//            pop();
//            src++;
//        }
//        // 연산부호이면 수를 빼서 dst에 할당함
//        else if(isOperator(*src)){
//            while(!isEmpty() && precedence(getStackTop()) >= precedence(*src)){
//                *dst++ = pop();
//                *dst++ = "";
//            }
//            push(*src);
//            src++;
//        }
//        // 0~9는
//        else if(*src >= '0' && *src <= '9'){
//            do{
//                *dst++ = *src++;
//            } while(*src>='0' && *src<='9');
//                *dst++ = "";
//        }
//        else{
//            src++;
//        }
//    }
//    
//    while(!isEmpty()){
//        *dst++ = pop();
//        *dst++ = "";
//    }
//    dst--;
//    *dst = 0;
//}
//
//// 후위표기법을 계산
//int calculate(char *p)
//{
//    int i;
//    initStack();
//    while(*p){
//        if(*p>='0'&&*p<='9'){
//            i=0;
//            do{
//                i = i*10+*p-'0';
//                p++;
//            } while(*p>='0' && *p <= '9');
//            push(i);
//        }
//        // 사칙연산에 따른 계산
//        else if(*p == '+'){
//            push(pop()+pop());
//            p++;
//        }
//        else if(*p == '*'){
//            push(pop()*pop());
//            p++;
//        }
//        else if(*p == '-'){
//            push(pop()-pop());
//            p++;
//        }
//        else if(*p == '/'){
//            push(pop()+pop());
//            p++;
//        }
//        else{
//            p++;
//        }
//    }
//    return pop();
//}
//
//int main(void)
//{
//    int r;
//    char exp[256] = "2*3+6/2-4";
//    char pf[256];
//    
//    // 목표, 변환할 것
//    modifyStack(pf, exp);
//    printf("\n Modification: %s\n", pf);
//    
//    // 후위표기법 설정
//    if(!isLegal(pf)){
//        printf("\n Expression is legal!!");
//        exit(1);
//    }
//    r = calculate(pf);
//    printf("\nAnswer: %d", r);
//    
//    return 0;
//}
