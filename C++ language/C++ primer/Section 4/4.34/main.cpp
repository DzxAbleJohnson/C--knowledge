#include <iostream>

using namespace std;

int main()
{
    return 0;
}
/*
��������ǿ������ת����д���еľ�ʽת����䣺
int i; double d; const string *ps; char *pc; void *pv;
(a) pv = (void*)ps;
(b) i = int(*pc)
(c)pv = &d (d)pc = (char*)pv

������ο��𰸣�
(a)pv=reinterpret_cast<void*>(ps)
(b)i=static_cast<int>(*pc)
(c) pv=reinterpret_cast<void*>(&d)
(d) pc=reinterpret_cast<char*>(pv)
*/
