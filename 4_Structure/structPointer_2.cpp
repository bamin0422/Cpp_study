#include <iostream>
using namespace std;

typedef struct
{
    char name[20];
    char mPhoneNum[20];
} HI;

int main()
{

    HI h = {"roolulala", "010-2222-2222"};
    HI *pa;
    pa = &h;
    cout << "Name = " << h.name << ",\tPhone Number = " << h.mPhoneNum << endl;
    cout << "Name = " << pa->name << ",\tPhone Number = " << pa->mPhoneNum << endl;
    return 0;
}