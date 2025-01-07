#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char *strrev(char *str){
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        int temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int main(){
    char inputString[MAX];
    char reverseString[MAX];
    printf("Nhập vào một chuỗi: ");
    gets(inputString);
    fflush(stdin);
    strcpy(reverseString, inputString);
    strrev(reverseString);
    printf("Chuỗi đảo ngược là: %s", reverseString);
    system("pause");
}