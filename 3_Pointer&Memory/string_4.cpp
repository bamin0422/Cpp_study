#include <iostream>
using namespace std;

int main()
{
    char s_str[30] = "", d_str[30] = "";
    int i = 0;

    cout << "주민등록번호 입력: ";
    cin >> s_str;

    for (i = 0; s_str[i] != '\0'; i++)
        d_str[i] = s_str[i];
    d_str[i] = s_str[i];

    cout << s_str << endl;
    cout << d_str << endl;

    return 0;
}