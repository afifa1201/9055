#include<stdio.h>
int main(){
	int a,b,temp;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	printf("\n before swap: \n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
    temp=a;
    b=temp;
	printf("\n after swap: \n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	
}
