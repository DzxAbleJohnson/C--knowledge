#include <iostream>
#include <vector>
using namespace std;
/*
����붨��һ������10��Ԫ�ص�vector��������Ԫ�ص�ֵ����42�����о����ֲ�ͬ��ʵ�ַ���
*/
int main()
{
    vector<int> p(10, 42);
    vector<int> p{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    for(int i=0; i<10; i++)
    {
        p.push_back(10);
    }
//    for(int i=0; i<p.size(); i++)
//    {
//        cout << p[i] << "  ";
//    }
    return 0;
}
