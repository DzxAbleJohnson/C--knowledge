#include <iostream>
#include <vector>
using namespace std;
/*
��дһ�γ��򣬴���һ������10��������vector����Ȼ��ʹ�õ�����������Ԫ�ص�ֵ���ԭ��������
*/
int main()
{
    vector<int> v1(10, 30);
    for(auto a=v1.begin(); a!=v1.end(); a++)
    {
        cout << (*a) << '\t';
        (*a) = (*a)*2;
    }

    for(auto a=v1.begin(); a!=v1.end(); a++)
    {
        cout << (*a) << '\t';
    }
    return 0;
}
