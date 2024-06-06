#include<stdio.h>
int main(){
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	
	if(a<0){
		printf("number is nagative");
		
	}
	if(a>0){
		printf("number is positive");
	}if(a==0){
		printf("number is neutarl");
	}
}