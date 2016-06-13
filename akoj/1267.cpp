#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[301];
    while (N--)
    {
        int w, n;
        cin >> w >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int i = 0, j = n - 1, number = 0;
        while (i <= j)
        {
            if (a[i] + a[j] <= w) i++;
            j--;
            number++;
        }
        cout << number << endl;
    }
}

#include<iostream>//×îÓÅ´úÂë
#include<algorithm>
using namespace std;
int main()
{
    int v;
    cin>>v;
    while(v--)
    {
        int w,n,*p,t;
        cin>>w>>n;
        p=new int[n];
        for(int i=0; i<n; i++)
        {
            cin>>t;
            p[i]=t;
        }
        sort(p,p+n);
        int i=0,k=n-1,count=0;
        while(i<=k)
        {
            if(2*p[i]<=w)
            {
                while((p[i]+p[k]>w)&&(i<k))
                {
                    count++;
                    --k;
                }
                if(i==k) count++;
                else
                {
                    count++;
                    --k;
                }
            }
            else
            {
                if(i==k) count++;
                else
                {
                    count+=2;
                    --k;
                }
            }
            ++i;
        }
        cout<<count<<endl;
    }
    return 0;
}
