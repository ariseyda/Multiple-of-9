#include<stdio.h>

// An integer n is divisible by 9 if the sum of its digits is divisible by 9. Develop a program to display each digit, starting with the rightmost digit. 
// Your program should also determine whether or not the number is divisible by 9. 
// Test it on the following numbers: 154368, 621594, 123456. 

int main(){
	
	int n,i;
	int digit=0;
	int sum=0;
	printf("Please enter a number:");
	scanf("%d",&n);
	
	
	while(n>0){
		sum+=n%10;
		n=n/10;
		digit++;
	}
	
    if(sum%9==0){
    	printf("Number is a multiple of 9.");
	}
	else{
		printf("Number is not a multiple of 9.");
	}
	    
	    
	return 0;
}

