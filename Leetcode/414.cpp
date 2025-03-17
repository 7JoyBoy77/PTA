#include <vector>
#include <algorithm>
// 0 <length < 3 �ȽϷ��ؼ���
//  length >= 3 ������¼ ��1��������� �� ��ָ�뷨
//  ��һ����high �ڶ����Ƚ�high ��mid �� ������ �Ƚ�����
// ���ĸ����ˣ��ж�������ֵ��Ȼ��ֱ�ֵ
class Solution
{
public:
    int thirdMax(std::vector<int> &nums)
    {
        int length = nums.size();

        // �������ҵ���Сֵ
        int index = 0;
        for (int i = 1; i < length; i++)
        {
            if (nums[index] > nums[i])
            {
                index = i;
            }
        }
        int high = index;
        int mid = index;
        int low = index;
        for (int i = 0; i < length; i++)
        {
            if ((nums[i] > nums[high]))
            {
                low = mid;
                mid = high;
                high = i;
            }
            else if ((nums[i] > nums[mid]) && (nums[i] != nums[high]))
            {
                low = mid;
                mid = i;
            }
            else if ((nums[i] > nums[low]) && (nums[i] != nums[mid]) && (nums[i] != nums[high]))
            {
                low = i;
            }
        }
        if ((high == mid) || (mid == low))
        {
            return nums[high];
        }
        else
        {
            return nums[low];
        }
    }
};
