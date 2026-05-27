// Write a Program in C to check whether a number is positive, negative, or zero
#include <stdio.h>

int main(){
    int test_var;

    printf("Enter a number: ");
    scanf("%d", &test_var);

    if(test_var > 0){
        printf("The number is positive.\n");
    }
    else if(test_var < 0){
        printf("The number is negative.\n");
    }
    else{
        printf("The number is zero.\n");
    }

    return 0;
}