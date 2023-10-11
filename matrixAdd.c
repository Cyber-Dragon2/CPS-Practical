#include<stdio.h>

void add(int r, int c, int a1[r][c], int a2[r][c], int res[r][c]){
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			res[i][j] = a1[i][j] + a2[i][j];
		}
		
	}
	
}

void minus( int r, int c, int a1[r][c], int a2[r][c], int res[r][c]){
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			res[i][j] = a1[i][j] - a2[i][j];
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
	int a2[][3] = {{2,3,4},{5,6,7},{8,9,12}};
	int r = sizeof(a1) / sizeof(a1[0]);
    int c = sizeof(a1[0]) / sizeof(a1[0][0]);
	
	int res[r][c];
	printf("--------Addition---------\n");
	add(r, c, a1,a2,res);
	getArr(r,c,res);
	
	printf("-------Subtraction-------\n");
	minus(r, c, a1,a2,res);
	getArr(r,c,res);
	
	return 0;
}