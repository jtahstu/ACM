#include <cstdio>
#include<algorithm>
const int MAX_N = 50;
// 输入
int n, m, k[MAX_N];
bool binary_search(int x)
{
// x的存在范围是k[l], k[l+1], …, k[r-1].
    int l = 0, r = n;
// 反复操作直到存在范围为空
    while (r - l >= 1)
    {
        int i = (l + r) / 2;
        if (k[i] == x) return true; // 找到x
        else if (k[i] < x) l = i + 1;
        else r = i;
    }
// 没找到x
    return false;
}
void solve()
{
// 为了执行二分查找需要先排序
    sort(k, k + n);
    bool f = false;
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            for (int c = 0; c < n; c++)
            {
// 将最内侧的循环替换成二分查找
                if (binary_search(m - k[a] - k[b] - k[c]))
                {
                    f = true;
                }
            }
        }
    }
    if (f) puts("Yes");
    else puts("No");
}
