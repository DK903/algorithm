/*
2,3,5,7,11,13,.... 是素数序列。 类似
7,37,67,97,127,157 这样完全由素数组成的等差数列，叫等差素数数列。
上边的数列公差为30,长度为6。
长度为10 的等差素数列，其公差最小值是多少？
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
  // 请在此输入您的代码
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
