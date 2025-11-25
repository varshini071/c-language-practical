#include <stdio.h>
int main() {
    float height ;
    printf("Enter height: ");
    scanf("%f", &height);
    if (height<150) {
        printf("you are short: %.2f\n", height);
    } 
    else if (height>=150 && height<=170) {
        printf("you are average: %.2f\n", height);
    }
    else {
        printf("you are tall\n");
    }   
    return 0;
}