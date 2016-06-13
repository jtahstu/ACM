#include <cstdio>
#include<algorithm>
const int MAX_N = 50;
// ����
int n, m, k[MAX_N];
bool binary_search(int x)
{
// x�Ĵ��ڷ�Χ��k[l], k[l+1], ��, k[r-1].
    int l = 0, r = n;
// ��������ֱ�����ڷ�ΧΪ��
    while (r - l >= 1)
    {
        int i = (l + r) / 2;
        if (k[i] == x) return true; // �ҵ�x
        else if (k[i] < x) l = i + 1;
        else r = i;
    }
// û�ҵ�x
    return false;
}
void solve()
{
// Ϊ��ִ�ж��ֲ�����Ҫ������
    sort(k, k + n);
    bool f = false;
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            for (int c = 0; c < n; c++)
            {
// �����ڲ��ѭ���滻�ɶ��ֲ���
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
