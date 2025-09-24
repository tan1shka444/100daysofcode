#include<stdio.h>
int main(){
int n,temp,rem,sum=0,f,i;
scanf("%d",&n);
temp=n;
while(temp!=0){
rem=temp%10;
f=1;
for(i=1;i<=rem;i++) f*=i;
sum+=f;
temp/=10;
}
if(sum==n) printf("Strong Number");
else printf("Not Strong Number");
return 0;
}
