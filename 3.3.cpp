#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter maths marks:- ");
	scanf("%d",&a);
	printf("Enter english marks:- ");
	scanf("%d",&b);
	printf("Enter science marks:- ");
	scanf("%d",&c);
	float result=(a+b+c)/3;
	printf("result is %.2f",result);
}

