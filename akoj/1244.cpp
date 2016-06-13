#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[1001];
    int len;
    while(cin>>a)
    {
        int count=0,max=0,x=0,y=0;
        len=strlen(a);
        for(int i=0; i<len; i++)
        {
            if(a[i]=='(')
            {
                count++;
                x++;
                if(count>max)max=count;
            }
            else if(a[i]==')')
            {
                count=0;
                y++;
            }
            if(y>x)
            {
                cout<<"Error"<<endl;
                break;
            }
        }
        if(x==y)
            cout<<max<<endl;
        else if(x>y)
            cout<<"Error"<<endl;
    }
    return 0;
}
