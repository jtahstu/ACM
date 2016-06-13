小女孩数数
时间限制：1000 ms  |  内存限制：65535 KB
描述
一个小女孩正在用左手手指数数，从1数到n。她从拇指算作1开始数起，然后，食指为2，中指为3，无名指为4，小指为5。接下来调转方向，无名指算作6，中指为7，食指为8，大拇指为9，如此反复。问最后会停在那个手指上？用编号1、2、3、4、5依次表示大拇指、食指、中指、无名指、小指。 
输入
输入多组数据。每组数据占一行，只包含一个整数n(1<=n<=1000000000)。
输出
每组数据占一行，只包含一个介于1和5之间的整数，表示最后停留的手指。
样例输入
1
10
1000000000
样例输出
1
2
2
上传者
ACM_陈秋嫦
#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
	
	return 0;
}
/*
 1  2   3   4   5 (手指)
 
 1  2   3   4   5
9   8   7   6
   10  11  12  13
   16  15  14
。。。。。
 

*/

#include "stdio.h"

int main()
{
    long long n;
    while(~scanf("%lld",&n)){
            int result;
            result=n%8;
            if(result==0){
                printf("2\n");         
            }else if(result<6){
                printf("%d\n",result);             
            }else{
                printf("%d\n",10-result);
            }
    }

    return 0;    
}