#include <stdio.h>
void fun() {
    printf("This is a function from functions.c\n");
}
int main() {
    printf("brfore function call fun() \n");
    fun();
    printf("after function call fun() \n");
    return 0;
}
