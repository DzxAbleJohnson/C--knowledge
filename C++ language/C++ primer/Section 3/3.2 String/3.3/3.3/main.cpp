#include <iostream>

using namespace std;
/*
�Ƚ������ַ������Ƚ����Ƿ���Ȳ����������������ȣ�����ϴ���Ǹ��ַ�����

*/
int main()
{
    string a;
    string b;
    cin >> a >> b;
    if(a != b)
    {
        cout << "�ϴ��һ�����ǣ�"<< endl;
        cout << (a.size() > b.size()? a:b) << endl;
    }
    cout << a << endl << b << endl;
    return 0;
}
/*
���н����
123456 1234
�ϴ��һ�����ǣ�
123456
123456
1234

Process returned 0 (0x0)   execution time : 5.023 s
Press any key to continue.

*/
