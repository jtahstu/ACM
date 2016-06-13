#include<iostream>
using namespace std;
int main() {
    int n,m,a[105];
    for(int i=1; i<=100; i++)
        a[i]=2*i;
    while(cin>>n>>m) {
        int sum,b[105]= {0},count=0;
        for(int i=1; i<=n; i+=m) {
            sum=0;
            for(int j=i; j<i+m; j++) {
                sum+=a[j];
            }
            b[count++]=sum/m;
        }
        cout<<b[0];
        for(int i=1; i<count-1; i++)
            cout<<" "<<b[i];
        if(n%m==0)cout<<" "<<b[count-1]<<endl;
        else {
            int sum2=0;
            for(int i=n/m*m+1; i<=n; i++)
                sum2+=a[i];
            cout<<" "<<sum2/(n%m)<<endl;
        }

    }

    return 0;
}
#include<stdio.h>
int main(){
	int n,m,i,j;
	while(~scanf("%d %d",&n,&m)){
		getchar();
		for (i =1;i<=n-m;i+=m){
			printf("%d ",2*i+m-1);
		}
		printf("%d\n",i+n);
	}
}
