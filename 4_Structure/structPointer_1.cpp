#include <iostream>
using namespace std;

typedef struct
{
    char Name[30];
    char MPhoneNum[20];
} SAM;

int main()
{
    SAM a = {"doodoomchit", "010-2222-3333"};
    SAM *pa;

    pa = &a;

    cout << "Name = " << a.Name << ",\tPhone Number = " << a.MPhoneNum << endl;
    cout << "Name = " << (*pa).Name << ",\tPhone Number = " << (*pa).MPhoneNum << endl;

    return 0;
}