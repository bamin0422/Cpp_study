#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    struct sam
    {
        char Name[30];
        char MPhoneNum[20];
    };

    typedef struct sam SAM;

    SAM Friend, Friend1;

    strcpy(Friend.Name, "aaa");
    strcpy(Friend.MPhoneNum, "010-0000-0000");
    strcpy(Friend1.Name, "bbb");
    strcpy(Friend1.MPhoneNum, "010-1234-5678");

    cout << Friend.Name << endl
         << Friend.MPhoneNum << endl
         << Friend1.Name << endl
         << Friend1.MPhoneNum << endl;

    return 0;
}