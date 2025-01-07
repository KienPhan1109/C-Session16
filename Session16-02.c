#include <stdio.h>

int updataUpdate(int a[], int size, int value, int pos)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == pos)
        {
            a[i] = value;
            return 1;
        }
    }
    
}

int main(){
    
}