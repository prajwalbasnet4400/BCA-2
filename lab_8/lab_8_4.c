// 8-4 WAP to check for palindrome without using string related func

#include <stdio.h>
int len();

int main()
{
    char str[10];
    printf("Enter your string:");
    scanf("%s",str);
    int length = len(str);
    for (int i=0; i != length; i++){
      if(str[i] != str[length]){
        printf("String is NOT palindrome");
        return 0;
      }else{
        length--;
      }
    };
    printf("String is palindrome");
    return 0;
}

// Function to calculate the length of string
int len(char string[]){
    int i;
    for (i = 0; string[i] != '\0'; ++i){};
    i--;
    return i;
}