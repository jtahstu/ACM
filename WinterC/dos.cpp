#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(void)
{
    char cmd[40]= "md ";
    char name[20];
    cout<<"Ŀ¼��: ";
    cin.getline(name,20);
    strcat(cmd,name);
    system(cmd);
}
