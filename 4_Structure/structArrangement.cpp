#include <iostream>
using namespace std;

typedef struct
{
    char Name[30];
    char MPhoneNum[20];
} SAM;

int main()
{

    SAM arr[5] = {"aaa", "010-0000-0000", "bbb", "010-1111-1111", "ccc", "010-2222-2222", "ddd", "010-3333-3333", "eee", "010-4444-4444"};
    cout << "sizeOf SAM = " << sizeof(SAM) << endl;

    for (int i = 0; i < 5; i++)
        cout << "Name : " << arr[i].Name << ",\tPhoneNumber : " << arr[i].MPhoneNum << endl;
    return 0;
}