#include <stdio.h>
#include <stdlib.h>
/*
小蓝给学生们组织了一场考试，卷面总分为 100 分，
每个学生的得分都是一个 0 到 100 的整数。
请计算这次考试的最高分、最低分和平均分。
*/

int main(){
	int n;
	scanf("%d",&n);
	int a[n],min=100,max=0,sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		if(a[i]>max)max=a[i];
		if(a[i]<min)min=a[i];
	}
	printf("%d\n%d\n%.2f\n",max,min,1.0*sum/n);
	return 0;
} 
