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
        int ptr1 = m - 1;
        int ptr2 = n - 1;
        for (int i = (m + n - 1); i >= 0; i--)
        {
            if (ptr1 < 0)
            {
                nums1[i] = nums2[ptr2];
                ptr2--;
                continue;
            }
            if (ptr2 < 0)
            {
                nums1[i] = nums1[ptr1];
                ptr1--;
                continue;
            }
            if (nums1[ptr1] >= nums2[ptr2])
            {
                nums1[i] = nums1[ptr1];
                ptr1--;
            }
            else
            {
                nums1[i] = nums2[ptr2];
                ptr2--;
            }
        }
    }
};
