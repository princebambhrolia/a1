#include<stdio.h>
int main(){
	int a,b;
	printf("Enter number of a:- ");
	scanf("%d",&a);
	printf("enter number of b:- ");
	scanf("%d",&b);
	if(a<b){
		printf("minmum number is %d",a);
	}else{
		printf("minmum number is %d",b);
	}
}