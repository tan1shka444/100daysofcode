#include<stdio.h>
int main(){
int n,rem,prod=1,flag=0;
scanf("%d",&n);
while(n!=0){
rem=n%10;
if(rem%2!=0){
prod*=rem;
flag=1;
}
n/=10;
}
if(flag) printf("%d",prod);
else printf("No odd digits");
return 0;
}
