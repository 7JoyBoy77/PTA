// Ψһ��������_size
// ˫ָ�뷨Ψһ��
#include <vector>
class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        auto begin = nums.begin();
        auto end = nums.end();
        auto begin_next = (nums.begin() + 1);
        while (begin_next != end)
        {
            if ((*begin_next) == (*begin))
            {
                begin_next = nums.erase(begin_next);
            }
            else
            {
                begin++;
                begin_next++;
            }
        }
        return nums.size();
    }
};
// ������ʧЧ erase()����һ���������Ѿ�ʧЧ�ĵ��������ܽ���++���������Գ����ж��ˡ�
// ����vector��erase�������Է�����һ����Ч�ĵ�����������ֻҪ����ÿ��ִ��ɾ��������ʱ�򣬽���һ����Ч����������
