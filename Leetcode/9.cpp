/*
����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��
������
��ָ���򣨴������ң��͵��򣨴������󣩶�����һ��������
*/
#include <string>
#include <algorithm>
// 1.����ת�ַ����������ַ������¾��ַ����Ƚ�
class Solution
{
public:
    bool isPalindrome(int x)
    {
        std::string x_str = std::to_string(x);
        std::string r_str;
        std::reverse_copy(x_str.begin(), x_str.end(), r_str.begin());
        if (x_str == r_str)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};