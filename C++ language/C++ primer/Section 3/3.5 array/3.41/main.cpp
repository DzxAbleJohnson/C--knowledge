#include <iostream>
#include <vector>
using namespace std;
/*
��дһ�γ��������������ʼ��һ��vector����
*/
int main()
{
    int arry[] = {0, 1, 2, 3, 4, 5, 6};
    vector<int> iv(begin(arry), end(arry));
    for(auto a=iv.begin(); a!=iv.end(); a++)
    {
        cout << (*a) << endl;
    }
    return 0;
}
