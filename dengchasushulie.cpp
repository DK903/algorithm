/*
2,3,5,7,11,13,.... ���������С� ����
7,37,67,97,127,157 ������ȫ��������ɵĵȲ����У��еȲ��������С�
�ϱߵ����й���Ϊ30,����Ϊ6��
����Ϊ10 �ĵȲ������У��乫����Сֵ�Ƕ��٣�
*/
#include <stdio.h>
#include <stdlib.h>
int isPrime(int a){
  for(int i=2;i<a;i++){
    if(a%i==0)
      return 0;
  }
  return 1;
}
int main(int argc, char *argv[])
{
  // ���ڴ��������Ĵ���
  int i;
  int d,index;
  int a[10000];
  for(i=2;i<10000;i++){
    if(isPrime(i)){
      a[i]=1;
    }
  }
  for(i=2;i<10000;i++){
    for(d=1;d<10000;d++){
      for(index=0;index<10;index++){
        if(a[i+d*index]!=1)
          break;
      }
      if(index==10){
        printf("%d",d);
      }
    }
  }
  return 0;
}
