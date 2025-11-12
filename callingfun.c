#include <stdio.h>
void fun2() {
    printf("inside fun2\n");
}
void fun1() {
    printf("before calling fun2() \n");
    fun2();
    printf("after calling fun2() \n");
}
int main() {
    printf("before calling fun1() \n");
    fun1();
    printf("after calling fun1() \n");
    return 0;
}