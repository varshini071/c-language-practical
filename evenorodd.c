#include <stdio.h>
int main() {
    int num = 100041;
    int remainder = num % 2;
    if (remainder == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}
        