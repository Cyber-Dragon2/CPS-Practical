#include<stdio.h>

long int factorial(int n){
	if(n == 0) return 1;
	return n * factorial(n-1);
}

int main(int argc, char const *argv[]){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	long int fact = factorial(n);

	printf("Factorial of %d is %ld\n", n, fact);
	return 0;
}	