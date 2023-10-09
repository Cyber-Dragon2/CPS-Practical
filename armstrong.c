#include<stdio.h>
#include<math.h>

int numLen(int n){
	int l=0;
	while (n >= 1)
	{
		l++;
		n/=10;
		// printf("%d ",n);
	}
	return l;
}

int isArmstrong(int n, int l){
	int res = 0;
	int tempN = n;
	while (tempN != 0) {
        int d = tempN % 10;
		res += (int)pow(d,l);
        printf("(pow: %.0lf | res: %d) ", pow(d,l), res);
        tempN /= 10;
    }
	printf("\nResult: %d\n", res);
	printf("Number: %d\n", n);

	if(n == res) return 1;
	return 0;
}

int main(int argc, char const *argv[]){
	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	int l = numLen(n);
	printf("length: %d\n",l);

	if(isArmstrong(n,l) == 1) printf("Yes!!!\n");
	else printf("No!!\n");
	
	return 0;
}
