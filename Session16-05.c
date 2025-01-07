#include <stdio.h>

int updateArray(int a[], int value, int pos){
    a[pos] = value;
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(int);
    printf("Mảng ban đầu: ");
    for (int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    updateArray(a, 10, 2);
    printf("Mảng sau khi cập nhật: ");
    for (int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

}