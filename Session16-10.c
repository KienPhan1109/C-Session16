#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delArray(int *str, int del, int *len)
{
    for (int i = del ; i < *len - 1; i++) {
                str[i] = str[i + 1];
    }
    (*len)--;
}

int main(){
    int a[100] = {1, 2, 3, 4, 5};
    int len = 5;
    int del;
    printf("Mảng trước khi xóa: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Vị trí muốn xóa của mảng: ");
    scanf("%d", &del);
    delArray(a, del, &len);
    printf("Mảng sau khi xóa: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    system("pause");
}