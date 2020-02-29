/*
strlen(_str) 문자열 _str의 길이 구하기
strcpy(_Dest, _str) 문자열 _str을 _Dest에 복사하기
strncpy(_Dest, _str, cnt) 문자열 _str을 _Dest에 cnt 개수만큼 복사하기
strcat(_Dest, _str) 문자열 _str의 내용을 _Dest에 덧붙이기
strncat(_Dest, _str, cnt) 문자열 _str의 내용을 _Dest에 cnt 개수만큼 덧붙이기
strcmp(str1, str2) str1 과 str2를 비교해 str1>str2이면 -1, str1=str2이면 0, str1<str2 1을 반환한다.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s_str[30] = "", d_str[30] = "";
    int i = 0;
    cout << "주민등록번호 입력 : ";
    cin >> s_str;
    strcpy(d_str, s_str);

    cout << s_str << endl;
    cout << d_str << endl;

    return 0;
}