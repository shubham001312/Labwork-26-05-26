//check alphabet 
#include<stdio.h>
int main(){
    char ch;
    printf("Enter your ALPHABET :");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("Its an vowel.");
            break;
        default:
            printf("IT'S AN CONSONANT.");
        
        }
    return 0;  
    }
