/*
����Ҫ���д���򣬼��������������ĺ͡�

�����ʽ��
������һ���а���a1/b1 a2/b2�ĸ�ʽ��������������ʽ�������������з��Ӻͷ�ĸȫ�����η�Χ�ڵ���������

�����ʽ��
��һ���а���a/b�ĸ�ʽ��������������ĺ͡�ע������Ǹ�����������������ʽ������ĸΪ1����ֻ������ӡ�
*/
#include <iostream>
#include <string>
using namespace std;
long GCD(long a, long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}
int main()
{
    string str;
    getline(cin, str);

    int numerator_A, numerator_B;
    long numerator;
    int denominator_A, denominator_B;
    long denominator;
    string right_str, left_str;
    // дһ���ָ��������
    for (int i = 0; i < (str.size() - 1); i++)
    {
        if (str[i] == ' ')
        {
            left_str = str.substr(0, i);
            right_str = str.substr(i + 1);
        }
    }
    for (int i = 0; i < (left_str.size() - 1); i++)
    {
        if (left_str[i] == '/')
        {
            numerator_A = stoi(left_str.substr(0, i));
            denominator_A = stoi(left_str.substr(i + 1));
        }
    }
    for (int i = 0; i < (right_str.size() - 1); i++)
    {
        if (right_str[i] == '/')
        {
            numerator_B = stoi(right_str.substr(0, i));
            denominator_B = stoi(right_str.substr(i + 1));
        }
    }
    numerator = (numerator_A * denominator_B) + (numerator_B * denominator_A);
    denominator = denominator_A * denominator_B;
    long num = GCD(numerator, denominator);
    numerator /= num;
    denominator /= num;
    if (denominator == 1)
    {
        cout << numerator;
    }
    else
    {
        cout << numerator << "/" << denominator;
    }
    return 0;
}
// �Լ������� �����ķ�װ��