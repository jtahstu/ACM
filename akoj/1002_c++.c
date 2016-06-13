#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    string str;
    int count = 0;
    while( cin>>str)
    {
        int len = str.length();
        int sum = 0, flag = 0;
        for(int i = 0; i < len; i ++)
        {
            if( str[i] == '4')
            {
                flag = 1;
                break;
            }
            if( str[i] == '8' || str[i] == '6')sum ++;
        }
        if( flag == 1)continue;
        if( sum >= 5){
            cout<<str<<endl;
            count ++;
        }
    }
    cout<<count<<endl;
    return 0;
}
