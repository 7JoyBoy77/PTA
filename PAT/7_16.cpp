/*
����������6��������A�����Ǵ�A��ʼ������4�����֡������������������ɵ����ظ����ֵ�3λ����

�����ʽ��
������һ���и���A��

�����ʽ��
������������ĵ�3λ����Ҫ���С����ÿ��6���������������Կո�ָ�������ĩ�����ж���ո�

����������
2
���������
234 235 243 245 253 254
324 325 342 345 352 354
423 425 432 435 452 453
523 524 532 534 542 543
*/
/*
����������6��������A�����Ǵ�A��ʼ������4�����֡������������������ɵ����ظ����ֵ�3λ��
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int A;
    cin >> A;
    vector<int> vec(4);
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = A + i;
    }
    // 4���������ظ���� C14*C13*C12
    for (int i = 0; i < vec.size(); i++)
    {
        int flag = 0;
        int num1 = vec[i] * 100;
        for (int j = 0; j < vec.size(); j++)
        {
            if (j == i)
            {
                continue;
            }
            int num2 = vec[j] * 10;
            num2 += num1;
            for (int k = 0; k < vec.size(); k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                int num3 = vec[k];
                num3 = num3 + num2;
                if (flag == 5)
                {
                    cout << num3;
                }
                else
                {
                    cout << num3 << " ";
                    flag++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}