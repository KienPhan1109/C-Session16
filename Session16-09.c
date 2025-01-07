#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addArray(int *str, int *value, int *pos, int *len)
{
    for (int i = *len; i >= *pos; i--) {
        str[i] = str[i - 1];
    }
    str[*pos] = *value;
    (*len)++;
}

int main(){
    int a[100] = {1, 2, 3, 4, 5};
    int len = 5;
    int value, pos;
    printf("Mảng trước khi chèn: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Nhập giá trị muốn chèn: ");
    scanf("%d", &value);
    printf("Vị trí muốn thêm vào mảng: ");
    scanf("%d", &pos);
    addArray(a, &value, &pos, &len);
    printf("Mảng sau khi chèn: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    system("pause");
}