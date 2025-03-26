#include <vector>
#include <algorithm>
// ���������ֱ�����0 -> ����һ��
// �������򣬱����������O(n*n) ������
// ����ָ�룬�߼�¼��Сֵ���߼�¼���ֵ
class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int max_profit = 0;
        int min_price = prices.at(0);

        for (auto i : prices)
        {
            max_profit = std::max(max_profit, i - min_price);
            min_price = std::min(i, min_price);
        }
        return max_profit;
    }
};
