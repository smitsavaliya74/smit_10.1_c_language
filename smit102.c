#include<stdio.h>

void div (int n){
	printf("enter a value: ");
	scanf("%d",&n);
	if(n%3==0 && n%5==0){
		 printf("The given number is divisible by both 3 & 5.");
		
	}else{
	printf("The given number is not divisible by both 3 & 5.");
	
	}
	
}
void main (){
	int ans;
	div(ans);
}
