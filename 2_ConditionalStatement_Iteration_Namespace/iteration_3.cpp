#include <iostream>
using namespace std;

int main()
{
    int score;
    do
    {
        cout << "score = ";
        cin >> score;
    } while (score > 100 || score < 0);
    cout << "Your score is " << score << "." << endl;
    return 0;
}