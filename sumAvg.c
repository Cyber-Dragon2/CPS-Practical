#include<stdio.h>

int main(int argc, char const *argv[]){
	int arr[] = {1,2,3,4,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	// printf("Length: %d\n", len);

	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	
	float avg = sum/(float)len;

	printf("Sum: %d\n",sum);
	printf("Average: %.2f\n",avg);

	return 0;
}