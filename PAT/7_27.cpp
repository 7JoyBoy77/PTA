
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    unsigned N, K;
    vector<unsigned> vec;
    cin >> N >> K;
    unsigned copyN = N;
    while (copyN != 0)
    {

        unsigned num1;
        cin >> num1;
        vec.push_back(num1);
        copyN--;
    }
    for(unsigned i = 0; i < K ; i++)
    {
        // �����������о������� ��û��Ӱ������Ľ�����ֻ��k��ָ��ͷԪ�صĵ����� 
        // �����Ǹ�����Ԫ�����򣡣���
        for(auto j = vec.begin(); j != vec.end() ; j++)
        {
            auto k = j++;
            if ((*j) > (*k))
            {
                
            }
            
        }
    }
    /*
    for (unsigned i = 0; i < K; i++)
    {
        for (unsigned j = 0; j < N - i; j++)
        {   
            unsigned num4 = j + 1;
            // �������±�͵�����������
            if (vec[j] > vec[num4])
            {
                unsigned num2 = vec[num4];
                unsigned num3 = vec[j];
                vec[num4] = num3;
                vec[j] = num2;
            }
        }
    }
    */

    for (unsigned i = 0; i < N; i++)
    {
        if (i == 0)
        {
            /* code */
            cout << vec[i];
        }
        else
        {
            cout << " " << vec[i];
        }
    }
    // vector<unsigned>::iterator b = vec.begin();
    // auto e = vec.end();
    /*
    for (auto b = vec.begin(); b != vec.end(); b++)
    {
        if (b == vec.begin())
        {
            cout << *b;
        }
        else
        {
            cout << " " << *b;
        }
    }
    */

    return 0;
}