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
//���н��
//19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
�����Ҫ�����ȶ��Ļ������ʹ��stable_sort ������
ͬʱ��stdlib.h �ļ�����һ�����ź���qsort��ԭ��Ϊ��
void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1,const void *elem2 ) );
�÷����£�
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
//���Ϊ��
//23 12 8 5 4 4 3 2 1
