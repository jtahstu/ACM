#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 10005;
struct node
{
    int s, f;
} t[N];
bool cmp(const node a, const node b)
{
    return a.f < b.f;
}
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d", &t[i].s, &t[i].f);
        }
        sort(t, t+n, cmp);
        int k = 0, cnt = 1;
        for(int i = 1; i < n; i++)
        {
            if(t[i].s >= t[k].f)
            {
                cnt++;
                k = i;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
