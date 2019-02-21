/*
	x ��ƽ����

	ʵ�� int sqrt(int x) ������

	���㲢���� x ��ƽ���������� x �ǷǸ�������

	���ڷ������������������ֻ���������Ĳ��֣�С�����ֽ�����ȥ��

	ʾ�� 1:

	����: 4
	���: 2
	ʾ�� 2:

	����: 8
	���: 2
	˵��: 8 ��ƽ������ 2.82842...,
	���ڷ���������������С�����ֽ�����ȥ��

	tips: ���ֲ���
*/

class Solution {
public:
	int mySqrt(int x) {
		int left = 0, right = x;
		if (x == 0 || x == 1) return x;

		while (left < right - 1)
		{
			int mid = (left + right) / 2;
			if (pow(mid, 2) == x)
				return mid;
			else if (pow(mid, 2) > x)
			{
				right = mid;
			}
			else
			{
				left = mid;
			}
		}
		return left;
	}
};