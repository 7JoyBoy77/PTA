/*
�ָ�������������N(<10
5
 )������㲻����N���������������Եĸ�����
�����ʽ:
������һ�и���������N��
�����ʽ:
��һ�������������N���������������Եĸ�����
*/
// һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ������������������
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<unsigned> vec;
    unsigned N;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        int test_case = 0;
        for (int j = 2; j <= (int)sqrt(i); j++)
        {
            if ((i % j) == 0)
            {
                test_case = 1;
                break;
            }
        }
        if (test_case == 0)
        {
            vec.push_back(i);
        }
    }
    int sum = 0;
    for (int i = 1; i < vec.size(); i++)
    {
        if ((vec[i] - vec[i - 1]) == 2)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}