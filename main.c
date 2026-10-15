#include <stdio.h>
void f(void);

int i;
int main(void){
    for(i=0;i<5;i++){
        f();
    }
    return 0;
}
void f(void){
    for(i=0;i<10;i++){
        printf("#");
    }
}
//반복문 변수는 지역변수가 나음
//f를 실행하면서 i가 10이 됐던 게 남아 있어서 main 함수에서는 한 번밖에 못하는 것
//수정은 당연히 i를 지역변수로