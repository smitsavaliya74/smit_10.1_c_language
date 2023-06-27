#include<stdio.h>

void cube (int n){
	printf("enter value for cube: ");
	scanf("%d",&n);
	n= n*n*n;
	printf("Your answer is : %d",n);
}

void main (){
	int ans;
	cube(ans);
	
}
