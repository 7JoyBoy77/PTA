#include <vector>
#include <iostream>
#include <algorithm>
// �������Ƚ�������Ψһ�����ض�������棬�������鳤��
// Ψһ���ĵײ�ʵ�֣��Ƚϣ��漰���ݽṹ������ɾ����ͨ���⺯��ѧϰ�������տ⺯��

class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        // ˫ָ�뷨
        auto first = nums.begin();
        auto last = nums.begin();
        while (first != nums.end())
        {
            first++;
            if (first != last)
            {
                last++;
                *last = *first;
            }
        }
        // ������ɾ��
    }
};

int main()
{
    Solution obj;
    std::vector<int> numbers{1, 1, 2, 3, 5, 5, 7, 9};
    int out = obj.removeDuplicates(numbers);
    for (auto &i : numbers)
    {
        std::cout << i << std::endl;
    }
    return 0;
}