#include "config.h"

int main()
{
    int s[6] = {100, 90, 76, 89, 100, 88};
    int total = TotalCalculation(s, 6);

    if (total == -1)
        return 1;
    float aver = total / (float)6;
    aver = Round(aver, 2);

    cout << total << endl;
    cout << aver << endl;
    return 0;
}