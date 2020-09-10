#include<stdio.h>
int main(){
	int a,b;
	printf("Enter number a:");
	scanf("%d",&a);
	printf("Enter number b:");
	scanf("%d",&b);
	a= a-b;
	b= a+b;
	a= b-a;
	printf("After swapping: a=%.2d\n",a);
	printf("After swapping: b=%.2d",b);
	return 0;

}
