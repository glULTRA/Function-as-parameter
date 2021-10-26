#include <stdio.h>

void say_hi();
void say_bye();
void * square(void * num, void (*my_func)());

int main(){
    int x = 5 , y = 10;
    printf("%d square is %d\n", x, square(&x, say_hi));
    printf("%d square is %d\n", y, square(&y, say_bye));
}

void say_hi(){
    printf("Hello\n");
}
void say_bye(){
    printf("Bye\n");
}
void * square(void * num, void (*my_func)()){
    my_func();
    return (*(int *)num) * (*(int *)num);
}