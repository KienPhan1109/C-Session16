#include <stdio.h>
#include <stdlib.h>

int searchArray(int a[], int search, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == search)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 100};
    int size = sizeof(a) / sizeof(a[0]);
    int search;
    printf("Nhập vào giá trị cần tìm: ");
    scanf("%d", &search);
    int kq = searchArray(a, search, size);
    printf("Giá trị cần tìm ở vị trí thứ: %d\n", kq);
    system("pause");
}