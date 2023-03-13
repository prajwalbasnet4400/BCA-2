// lab 9-1
// WAP to read a string and check for palindrome with string related
// function
#include<stdio.h>
#include<string.h>

int main(){
    char input[20];
    char reversed[20];
    int int_val;
    printf("Enter your input: ");
    scanf("%s",&input);
    strcpy(input, reversed);
    // strrev(reversed);
    int_val = strcmp(input,reversed);
    if (int_val == 0){
        printf("The String is palindrome");
    }
    else{
        printf("The String is NOT palindrome");

    }
}

strrev(char input[]){
    char output[20];
    for (int i; i <20; i++){
        
    }
}