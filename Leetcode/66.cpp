// ����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
// ���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
// ����Լ���������� 0 ֮�⣬��������������㿪ͷ��
//
// ѡ��ĩλ
// ĩλΪ9ʱ��һ����λ��1��ĩβ��0
//  ��Ŀ��������
#include <vector>
class Solution
{
public:
    std::vector<int> plusOne(std::vector<int> &digits)
    {
        auto end = digits.size() - 1;
        if (digits[end] != 9)
        {
            digits[end]++;
        }
        else
        {
            digits[end]++;
            digits.push_back(0);
        }
    }
};