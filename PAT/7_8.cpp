/*
ģ�⽻ͨ������״�����ǡ����������ٶȣ�����ٶȳ���60 mph������ʾ��Speeding����������ʾ��OK����

�����ʽ��
������һ���и���1��������500�ķǸ����������״�⵽�ĳ��١�

�����ʽ��
��һ���������������ʾ�������ʽΪ��Speed: V - S������V�ǳ��٣�S������Speeding��������OK��

��������1��
40
�������1��
Speed: 40 - OK
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned num;
    cin >> num;
    if (num > 60)
    {
        cout << "Speed: " << num << " - Speeding";
    }
    else
    {
        cout << "Speed: " << num << " - OK";
    }

    return 0;
}