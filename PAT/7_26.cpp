/*
��ĳ���Ҫ����һ���ı��������Կո�ָ�Ϊ���ɸ����ʣ���.��������Ҫ���ÿ�����ʵĳ��ȡ�����ĵ����������޹أ�
���԰������ַ��ţ�����it's��һ�����ʣ�����Ϊ4��ע�⣬���п��ܳ��������Ŀո�����.���������ڡ�

�����ʽ��
������һ���и���һ���ı�����.����

��ʾ����scanf("%c",...);������һ���ַ���ֱ������.Ϊֹ��

�����ʽ��
��һ������������ı���Ӧ�ĵ��ʵĳ��ȣ�ÿ������֮���Կո��������ĩû�����Ŀո�

����������
It's great to see you here.
���������
4 5 2 3 3 4
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int len = 0;
    int space_len = 0;
    for (auto &i : str)
    {
        if (!isspace(i))
        {
            if (space_len != 0)
            {
                cout << len << " ";
                len = 0;
                space_len = 0;
            }

            if (i == '.')
            {
                cout << len;
                break;
            }
            len++;
        }
        else
        {
            space_len++;
        }
    }

    return 0;
}