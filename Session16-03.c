#include <stdio.h>

int sum(int *p, int *q) {
    int sum = *p + *q;
    return sum;
}

int main() {
    int tong;
    int a, b;
    printf("Nhập vào a: ");
    scanf("%d", &a);
    printf("Nhập vào b: ");
    scanf("%d", &b);
    tong = sum(&a, &b);
    printf("Tổng của a và b là: %d\n", tong);
    return 0;
}
