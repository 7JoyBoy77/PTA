/*
�����֪Ӣ�Ƴ��ȵ�Ӣ��foot��Ӣ��inch��ֵ����ô��Ӧ������(foot+inch/12)��0.3048�����ڣ�����û����������������
��ô��ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ���Ƕ����أ�������1Ӣ�ߵ���12Ӣ�硣

�����ʽ��
������һ���и���1������������λ�����ס�

�����ʽ��
��һ������������������ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ�������ֵ���м��ÿո�ֿ���Ӣ���ֵӦС��12��

����������
170
���������
5 6
*/
#include <iostream>
using namespace std;
int main()
{
    int sm;
    int cm;
    cin >> cm;
    int foot, inch;
    double all_inch;
    // (foot  + inch/12) * 0.3048 * 100 = cm
    // (all_inch - inch)/12 = foot;
    // ((all_inch - inch)/12 + inch/12) * 0.3048 * 100 = cm;
    all_inch = static_cast<double> (cm) / 100 / 0.3048 *12;
    foot = static_cast<int> (all_inch)/12;
    inch = static_cast<int> (all_inch)%12;
    cout << foot << " " << inch << endl;
    return 0;
}
