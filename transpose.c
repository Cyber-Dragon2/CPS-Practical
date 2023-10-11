#include<stdio.h>

void transpose(int r, int c,int a1[r][c], int tran[r][c]){
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			tran[i][j] = a1[j][i];
		}
		
	}
}

void getArr(int r, int c,int a1[r][c]){
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", a1[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[]){
	int a1[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int r = sizeof(a1) / sizeof(a1[0]);
    int c = sizeof(a1[0]) / sizeof(a1[0][0]);

	printf("Original Array\n");
	getArr(r,c,a1);
	
	int tran[3][3];
	transpose(r,c,a1,tran);
	printf("Transpose of Array\n");
	getArr(r,c,tran);

	return 0;
}