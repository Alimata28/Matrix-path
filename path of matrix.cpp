#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ARRAY 50 50

void path(int array[][50],int x,int y){
	if(x==0 && y==0){
		printf("This is the beginning of matrix!\n");
	}
	else if(array[x][y-1]==0){
		printf("Go up\n");
		return path(array,x-1,y);
	}
	else if(array[x-1][y]==0){
		printf("Go to the left\n");
		return path(array,x,y-1);
	}
	else{
		printf("Wall");
	}
}
int main(){
	int array[50][50],x, y, i,j;
	srand(time(NULL));
	printf("Enter row and line value:\n");
	scanf("%d  %d", &x, &y);
	printf("Matrix %dx%d\n", x,y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			array[i][j]= rand() % 2;
			printf("%-3d", array[i][j]);
		}
		 printf("\n");
	}
	path(array,x,y);
}
