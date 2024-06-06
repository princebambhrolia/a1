#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter your first number");
	scanf("%d",&a);
	printf("Enter your second number");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("number is swap %d\n%d",a,b);	
}