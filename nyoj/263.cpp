/*#include<iostream>
#include<cstdio>
using namespace std;
int mian()
{
    int m,n,a[10001],b[10001],c[10001];
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=0; i<m; i++)
            cin>>a[i]>>b[i]>>c[i];
        int max=a[0],min=b[0];
        for(i=1; i<m; i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                x=i;
            }
            if(b[i]<min)
            {
                min=b[i];
                y=i;
            }
        }
        if
    }
return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        int a,b,c;
        cin>>a>>b>>c;
        while(m--)
        {
            int a1,b1,c1;
            cin>>a1>>b1>>c1;
            if((a1>a)||(a1==a&&b1<b)||(a1==a&&b1==b&&c1>c))
            {
                a=a1,b=b1,c=c1;

            }
            cout<<c1<<endl;
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,a,b,c,a1,b1,c1;
        scanf("%d",&m);
        scanf("%d%d%d",&a,&b,&c);
        for(int i=1; i<m; i++)
        {
            scanf("%d%d%d",&a1,&b1,&c1);
            if(a1>a||(a1==a&&b1<b)||(a1==a&&b1==b&&c1>c))
                a=a1,b=b1,c=c1;
        }
        printf("%d\n",c);
    }
    return 0;
}

#include<stdio.h>
int main()
{
	int n,m,i,a,b,c,x,y,z;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		a=0;b=0;c=0;
		for(i=0;i<m;i++)
		{
			scanf("%d%d%d",&x,&y,&z);
			if(x>a||x==a&&y<b||x==a&&y==b&&z>c) { a=x;b=y;c=z; }
		}
		printf("%d\n",c);
	}
	return 0;
}
