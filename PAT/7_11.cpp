/*
Ϊ���������Լ��ˮ������ˮ��˾��ȡ����ˮ������ʽ�Ƽ۵İ취������Ӧ��ˮ��y��Ԫ��������ˮ��x���֣���أ�
��x������15��ʱ��y=4x/3��������y=2.5x?17.5�����д����ʵ��ˮ�ѵļ��㡣

�����ʽ��
������һ���и����Ǹ�ʵ��x��

�����ʽ��
��һ�����Ӧ����ˮ�ѣ���ȷ��С�����2λ��

��������1��
12
�������1��
16.00
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned num;
    cin >> num;
    double waterRate;
    if (num <= 15)  
    {
        waterRate = 4 * num / 3;
    }
    else
    {
        waterRate =2.5 * num  - 17.5;
    }
    cout.precision(2);
    cout << fixed << waterRate;
    return 0;
}