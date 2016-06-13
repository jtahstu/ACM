#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 100010
#define lson l, m, id << 1
#define rson m+1, r, id << 1 | 1
#define maxi(a, b) (a > b ? a : b)
#define mini(a, b) (a < b ? a : b)
int Max[N<<2], Min[N<<2];
void FindM(int id) {//构建最值树
    Max[id] = maxi(Max[id<<1], Max[id<<1|1]);
    Min[id] = mini(Min[id<<1], Min[id<<1|1]);
}
void build(int l, int r, int id) {
    if(l == r) {
        scanf("%d", Max+id);
        Min[id] = Max[id];
        return ;
    }
    int m = (l+r) >> 1;
    build(lson); build(rson);//左右开弓
    FindM(id);
}
int Q1(int L, int R, int l, int r, int id) {//询问函数1,询问最大值
    if(L <= l&&r <= R)
        return Max[id];
    int m = (l+r) >> 1;
    int ans = 0;
    if (L <= m) {
        int u1 = Q1(L, R, lson);
        ans = maxi(ans, u1);//注意，借助新变量使用宏定义，避免复杂度×2
    }
    if (R > m) {
        int u2 = Q1(L, R, rson);
        ans = maxi(ans, u2);
    }
    return ans;//最终return的一定是它
}
int Q2(int L, int R, int l, int r, int id) {
    if(L <= l&&r <= R)
        return Min[id];
    int m = (l+r) >> 1;
    int res = 2147483647;
    if (L <= m) {
        int u1 = Q2(L, R, lson);
        res = mini(res, u1);
    }
    if (R > m) {
        int u2 = Q2(L, R, rson);
        res = mini(res, u2);
    }
    return res;
}
int main() {
	int len, cas;
	scanf("%d%d", &len, &cas);
	build(1, len, 1);
    /*for(int i = 1; i <= len << 2; i++)
        printf("%d ", Max[i]);
    puts("");
    for(int i = 1; i <= len << 2; i++)
        printf("%d ", Min[i]);
        */
    while(cas--) {
        int A, B;
        scanf("%d%d", &A, &B);
        if(A == B)
        printf("0\n");
        else
        printf("%d\n", Q1(A, B, 1, len, 1) - Q2(A, B, 1, len, 1));
    }
	return 0;
}

