#include <stdio.h>
#include <stdlib.h>
/*
С����ѧ������֯��һ�����ԣ������ܷ�Ϊ 100 �֣�
ÿ��ѧ���ĵ÷ֶ���һ�� 0 �� 100 ��������
�������ο��Ե���߷֡���ͷֺ�ƽ���֡�
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
