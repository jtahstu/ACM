#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1000;
struct bro
{
    string name;
    int year;
    int month;
    int day;
} ;
struct bro a[N];

int run(int year)
{
    if(year%4==0&&year%100!=0||year%400==0)
        return true;
    return false;
}

int days(int year,int month,int day)
{
    int sum=0,a[12]= {31,28,31,30,31,30,31,31,30,31,30,31},
                     b[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
    if(run(year))
        for(int i=0; i<month-1; i++)
            sum+=a[i];
    else
        for(int i=0; i<month-1; i++)
            sum+=a[i];
    sum+=day;
}

int main()
{
    int n;
    cin>>n;
    int day[N];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].name>>a[i].year>>a[i].month>>a[i].day;
        day[i]=days(a[i].year,a[i].month,a[i].day);
    }
    for(int i=0; i<n; i++)
    {
        day[i]+=365*a[i].year;
    }
    for(int i=1900; i<2015; i++)
    {
        for(int j=0; j<n; j++)
            if(run(a[j].year))
                day[j]++;
    }
    for(int i=0; i<n; i++)
    {
        int min=day[0];
        int count=0;
        int count1=0;
        for(int j=1; j<n; j++)
        {
            if(day[j]<min)
            {
                min=day[j];
                count=j;
                count1=j;
            }
        }
        cout<<a[count].name<<endl;
        day[count]=100000;
    }
    return 0;
}
