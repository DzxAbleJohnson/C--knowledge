#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
/*
��дһ�γ�����cin����һ�������������Ǵ���һ��vector����
*/
int main()
{
    int i=0, j=0;
    vector<int> p;
    char ch = '0';

//    ch =getchar();
//    while('\n' != ch)
//    {
//        i = ch - '0';       //char��תint��
//        if(ch != ' ' && ch != '\n')
//        {
//            p.push_back(i);
//        }
//        ch = getchar();
//    }
    while(cin >> i)
    {
        cout << i << endl;
        p.push_back(i);
        j++;
        cout << p[j] << endl;
    }


//    for(int j=0; j<p.size(); i++)
//    {
//        cout << p[j] << endl;
//    }
    return 0;
}
