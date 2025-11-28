#include<stdio.h>
int main(){
char op;
float a,b;
scanf("%f %c %f",&a,&op,&b);
switch(op){
case '+':printf("%.2f",a+b);break;
case '-':printf("%.2f",a-b);break;
case '*':printf("%.2f",a*b);break;
case '/':if(b!=0) printf("%.2f",a/b); else printf("Division by zero");break;
case '%':if((int)b!=0) printf("%d",(int)a%(int)b); else printf("Division by zero");break;
default:printf("Invalid operator");
}
return 0;
}
