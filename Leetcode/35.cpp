// ����Ѱ��Ŀ��ֵ n�� O(logn)
// �ҵ���û�ҵ�
// �ҵ�����
// û�ҵ���˳�����O(logn)
#include <vector>
class Solution
{
public:
    int searchInsert(std::vector<int> &nums, int target)
    {
        auto _size = nums.size();
        for (int i = 0; i < _size; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        // û�ҵ� ��˳�����
    }
};

// ������Ҫ���ǲ��ң�O(logn)ʱ�临�ӶȵĲ���