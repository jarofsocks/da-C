#include <stdio.h>
#include <stdlib.h>

void check(int a, int b, int c){
	if (!((a < b + c) && (b < a + c) && (c < a + b))) {
		printf("stuuuuuuuupid");
		exit(0);
	}
}

float per(float a, float b, float c){
	float p = (a + b + c)/2;
	return p;
}

float sss(float a, float b, float c, float p){
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}
