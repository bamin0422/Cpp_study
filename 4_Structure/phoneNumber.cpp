#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    struct
    {
        char Name[30];
        char MPhoneNumber[14];
    } Friend;
    strcpy(Friend.Name, "nnnnn");
    strcpy(Friend.MPhoneNumber, "010-0000-0000");
    cout << Friend.Name << endl;
    cout << Friend.MPhoneNumber << endl;
    return 0;
}