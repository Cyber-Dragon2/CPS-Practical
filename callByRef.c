#include<stdio.h>

void swap(int* ptra, int* ptrb){
	int temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;
	printf("In Function: ");
	printf("a = %d, b = %d\n", *ptra, *ptrb);
}

int main(int argc, char const *argv[]){
	int a = 2, b = 3;
	printf("Before: "); 
	printf("a = %d, b = %d\n", a, b);
	swap(&a,&b);
	printf("After: "); 
	printf("a = %d, b = %d\n", a, b);
	return 0;
}