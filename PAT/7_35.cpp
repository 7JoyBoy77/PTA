/*
����Ҫ���д���򣬼���N����������ƽ��ֵ��

�����ʽ��
�����һ�и���������N����100����
�ڶ����а���a1/b1 a2/b2 ���ĸ�ʽ����N��������ʽ�������������з��Ӻͷ�ĸȫ�����η�Χ�ڵ�������
����Ǹ������򸺺�һ����������ǰ�档

�����ʽ��
��һ���а���a/b�ĸ�ʽ���N����������ƽ��ֵ��ע������Ǹ�����������������ʽ������ĸΪ1����ֻ������ӡ�

��������1��
4
1/2 1/6 3/6 -5/10
�������1��
1/6
*/
#include <iostream>
using namespace std;

    static int final_up;
    static int final_down;
void Func()
{
        int flag;
    if (final_up > final_down)
    {
        flag = final_up;
    }
    else
    {
        flag = final_down;
    }

    for (int i = 2; i < flag; i++)
    {
        if ((final_up / i >= 1 && final_up % i == 0) && (final_down / i >= 1 && final_down % i == 0))
        {
            final_up /= i;
            final_down /= i;
            // flag /= i;
            i = 2;
        }
    }
}
int main()
{
    int N;
    cin >> N;
    int up, down;
    char c1;

    for (int i = 0; i < N; i++)
    {
        cin >> up >> c1 >> down;
        if (i == 0)
        {
            final_up = up;
            final_down = down;
        }
        else
        {
            if (final_down == down)
            {
                final_up += up;
                Func();
            }
            else
            {

                final_up = up * final_down + final_up * down;
                final_down *= down;
                Func();
            }
        }
    }
    // ����Final_down && final_up;
    final_down *= N;
    Func();
// ���
    if (final_up == final_down)
    {
        cout << 1;
    }
    else if (final_down == 1)
    {
        cout << final_up;
    }
    else
    {
        cout << final_up << c1 << final_down;
    }
    return 0;
}