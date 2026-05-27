// Write a Program in c to print numbers from 1 to N
#include<stdio.h>
int main(){
    int limit,starter=1;
    printf("Enter, How term you want to print: ");
    scanf("%d", & limit);
    while(starter<=limit){
        printf("%d\n",starter);
        starter+=1;
    }
return 0;
}