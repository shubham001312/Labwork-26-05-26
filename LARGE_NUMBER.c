#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    // Find the largest number
    if(a >= b && a >= c){
        largest = a;
    }
    else if(b >= a && b >= c){
        largest = b;
    }
    else{
        largest = c;
    }
    // Show the output to the user
    printf("The largest number is: %d\n", largest);
    return 0;
}