/*
����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸣������㲻��ʹ��������ͬ��Ԫ�ء�

����԰�����˳�򷵻ش𰸡�
*/
#include <iostream>
#include <array>
#include <vector>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((i != j) && (nums[i] + nums[j]) == target)
                {
                    return {i, j};
                    // std::cout << "[" << i << "," << j << "]" << std::endl;
                }
            }
        }
        return {};
    }
};
int main()
{

    return 0;
}