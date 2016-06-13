/*#include<stdio.h>
int main()
{
    int k,m,n;
    int s1,s2,i,j;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d%d",&m,&n);
        if(m==n)continue;
        s1=0;
        s2=0;
        for(i=1; i<m; i++)
        {
            if(m%i==0)
                s1+=i;
        }
        for(j=1; j<n; j++)
        {
            if(n%j==0)
                s2+=j;
        }
        if((s1==n)&&(s2==m))
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
*/
main()
{
char str1[5],str2[5],str3[5];
scanf("%s,%s,%s",str1,str2,str3);
printf("%s%s%s",str1,str2,str3);
system("pause");
}
