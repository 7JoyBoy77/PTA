/*
�����������һ��������������һ���ڸ����ܳ��Ȳ�����500 000���ַ�����
�ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮�������ɸ��ո�ֿ���

�����ʽ��
ÿ���������������ռһ�У���������ľ��ӣ����ұ�֤���ʼ�ֻ��1���ո�

����������
Hello World   Here I Come
���������
Come I Here World Hello
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    vector<string> vec_str;
    int flag = 0;
    // ��ʼ���ǿո���Ҫ�жϿո�ǰ�Ƿ��ǿո�,��ʽ���ַ���
    while (str[flag] == ' ')
    {
        str = str.substr(flag + 1);
    }   
    while (str != "\0")
    {
        if ((str[flag] != ' ') && (str[flag] != '\0'))
        {
            flag++;
        }
        else if (str[flag] == ' ')
        {
            vec_str.push_back(str.substr(0, flag));
            str = str.substr(flag);
            flag = 0;
            while (str[flag] == ' ')
            {
                flag++;
                str = str.substr(flag);
                flag = 0;
            }
        }
        else if (str[flag] == '\0')
        {
            vec_str.push_back(str.substr(0, flag));
            str = str.substr(flag);
        }
    }
    // i--���޷�����������
    for (int i =static_cast<int> (vec_str.size() - 1); i >= 0; i--)
    {
        if (i == 0)
        {
            cout << vec_str[i];
        }
        else
        {
            cout << vec_str[i] << " ";
        }
    }

    return 0;
}

// ������ int i = (static_cast<int> (vec_str.size()) - 1);  ��decltype(vec.size()) i = vec.size();  
// int i = (vec_str.size() - 1)��������ʽת������size_t���� 
/*
    // ȥ��ǰ����β��ո񣨸���Ч�ķ�����
    size_t start = 0, end = str.size() - 1;
    while (start <= end && str[start] == ' ') ++start;
    while (end >= start && str[end] == ' ') --end;
    str = str.substr(start, end - start + 1);
*/