/*һ����泤1�磬��һ����ΪN��ľ��ĵײ�����֪���ÿ1���ӿ���������U�磬��������Ϣ1���Ӳ��ܽ�����������
����Ϣ�Ĺ����У�������»���D�硣���������������»��ظ����С����ʣ������Ҫ�೤ʱ�������������
����Ҫ����1���Ӱ�1���Ӽƣ����Ҽٶ�ֻҪ��ĳ����������������ͷ�������˾��Ķ�������ô�������������
����ʼʱ�������ſ�ھ��׵ģ����߶�Ϊ0����
�����ʽ��
������һ����˳�����3��������N��U��D������D<U��N������100��
�����ʽ��
��һ������������������ʱ�䣬�Է���Ϊ��λ��
����������
12 3 1
���������
11
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float N, U, D;
    cin >> N >> U >> D;
    float same_time = 0;
    // N <= same_time*U - same_time*D + U;
    // same_time >= (N - U)/(U - D);
    same_time = (N - U) / (U - D); // ����ȡ��
    // same_time<=0
    same_time = ceil(same_time);
    // float com_time = static_cast<int>(same_time);
    /*
    if (same_time > com_time)
    {
        same_time = com_time + 1;
    }
    */
    float all_time;
    all_time = same_time < 0 ? 1 : 2 * same_time + 1;
    /*
    if (same_time < 0)
    {
        all_time = 1;
    }
    else
    {
        all_time = 2 * same_time + 1;
    }
    */
    cout << all_time;
    return 0;
}
