#include <iostream>
#include <vector>
#include <string>
using namespace std;

//int main()
//{
//    string word={0};
//    vector<string> p;
////    while(cin >> word)
////    {
////        p.push_back(word);
////    }
//    while(cin >> word)
//        p.push_back(word);
//    for(auto c:p)
//    {
//        for(auto &ch:c)
//        {
//            ch = toupper(ch);
//        }
//    }
//
//
//
//
//    return 0;
//}


int main()
{
    string word;
    vector<string> Str;
    while(cin>>word)
        Str.push_back(word);
    for(auto c:Str)
    {
         cout<<c<<" ";
         for(auto &ch:c)
            ch=toupper(ch);
         cout<<c<<endl;
    }
    cout<<endl;
    return 0;
}
/*
��˵��windows������ctrl+Z���˳���

��ʵ��Vc++ 6.0����̨ģʽ�£�ctrl+Z��ʾ����^z����Ȼ^z��Vc��ģ���ļ�β��EOF����

wrhieoh
hadohfjfh
^Z
wrhieoh WRHIEOH
hadohfjfh HADOHFJFH


Process returned 0 (0x0)   execution time : 9.989 s
Press any key to continue.

*/
