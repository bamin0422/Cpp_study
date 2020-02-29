#include "config.h"

int TotalCalculation(int jumsu[], int num)
{
    int tot = 0;
    if (num < 0)
        return -1;
    for (int i = 0; i < num; i++)
    {
        if (jumsu[i] < 0 || jumsu[i] > 100)
            return -1;
        tot += jumsu[i];
    }
    return tot;
}
float Round(float average, int digits)
{
    float r_aver = average;
    int temp;
    for (int i = 0; i < digits; i++)
        r_aver = r_aver * 10;
    r_aver = r_aver + 5;
    temp = (int)(r_aver / 10);
    r_aver = (float)temp;
    for (int i = 0; i < digits - 1; i++)
        r_aver = r_aver / 10;

    return r_aver;
}