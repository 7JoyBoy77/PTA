/*
������A��B��C����С��״��ͬ��������һ������������������ͬ��Ҫ���ҳ������һ������

�����ʽ��
������һ���и���3����������˳���Ӧ��A��B��C��������

�����ʽ��
��һ�������Ψһ���Ǹ���һ������

����������
1 1 2
���������
C
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned numA, numB, numC;
    cin >> numA >> numB >> numC;
    if (numA == numB)
    {
        cout << "C";
    }else if(numA == numC)
    {
        cout << "B";
    }else
    {
        cout << "A";
    }
    

    return 0;
}