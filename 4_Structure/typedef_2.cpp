#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    typedef struct
    {
        char Name[20];
        char MPhoneNum[20];
    } SAM;

    /*
    프로그램이 커질 때, 구조체 선언은 config.h 라는 헤더파일을 만들어 놓는다.
    그리고 main 파일에 #include <iostream> 대신 #include "config.h(경로명\\헤더파일)"로 만든다.
    */

    SAM Friend;

    strcpy(Friend.Name, "hihi");
    strcpy(Friend.MPhoneNum, "010-2222-2222");

    SAM Friend1;

    strcpy(Friend1.Name, "byebye");
    strcpy(Friend1.MPhoneNum, "010-3333-3333");

    cout << Friend.Name << endl
         << Friend.MPhoneNum << endl;
    cout << Friend1.Name << endl
         << Friend1.MPhoneNum << endl;

    return 0;
}