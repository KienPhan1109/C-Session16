#include <stdio.h>
#include <stdlib.h>

void softArray(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int a[] = {1, 4, 10, 2, 44, 3, 0, 8, 100};
    int size = sizeof(a) / sizeof(a[0]);
    printf("Mảng trước khi sắp xếp: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    softArray(a, size);
    printf("\nMảng sau khi sắp xếp: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    system("pause");
}