/*
����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ�������fu�֡�ʮ�����ֶ�Ӧ��ƴ�����£�
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
�����ʽ��
������һ���и���һ���������磺1234��
��ʾ�������������������������
�����ʽ��
��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո���
yi er san si��
����������
-600
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int num;
    vector<string> vec{"ling", "yi", "er", "san", "si",
                       "wu", "liu", "qi", "ba", "jiu"};
    cin >> num;
    unsigned flag = 0;
    string str = to_string(num);
    for (auto &i : str)
    {
        if (i == '-')
        {
            cout << "fu ";
        }
        else
        {       
            int c = i - '0';
            if (flag != 0)
            {
                cout << " ";
            }
            cout << vec[c];
            flag++;
        }
    }

    /*
    unsigned flag = 0;
    num = (string[0] == '-') ? -num : num;
        num
    for (int i = 0;;i++)
    {
        if (str[i] == '-')
        {
            cout << "fu ";
        }
        else
        {
            if (flag != 0)
            {
                cout << " ";
            }
            vec[i];
            flag++;
        }
    }

    */
    // array[10] = {"ling", "yi", "er","san""si","wu","liu","qi","ba',"jiu"};
    // string array[10];

    return 0;
}