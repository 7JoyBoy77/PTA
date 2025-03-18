#include <vector>
#include <utility>
// �ҵ�����ֵ����С��ֵ*��ֵˮƽ����
// ����������¼���O(N*N)
// ����ָ��
// ѡ������ϴ���ƶ�����̰����
class Solution
{
public:
    int maxArea(std::vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;
        while (left != right)
        {
            int current_area = Area(left, right, height);
            if (current_area > max_area)
            {
                max_area = current_area;
            }
            if (height[left] <= height[right])
            {
                left += 1;
            }
            else
            {
                right -= 1;
            }
        }
        return max_area;
    }
    int Area(int left, int right, std::vector<int> &height)
    {
        return (std::min(height[left], height[right])) * (right - left);
    }
};