#include<stdio.h>
#include<math.h>
int main(){
	float t_val,a_val;
	float abs_err,rel_err,per_err;
	printf("Enter True val:- ");
	scanf("%f",&t_val);
	printf("Enter approximate val:- ");
	scanf("%f",&a_val);
	abs_err = t_val - a_val;
	abs_err = fabs(abs_err);
	/*if(abs_err < 0){
		abs_err *= -1;
	}*/
	rel_err = abs_err / t_val;
	per_err = rel_err * 100;
	printf("Absolute Error is :- %f\n",abs_err);
	printf("Relative Error is :- %f\n",rel_err);	
	printf("Percentage Error is :- %f\n",per_err);		
}
