/*�����Ѿ�֪���˽�N����������С���������ð�����򷨡�����Ҫ�󽫴˷��������ַ������У�
�������������K��<N�������ɨ�����K�����м������С�

�����ʽ��
�����ڵ�1���и���N��K��1��K<N��100�����˺�N�У�ÿ�а���һ�����Ȳ�����10�ġ�����СдӢ����ĸ��ɵķǿ��ַ�����

�����ʽ��
���ð������ɨ�����K�����м������У�ÿ�а���һ���ַ���
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    unsigned N, K;
    cin >> N >> K;
    vector<string> vec;
    for (auto i = N; i != 0; i--)
    {
        string str;
        cin >> str;
        vec.push_back(str);
    }
    for (unsigned j = 1; j <= K; j++)
    {
        for (int i = 0; i < (N - j); i++)
        {
            if (vec[i] > vec[i + 1])
            {
                string tmp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = tmp;
            }
        }
    }
    for (auto &i : vec)
    {
        cout << i << endl;
    }

    return 0;
}
// �ַ���> >=�ȱ������ˣ����ԱȽ�