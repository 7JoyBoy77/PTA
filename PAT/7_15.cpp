/*
���������ϵʽ����Բ���ʵ�ֵ��ֱ�����һ���ֵС�ڸ�����ֵ��


�����ʽ��
������һ���и���С��1����ֵ��

�����ʽ��
��һ�������������ֵ�����Ľ���Բ���ʣ������С�����6λ��

����������
0.01
���������
3.132157
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float threshold;
    cin >> threshold;
    double factorial = 1;
    double odd_factorial = 1;
    float hlaf_pai = 0;
    float first_item = 1;
    float end_item = first_item;
    for (int i = 1; end_item >= threshold; i++)
    {
        factorial *= i;
        odd_factorial *= 2 * i + 1;
        hlaf_pai += factorial / odd_factorial;
        // cout << hlaf_pai << " ";
        end_item = factorial / odd_factorial;
    }
    hlaf_pai += first_item;

    cout.setf(ios::fixed);

    cout << setprecision(6) << 2 * hlaf_pai;
    return 0;
}