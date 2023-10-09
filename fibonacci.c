#include<stdio.h>

void fibonacci(int n){
	int prev2 = 0, prev1 = 1;
	printf("%d %d ", prev2, prev1);
	for (int i = 2; i < n; i++)
	{
		int current = prev1 + prev2;
		printf("%d ", current);
		prev2 = prev1;
		prev1 = current;
	}
	printf("\n");
}

int main(int argc, char const *argv[]){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Fibonacci series of %d digits: ", n);
	fibonacci(n);
	return 0;
}