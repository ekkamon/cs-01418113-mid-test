#include <stdio.h>
#include <stdlib.h>

int sum(char *);

int main()
{
    printf("%d\n", sum("824137"));
    printf("%d\n", sum("13579"));
}

int sum(char *str)
{
    static int total = 0;
    
    int num = atoi(str);

    if (num == 0)
    {
        int temp = total;

        total = 0;
        return temp;
    }

    int value = num % 10;

    if (value % 2 == 0) total += value; else total -= value;

    num /= 10;

    char result[1024];
    sprintf(result, "%d", num);

    return sum(result);
}