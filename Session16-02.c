#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Nhập vào x: ");
    scanf("%d", &x);
    printf("Nhập vào y: ");
    scanf("%d", &y);
    printf("Trước khi đổi giá trị:\n");
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau khi đổi giá trị:\n");
    printf("x = %d, y = %d\n", x, y);
}
