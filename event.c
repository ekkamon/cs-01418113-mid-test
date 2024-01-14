#include <stdio.h>

#define SIZE 1001

int main()
{
    int num;
    scanf("%d", &num);

    int times[SIZE] = {0};

    for(int i = 0; i < num; i++)
    {
        int enter, exit;

        scanf("%d %d", &enter, &exit);

        for(int i = enter; i < exit; i++)
            times[i]++;
    }

    int max = -1;

    for(int i = 1; i < SIZE; i++)
        if(times[i] > max)
            max = times[i];

    printf("%d", max);
}

