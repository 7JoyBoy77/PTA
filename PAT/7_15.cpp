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
long Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return Factorial(n - 1) * n;
    }
}
long Function(int n)
{
    int num = 1;
    for (int i = 0; i <= n; i++)
    {
        num *= 2 * i + 1;
    }
    return num;
}
int main()
{
    double threshold;
    double pai = 0;
    cin >> threshold;
    int flag;
    for (int i = 0; static_cast<double>(Factorial(i)) / static_cast<double>(Function(i)) >= threshold; i++)
    {
        pai += static_cast<double>(Factorial(i)) / static_cast<double>(Function(i));
        flag = i;
    }
    flag++;
    pai += static_cast<double>(Factorial(flag)) / static_cast<double>(Function(flag));
    pai *= 2.0;
    cout.precision(6);
    cout << fixed << pai;
    return 0;
}
// ���ĵݹ������β�ݹ����� N�ᳬ������