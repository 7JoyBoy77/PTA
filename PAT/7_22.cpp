/*
�ڹ������ӽ������ܣ��ܳ���һ�������ܵ����ܵ��߿�����ؽ�����Ϣ���ڹ�ÿ���ӿ���ǰ��3�ף�����ÿ����ǰ��9�ף�
�������ڹ��ܵ��������ÿ϶�����Ӯ�ڹ꣬���ǣ�ÿ��10���ӻ�ͷ��һ���ڹ꣬�������Լ������ڹ꣬����·����Ϣ��ÿ����Ϣ30���ӣ�
���������10���ӣ�
���ڹ�ǳ�Ŭ����һֱ�ܣ�����Ϣ���ٶ��ڹ���������ͬһ���ͬһʱ�̿�ʼ���ܣ�����T���Ӻ��ڹ������˭�ܵÿ죿

�����ʽ��
������һ���и�������ʱ��T�����ӣ���

�����ʽ��
��һ������������Ľ�����ڹ�Ӯ���@_@������Ӯ���^_^��ƽ�������-_-�����1�ո������ʤ��������ľ��롣

����������
242
���������
@_@ 726
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned distance_R = 0, distance_T = 0;
    unsigned T;
    cin >> T;
    unsigned flag = 0;

    for (int i = 1; i <=T; i++)
    {
        distance_T += 3;
        if (flag == 0)
        {
            distance_R += 9;
        }
        else
        {
            flag--;
        }
        if (i % 10 == 0 && (distance_R > distance_T))
        {
            flag += 30;
        }
    }
    if (distance_R > distance_T)
    {
        cout << "^_^ " << distance_R;
    }
    else if (distance_T > distance_R)
    {
        cout << "@_@ " << distance_T;
    }
    else
    {
        cout << "-_- " << distance_T;
    }

    return 0;
}