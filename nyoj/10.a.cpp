#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000005];
int icount = 1;
int main()
{
    for(int i = 2; i <= 1000000; i++)
    {
        if(!a[i])
        {
            a[i] = icount++;
            for(int j = i * 2; j <= 1000000; j += i)
                a[j] = a[i];
        }
    }
    int num;
    while(scanf("%d", &num) == 1)
    {
        for(int i = num; i >= 1; i--)
        {
            if(num % i == 0 && a[i] != -1)
            {
                printf("%d\n", a[i]);
                break;
            }
        }
    }
}
