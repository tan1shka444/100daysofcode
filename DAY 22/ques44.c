#include<stdio.h>
int main(){
int n;
float sum=0;
scanf("%d",&n);
for(int i=1,j=2,k=1;i<=n;i++,j+=2,k+=2)
sum+= (float)j/k;
printf("%.2f",sum);
return 0;
}
