#include<stdio.h>
#include<stdlib.h>
struct data
{
int start;
int end;
};
int cmp(const void *a,const void *b){
	return ((struct data *)a)->end-((struct data *)b)->end;
}
int main(){
	struct data test[103];
	int a;
	int num;
	int ren_end;
	while(scanf("%d",&a)!=EOF){
		if(a==0)
			break;
		num=1;
		for(int i=0;i<a;i++){
			scanf("%d%d",&test[i].start,&test[i].end);
		}
		qsort(test,a,sizeof(struct data),cmp);
		ren_end=test[0].end;
		for(int i=1;i<a;i++){
           if(test[i].start>=ren_end){
			   num++;
			  ren_end= test[i].end;
		   }
		}
		printf("%d\n",num);
	}
	return 0;
}
