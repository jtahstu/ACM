/**
 * ��⣺
 �ҹ���ˮ�⣬��ȡ���������ɣ���4,8��������������������ֵΪ7^8=15=(1111)2=2^4-1;
 ��������һ����2,6��������������������ֵΪ2^5=7=(111)2=2^3-1;
 ͨ�����������ɵ�֪���ֵΪ2^n-1,��n�����ұ߽�����Ķ�����λ����
 */
#include <stdio.h>
int main()
{
	long long min, max, XOR, result;
	while (~scanf("%lld%lld", &min, &max))
	{
		XOR = min ^ max;
		for (result = 1; result <= XOR; result <<= 1)
			;
		printf("%lld\n", result - 1);
	}
	return 0;
}
