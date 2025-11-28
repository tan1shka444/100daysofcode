#include<stdio.h>
int main(){
int a,b,hcf,temp;
scanf("%d%d",&a,&b);
int x=a,y=b;
while(b!=0){
temp=b;
b=a%b;
a=temp;
}
hcf=a;
printf("%d",(x*y)/hcf);
return 0;
}
