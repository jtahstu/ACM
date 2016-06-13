#include<iostream>

using namespace std;

//int main()
//{
//    char a[3];
//    cin>>a[0]>>a[1]>>a[2];
//    if(a[2]=='0') cout<<a[1]<<a[0]<<endl;
//    else if(a[2]=='0'&&a[1]=='0') cout<<a[0]<<endl;
//    else cout<<a[2]<<a[1]<<a[0]<<endl;
//    return 0;
//}

int main()
{
    int a;
    cin>>a;
    cout<<(a%10)*100+(a/10%10)*10+(a/100)<<endl;
    return 0;
}
