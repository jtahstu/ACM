// 最近平方数
// Description

// 如果一个整数可以写成另一个整数的平方，则说它是一个完全平方数。比如1、4、9、16是完全平方数。
// 输入一个整数，找到一个离它最近的完全平方数。

// Input

// 仅有一组测式数据，输入一个整数N（0＜N＜100000）。

// Output

// 输出离它最近的完全平方数,如果N就是完全平方数，则输出N。

// Sample Input

// ６

// Sample Output

// ４
#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[])
{
    int N,a,b;
    double N1,N2;
    scanf("%d",&N);
    N1=sqrt(N);
    a=(int)N1;
    b=a+1;
    if ((N-a*a)<(b*b-N)) printf("%d\n", a*a);
    else printf("%d\n", b*b);
    return 0;
}
