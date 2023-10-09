#include<stdio.h>

int numLen(int n){
	int l=0;
	while (n >= 1){
		l++;
		n/=10;
	}
	return l;
}

int main(int argc, char const *argv[]){
	int n, flag = 1, i = 0;
	printf("Enter number: ");
	scanf("%d", &n);
	int len = numLen(n);

	int digits[len];
	int tempN = n;
	while (tempN != 0) {
        int d = tempN % 10;
		digits[(len-i)-1] = d;
        tempN /= 10;
		i++;
    }

	for (int i = 0; i < len; i++)
	{
		printf("%d ", digits[i]);
	}
	printf("\n");

	for (int i = 0; i < len/2; i++)
	{
		if(digits[i] != digits[(len-i) - 1]){
			flag = 0;
			break;
		}
	}

	if(flag) printf("Number %d is pallindrome.\n", n);
	else printf("Number %d is Not pallindrome.\n", n);
	
	
	return 0;
}