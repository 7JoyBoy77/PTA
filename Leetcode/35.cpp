// ����Ѱ��Ŀ��ֵ n�� O(logn)
// �ҵ���û�ҵ�
// �ҵ�����
// û�ҵ���˳�����O(logn)
// ���ֲ���
#include <vector>
class Solution
{
public:
    int searchInsert(std::vector<int> &nums, int target)
    {
        auto begin = nums.begin();
        auto end = nums.end() - 1;
        auto mid = begin + (end - begin) / 2;

        while (lo < hi)
        {
            int mi = (lo + hi) >> 1;
            if(e<A[mi]) hi = mi;
            else if (A[mi]) lo =mi + 1;
            else  return mi;
            /* code */
        }
        
        // low == hiʱ��ָ�����һ��Ԫ��
    }
};

// ������Ҫ���ǲ��ң�O(logn)ʱ�临�ӶȵĲ��� ���ֲ���
/*
        auto hi = nums.size() - 1;
decltype(nums.size()) low = 0;
while (low <= hi)
{
    auto mid = low + (hi - low) / 2;
    if (nums[mid] == target)
    {
        return mid;
    }
    else if (nums[mid] < target)
    {
        low = mid + 1;
    }
    else
    {
        hi = mid - 1;
    }
}
// û�ҵ� ��˳�����
return low;
*/