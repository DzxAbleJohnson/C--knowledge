#include <iostream>
#include <vector>
using namespace std;
/*
��д4���������ֱ������intִֵ�мӼ��˳����㣻����һ�ⴴ����vector�����б���ָ����Щ������ָ��
*/

typedef int (*pc)(int, int);
vector<pc> vec;     //�溯��ָ��


int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int Mutiply(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    return a/b;
}

int main()
{
    int x=4, y=1;
    pc p1 = add;
    pc p2 = sub;
    pc p3 = Mutiply;
    pc p4 = divide;
    vec.push_back(p1);
    vec.push_back(p2);
    vec.push_back(p3);
    vec.push_back(p4);
    for(auto i=0; i!=vec.size(); i++)
    {
        cout << "The result is:" << (vec[i])(x, y) << endl;
    }
    return 0;
}
