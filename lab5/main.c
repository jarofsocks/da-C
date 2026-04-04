#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void main() {
	int i,j,n;
	int inp;
	
	printf("Enter matrix format >> ");
	scanf("%d", &n);
	
	double **mtr1 = (double**)malloc(n * sizeof(double*));
	for (i = 0; i < n; i++){
		mtr1[i] = (double*)malloc(n * sizeof(double));
	}
	for (i = 0; i <n; i++) {
		for (j = 0; j <n; j++) {
			printf("1 | %d %d >> ", i, j);
			scanf("%lf", &mtr1[i][j]);	
		}
	}
	
	printf("---\n");
	
	double **mtr2 = (double**)malloc(n * sizeof(double*));
	for (i = 0; i < n; i++){
		mtr2[i] = (double*)malloc(n * sizeof(double));
	}
	for (i = 0; i <n; i++) {
		for (j = 0; j <n; j++) {
			printf("2 | %d %d >> ", i, j);
			scanf("%lf", &mtr2[i][j]);	
		}
	}
	
	double **mtr3 = (double**)malloc(n * sizeof(double*));
	for (i = 0; i < n; i++){
		mtr3[i] = (double*)calloc(n, sizeof(double));
	}
	
	for (i = 0;i < n;i++){
		printf("\n");
		for (j = 0;j < n; j++){
			printf("%lf ", mtr1[i][j]);
			printf("%lf ", mtr2[i][j]);	
		}
	}
	printf("");
	
	scanf("%d", &inp);
	
	switch(inp) {
		case 0: mtr3 = plus(mtr1, mtr2, mtr3, n); break;
		case 1: mtr3 = minus(mtr1, mtr2, mtr3, n); break;
		case 2: mtr3 = multi(mtr1, mtr2, mtr3, n); break;
		default: printf("u did smtng wrong");
	}
	
	for (i = 0;i < n;i++){
		printf("");
		for (j = 0;j < n; j++){
			printf("%lf ", mtr3[i][j]);	
		}
	}
	
	for (i = 0;i < n;i++){
		for (j = 0;j < n; j++){
			free(mtr1[i]);
			free(mtr2[i]);
			free(mtr3[i]);
		}
	}
	free(mtr1);
	free(mtr2);
	free(mtr3);
	
	
}
