/*
����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸣������㲻��ʹ��������ͬ��Ԫ�ء�

����԰�����˳�򷵻ش𰸡�
*/
// ��������ָ���Ȼ���Ը��ӣ���������ָ���ҵ�����������
// ��������ָ������� ������
// ��ϣ����
#include <iostream>
#include <array>
#include <vector>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int fast = 0;
        int slow = 0;
        while (fast < nums.size())
        {
            int sum = nums[fast] + nums[slow];
            if (sum < target)
            {
            }
            else if (sum > target)
            {
            }
        }
        return {slow, fast};
    }
};
int main()
{

    return 0;
}