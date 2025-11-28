#include<stdio.h>
int main(){
int n,i;
unsigned int mask;
scanf("%d",&n);
for(i=31;i>=0;i--){
mask=1<<i;
printf("%d",(n&mask)?1:0);
}
return 0;
}
