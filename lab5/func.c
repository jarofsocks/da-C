#include <stdio.h>
#include <stdlib.h>

int i, j;

double mtr3 = (double**)malloc(n * sizeof(double**));
	for (i = 0, i < n, i++){
		mtr3[i] = (double*)malloc(n * sizeof(double));

float plus(double** mtr1, double** mtr2, int n){
	for (i = 0,i < n,i++){
		for (j = 0,j < n< j++){
			mtr3[i][j] = mtr1[i][j] + mtr2[i][j];			
		}
	}
	
	return mtr3;
}

float minus(double** mtr1, double** mtr2, int n){
	for (i = 0,i < n,i++){
		for (j = 0,j < n< j++){
			mtr3[i][j] = mtr1[i][j] - mtr2[i][j];			
		}
	}
	
	return mtr3;
}

float minus(double** mtr1, double** mtr2, int n){
	for (i = 0,i < n,i++){
		for (j = 0,j < n< j++){
			mtr3[i][j] = mtr1[i][j] * mtr2[i][j];			
		}
	}
	
	return mtr3;
}

