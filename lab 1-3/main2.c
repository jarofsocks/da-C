#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void scnd() {
	float mtrx[3][3];
	float ino;
	float summ1, summ2;
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%f", &mtrx[i][j]);
		}
	}	
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == j){
				summ1 += mtrx[i][j];
			}
			if ((i == 2) && (j == 0) || (i == 1) && (j == 1) || (i == 0) && (j == 2)) {
				summ2 += mtrx[i][j];
			}	
		}
	}	
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
		printf("%f ", mtrx[i][j]);
		}
		printf("\n");
	}	
	
	printf("%f %f", summ1, summ2);
	
	
	
	int mtrx2x2[2][2];
	int summ;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &mtrx2x2[i][j]);
		}
	}
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			summ += 
		}
	}
}

void thrd() {
	char input[80];
	int i;
	
	scanf("%80s", &input); 
	int sad = strlen(input);
	for (i = 0; input[i] != 0; i++) {
		if (input[i] == 'a') {
            input[i] = 'A';
        } else if (input[i] == 'b') {
            input[i] = 'B';
		}	
	}
	
	printf("%s", input);
}

void frth() {
	float a, b, c, p, s;
	
	scanf("%f %f %f", &a, &b, &c);
	
	if (!((a < b + c) && (b < a + c) && (c < a + b))) {
		printf("stuuuuuuuupid");
		exit(0);
	}
	
	p = (a + b + c)/2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	
	printf("P = %f\nS = %f", p*2, s);
	
}

void ffth () {
	printf("pass");
}

void test() {
	printf("pass");
}

void main() {
	scnd();
}
