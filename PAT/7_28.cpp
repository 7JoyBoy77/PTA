/*
һȺ����Ҫѡ�º������º�����ѡ�񷽷��ǣ���Nֻ��ѡ����Χ��һȦ����ĳλ����˳����Ϊ1~N�š�
�ӵ�1�ſ�ʼ������ÿ�ִ�1����3��������3�ĺ��Ӽ��˳�Ȧ�ӣ������ִӽ��ڵ���һֻ���ӿ�ʼͬ���ı�����
��˲���ѭ�������ʣ�µ�һֻ���Ӿ�ѡΪ������������ԭ���ڼ��ź��ӵ�ѡ������

�����ʽ��
������һ���и�һ��������N����1000����

�����ʽ��
��һ���������ѡ�����ı�š�

����������
11
���������
7
*/
// �������������
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<unsigned> vec;

    unsigned N;
    cin >> N;
    for (unsigned i = 1; i <= N; i++)
    {
        // vec[i] = i;
        vec.push_back(i);
    }
    unsigned flag = 0;
    unsigned num = 0;
    auto b = vec.begin();
    while (N != 1)
    {

        if (b != vec.end())
        {
            if (vec[num] == 0)
            {
                num++;
                b++;
            }
            else
            {

                flag++;
                if (flag % 3 == 0)
                {
                    vec[num] = 0;
                    N--;
                }
                    b++;
                    num++;
            }
        }
        else
        {
            b = vec.begin();
            num = 0;
        }
    }
    for (auto &i : vec)
    {
        if (i != 0)
        {
            cout << i;
        }
    }

    return 0;
}