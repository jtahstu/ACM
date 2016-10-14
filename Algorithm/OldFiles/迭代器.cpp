#include <iostream>
#include <vector>
using namespace std;
vector<int>vint;
int main()
{
    int i;
    //int a[10]={9,6,3,8,5,2,7,4,1,0};
    for(i=0;i<10;i++)
        vint.push_back(i);
    vector<int>::iterator pit;
    for(pit=vint.begin();pit!=vint.end();pit++)
        cout<<(*pit)<<" ";
    return 0;
}
//运行结果
//0 1 2 3 4 5 6 7 8 9
