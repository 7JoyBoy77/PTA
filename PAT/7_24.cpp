/*
�������Ա�ʾΪ����/��ĸ����ʽ����дһ������Ҫ���û�����һ��������Ȼ����Լ��Ϊ����ʽ��
����ʽ��ָ���Ӻͷ�ĸ�����п���Լ�ֵĳɷ��ˡ���6/12���Ա�Լ��Ϊ1/2��
�����Ӵ��ڷ�ĸʱ������Ҫ���Ϊ�����ַ�������ʽ����11/8����11/8���������ӷ�ĸ���ʱ����Ȼ���Ϊ1/1�ķ�����ʽ��

�����ʽ��
������һ���и���һ�����������Ӻͷ�ĸ�м���б��/�ָ����磺12/34��ʾ34��֮12��
���Ӻͷ�ĸ������������������0�����������������Ķ���Ļ�����

��ʾ��

����C���ԣ���scanf�ĸ�ʽ�ַ����м���/����scanf���������б�ܡ�
����Python���ԣ���a,b=map(int, input().split('/'))�����Ĵ������������б�ܡ�
�����ʽ��
��һ����������������Ӧ������ʽ����ʽ���������ͬ�������÷���/��ĸ����ʽ��ʾ��������
5/6��ʾ6��֮5��

����������
66/120
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned numerator, denominator;
    char slash;
    cin >> numerator >> slash >> denominator;
    if (numerator < denominator)
    {
        for (unsigned i = 2; i <= numerator; i++)
        {
            if (((numerator % i) == 0) && ((denominator % i) == 0))
            {
                numerator /= i;
                denominator /= i;
                i = 1; // ���ڱ��ʽ����i++
            }
        }
        cout << numerator << slash << denominator << endl;
    }
    else if (numerator == denominator)
    {
        cout << "1/1" << endl;
    }
    else if (numerator > denominator)
    {
        cout << numerator << slash << denominator << endl;
    }
    return 0;
}
/*
���õ����������ҵ�һ����Լ��������ӵ�ǰ��iֵ��ʼ�����һ�����ܵĹ�Լ����
Ȼ�����������Ѿ�ʹ���˴�2��numerator��ѭ����
����ÿ���ҵ���Լ���󶼽����˳�����������ʵ�����Ѿ���������������Щ�Ѿ���Լ��������
*/
// �����õ�շת�����