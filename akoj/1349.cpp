#include<iostream>
#include<cstring>
using namespace std;

string str[21]={"zero","one","two","three","four","five","sis","seven","eight","nine","ten","eleven","twelve",
                "thirteen","fourteen","fifteen","sisteen","seventeen","eighteen","nineteen","twenty"};

int main()
{
    int i,j,k;
    string str1,str2;
    while(cin>>str1>>str2)
    {
        for(i=0;i<21;i++)
        {
            if(str1==str[i])
                j=i;
            if(str2==str[i])
                k=i;
        }
        cout<<str[j+k]<<endl;
    }
    return 0;
}
