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
    int speedR = 9, speedT = 3;
    int distanceR = 0, distanceT = 0;
    unsigned time;
    cin >> time;
    unsigned timeInterval = time / 10;
    while (timeInterval != 0)
    {
        if (distanceR > distanceT)
        {
            speedR = 0;
        }
        else
        {
            speedR = 9;
        }
        distanceR += speedR * 10;
        distanceT += speedT * 10;
        timeInterval--;
    }
    if (distanceR > distanceT)
    {
        distanceT += (time % 10) * speedT;
    }
    else
    {
        distanceR += (time % 10) * speedR;
        distanceT += (time % 10) * speedT;
    }
    if (distanceR > distanceT)
    {
        cout << "^_^ " << distanceR << endl;
    }
    else if (distanceT > distanceR)
    {
        cout << "@_@ " << distanceT << endl;
    }
    else
    {
        cout << "-_- " << distanceT << endl;
    }
    return 0;
}