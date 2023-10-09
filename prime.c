#include<stdio.h>

int main(int argc, char const *argv[]){
	int isPrime = 1, n;
	printf("Enter number: ");
	scanf("%d", &n);

	for (int i = 2; i < n; i++)
	{
		if(n%i == 0){
			isPrime = 0;
			break;
		}
	}

	if(isPrime && n > 1) printf("Number is Prime.\n");
	else printf("Number is Not Prime.\n");
	
	return 0;
}