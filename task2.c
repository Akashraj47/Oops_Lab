#include<stdio.h>
int main(){
	int a;
	printf("Enter a number:- ");
	scanf("%d",&a);
	int flag = 0;
	int rem;
	int count = 0;
	while(a % 10 == 0){
		a = a / 10;	
	}
	while(a > 0){
		count++;
		a = a / 10;
	}
	printf("Significant digits are:- %d\n",count);
}
