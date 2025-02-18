/*
����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ��
�����������һ��������������һ���ڸ����ܳ��Ȳ����� 80 ���ַ�����
�ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮���� 1 ���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�

�����ʽ��
ÿ���������������ռһ�У���������ľ��ӡ�
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
template <typename T>
void reverse(std::vector<T> &vec, int begin, int end)
{
    while (end > begin)
    {
        //  Using vec.at() can add boundry check
        std::swap(vec.at(begin), vec.at(end));
        begin++;
        end--;
    }
}
int main()
{
    // ͨ�����Ѱ�ҿ��ַ����ض��ִ���
    std::string str;
    std::getline(std::cin, str);
    std::vector<std::string> vec_str;
    while (str.find(" ", 0) != std::string::npos)
    {
        auto number = str.find(" ", 0);
        std::string temp_str = str.substr(0, number);
        vec_str.push_back(temp_str);
        str = str.substr((number + 1), (str.size() - number));
    }
    vec_str.push_back(str);
    reverse(vec_str, 0, (vec_str.size() - 1));
    for (auto i = 0; i < (vec_str.size() - 1); i++)
    {
        std::cout << vec_str.at(i) << " ";
    }
    std::cout << vec_str.back();
    return 0;
}