#include <iostream>
using namespace std;

int main()
{
    int score[4] = {
        0,
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "score = ";
        cin >> score[i];
        score[3] += score[i];
    }
    for (int i = 0; i < 4; i++)
        cout << score[i] << "\t";
    cout << endl;
    return 0;
}