#include <stdio.h>

void swap(int *, int);
int find(int *);

int main()
{
    int num;
    scanf("%d", &num);

    int arr[] = {1, 0, 0};

    for(int i = 0; i < num; i++)
    {
        int type;
        scanf("%d", &type);

        swap(arr, type);
    }

    printf("%d", find(arr));
}

void swap(int *arr, int type)
{
    int temp;

    switch (type)
    {
        case 1:
            temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
            break;
        case 2:
            temp = arr[1];
            arr[1] = arr[2];
            arr[2] = temp;
            break;
        case 3:
            temp = arr[0];
            arr[0] = arr[2];
            arr[2] = temp;
    }
}

int find(int *arr)
{
    for(int i = 0; i < 3; i++)
        if (arr[i] == 1)
            return i + 1;

    return 0;
}