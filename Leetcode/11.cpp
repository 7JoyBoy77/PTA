#include <vector>
// �ҵ�����ֵ����С��ֵ*��ֵˮƽ����
// ����������¼���O(N*N)
// ����ָ��
// ѡ������ϴ���ƶ�����̰����
class Solution
{
public:
    int maxArea(std::vector<int> &height)
    {
        auto _begin = height.begin();
        auto _end = height.end() - 1;
        auto _bottom = std::distance(_begin, _end);
        auto area = ((*_end) > (*_begin)) ? _bottom * (*_end) : _bottom * (*_begin);
        while (_begin != _end)
        {
            // ����ָ���ƶ�����
            if ()
        }
    }
};