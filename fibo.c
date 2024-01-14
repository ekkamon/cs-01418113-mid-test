#include <stdio.h>
#include <stdlib.h>

long *fibo_array(int, long, long);

int main()
{
    long *ptr = fibo_array(10, 0, 1);

    for(int i = 0; i < 10; i++)
    {
        printf("%ld ", *(ptr + i));
    }

    free(ptr);
}

long *fibo_array(int size, long first, long second)
{
    long *arr = (long *)malloc(size * sizeof(long));

    arr[0] = first;
    arr[1] = second;

    for(int i = 2; i < size; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr;
}
