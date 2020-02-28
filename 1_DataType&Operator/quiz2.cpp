#include <iostream>
using namespace std;

int main()
{
    int score1 = 100, score2 = 78, score3 = 78;
    int total = score1 + score2 + score3;
    double average = total / 3;
    cout << "total = " << total << "\taverage = " << average << endl;
    return 0;
}