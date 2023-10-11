#include<stdio.h>

int minArr(int arr[], int len){
	int min = arr[0];
	for (int i = 1; i < len; i++)
	{
		min = min>arr[i] ? arr[i] : min;
	}
	return min;
}

int maxArr(int arr[], int len){
	int max = arr[0];
	for (int i = 1; i < len; i++)
	{
		max = max<arr[i] ? arr[i] : max;
	}
	return max;
}

int main(int argc, char const *argv[]){
	int arr[] = {3,6,-9,1,200,7,90,8};
	
	int min = minArr(arr, sizeof(arr)/sizeof(arr[0]));
	printf("Min in array is: %d\n", min);

	int max = maxArr(arr, sizeof(arr)/sizeof(arr[0]));
	printf("Max in array is: %d\n", max);
	
	return 0;
}