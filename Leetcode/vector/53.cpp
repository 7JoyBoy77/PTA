// ����һ���������� nums �������ҳ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡��������������е�һ���������֡�
#include <vector>
#include <climits>
// �����������()����1������n������O(N*N)
// ��̬�滮���Ӽ�
class Solution
{
public:
    int maxSubArray(std::vector<int> &nums)
    {
        int _size = nums.size();
        int max_sum = INT_MIN;
        for (int i = 0; i < _size; i++)
        {
            int sum = 0;
            for (int j = i; j < _size; j++)
            {
                sum += nums[j];
                if (sum > max_sum)
                {
                    max_sum = sum;
                }
            }
        }
        return max_sum;
    }
};