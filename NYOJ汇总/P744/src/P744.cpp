/**
 * 题解：
 找规律水题，任取两组数即可，如4,8。计算得这个区间异或最大值为7^8=15=(1111)2=2^4-1;
 再任意找一组数2,6，计算得这个区间异或最大值为2^5=7=(111)2=2^3-1;
 通过上述分析可得知最大值为2^n-1,而n正是右边界的数的二进制位数。
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
