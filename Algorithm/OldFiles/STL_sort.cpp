#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>gg;
bool sortspecial(int v1,int v2)
{
    return v1>v2;
}
int main()
{
    int i;
    for(i=0; i<20; i++)
        gg.push_back(i);
    sort(gg.begin(),gg.end(),sortspecial);
    for(i=0; i<20; i++)
        cout<<gg[i]<<" ";
}
//运行结果
//19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
如果需要保持稳定的话则可以使用stable_sort 函数。
同时在stdlib.h 文件中由一个快排函数qsort，原型为：
void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1,const void *elem2 ) );
用法如下：
#include<iostream>
#include <cstdlib>
using namespace std;
int a[9]= {1,2,4,5,8,12,23,4,3};
int compare( const void *arg1, const void *arg2 );
int main( )
{
    int i;
    qsort( (void *)a, 9, sizeof(int), compare );
    /* Output sorted list: */
    for(i=0; i<9; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    system("PAUSE");
    return 0;
}
int compare( const void *arg1, const void *arg2 )
{
    return *((int *)arg2)-*((int *)arg1);
}
//输出为：
//23 12 8 5 4 4 3 2 1
