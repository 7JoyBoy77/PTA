/*
����Ҫ������������������N���󷽳�X
2
 +Y
2
 =N��ȫ���������⡣
�����ʽ��
������һ���и���������N����10000����
�����ʽ��
�������X
2
 +Y
2
 =N��ȫ���������⣬����X��Y��ÿ���ռ1�У������ּ���1�ո�ָ�����X�ĵ���˳����������û�н⣬�����No Solution��
��������1��
884
�������1��
10 28
20 22
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned N;
    cin >> N;
    // X**2 + Y**2 = N  X<= Y;
        unsigned flag = 0;
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = i ; j <= 10000  ; j++)
        {
            if ((i * i) + (j * j) == N )
            {
                flag++;
                cout << i << " " << j << endl;
                break;
            }    
        }
    }
    if (flag == 0)
    {
        cout << "No Solution";
    }
    

    return 0;
}