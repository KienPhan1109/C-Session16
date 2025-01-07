#include <stdio.h>

int sum(int *p, int *q) {
    int sum = *p + *q;
    return sum;
}

int main() {
    int a = 10, b = 20, tong;
    tong = sum(&a, &b);
    printf("Tổng của a và b là: %d\n", tong);
    return 0;
}