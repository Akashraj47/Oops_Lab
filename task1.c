#include<stdio.h>
int main(){
	float a ;
	printf("Enter a number:- ");
	scanf("%f",&a);
	printf("Roundoff value:- %0.3f\n",a);
	int b = a * 1000;
	a = (float)b / 1000;
	printf("Trucated value:- %0.3f\n",a);
	
}
