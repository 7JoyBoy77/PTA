#include <iostream>
#include <cmath>
using namespace std;
// ����Ψһ����
double a3, a2, a1, a0;
double Func(double x)
{
    double y = a3 * pow(x, 3) + a2 * pow(x, 2) + a1 * x + a0;
    return y;
}
double BinaryRoot(double a, double b, double threshold)
{
    // f1 * f2 < 0�����
    double f1 = Func(a);
    double f2 = Func(b);
    double root = 0;
    double midPoint = (a + b) / 2.0;
    double func_midPoint = Func((a + b) / 2.0);
    if (f1*f2 == 0)
    {
        root = 0;
        return root;
    }
    if (func_midPoint == 0)
    {
        root = midPoint;
    }

    return root;
}

int main()
{
    double endPoint1, endPoint2;
    cin >> a3 >> a2 >> a1 >> a0;
    cin >> endPoint1 >> endPoint2;

    double root = BinaryRoot(endPoint1, endPoint2, threshold);
    return 0;
}
// ȫ�ֺ�����ʹ�� ���е��С�����г�ʱ���⣨�������⣩ inline����ȫ�ֺ��� 
// �ݹ�д�Ĳ��Ǻܺã��кܶ�ȱ��
