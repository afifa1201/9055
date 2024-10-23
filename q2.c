#include<stdio.h>
int main(){
	float temperature,degreecelsius,fahrenheit;
	printf("enter the celsius ");
	scanf("%f",&degreecelsius);
	fahrenheit=9.0/5*degreecelsius+32;
	printf("the fahrenheit is:%.2f\n",fahrenheit);
	
}
