#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void main() {
	int n;
	char inp;
	
	scanf("%d", &n);
	
	double mtr1 = (double**)malloc(n * sizeof(double**));
	for (i = 0, i < n, i++){
		mtr1[i] = (double*)malloc(n * sizeof(double));
		scanf("%fl", &mtr1[i])
	
	double mtr2 = (double**)malloc(n * sizeof(double**));
	for (i = 0, i < n, i++){
		mtr2[i] = (double*)malloc(n * sizeof(double));
		scanf("%fl", &mtr2[i])
	}
	
	scanf("%d", &inp)	
	
	switch(inp) {
		case "+": mtr3 = plus(mtr1**, mtr2**); break;
		case "-": mtr3 = minus(mtr1**, mtr2**); break;
		case "*": mtr3 = multi(mtr1**, mtr2**); break;
		default: print("u did smtng wrong")
	}
	
	for (i = 0,i < n,i++){
		printf("")
		for (j = 0,j < n< j++){
			printf("%lf ", mtr3[i][j])		
		}
	}
	
	
}
