#include <iostream>

using namespace std;
/*
��дһ�γ���ʹ�÷�Χfor��佫�ַ����ڵ������ַ����������ַ���X����
*/
int main()
{
    string a = "Hello world!";
    for(auto &c:a)
        c = 'X';
    cout << a << endl;
    return 0;
}
/*
XXXXXXXXXXXX

Process returned 0 (0x0)   execution time : 0.388 s
Press any key to continue.

*/
