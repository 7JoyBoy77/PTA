// ����N�� ���ֲ����Ž�ȥ
// �ҵ�����2��1���������һ������������ȷ��������1�ĸ���Χ����
// ÿ����֮���������ֲ��Ҳ��� ̫���ӣ�ʱ�临�Ӷ��൱��
// ˫ָ�룬�Ƚϣ���������������б���O��M+N��
#include <vector>
class Solution
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++)
        {
        }
    }
    int Binaryfind(std::vector<int> &nums, int lo, int hi, int target)
    {
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return lo;
    }
};
