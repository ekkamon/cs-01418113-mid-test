#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

int readInt();
float readFloat();
float parkingFee(int, int);

int main()
{
    int hour, minute;
    
    while(TRUE)
    {
        scanf("%d", &hour);

        if (hour >= 0 && hour <= 24)
            break;
    }

    while(TRUE)
    {
        scanf("%d", &minute);

        if (minute >= 0 || minute <= 59)
            break;
    }

    printf("%.2f", parkingFee(hour, minute));
}


int readInt()
{
    char num[255];
    fgets(num, 255, stdin);

    return atoi(num);
}

float readFloat()
{
    char num[255];
    fgets(num, 255, stdin);

    return atof(num);
}

float parkingFee(int hour, int minute)
{
    if (hour == 0 && minute <= 15)
        return 0.00;

    float price = 0.0;

    if (minute > 0)
        hour++;

    if (hour <= 2)
        return 10.00;
    else
        hour -= 2;
        price += 10.00;
        price += hour * 10.00;

    return price;
}