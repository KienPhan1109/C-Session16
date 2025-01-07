#include <stdio.h>

int main(){
    int n = 10;
    int *p = &n;
    // Cách 1
    printf("Giá trị của biến n là: %d", n);
    printf("\nĐịa chỉ của biến n là: %p", &n);
    // Cách 2
    printf("\nGiá trị của biến n là: %d", *p);
    printf("\nĐịa chỉ của biến n là: %p", p);
}