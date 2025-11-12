#include <stdio.h>

int main() {
    int n=1;
    int d=1;

    int mod_res =n%7;
    int sub_res =d - mod_res;
    if(sub_res>=0)
    {
        printf(" %d\n", sub_res);
    }
    else
    {
        sub_res = sub_res + 7;
        printf(" %d\n", sub_res);
    }
    return 0;
}