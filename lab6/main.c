#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void main() {
	
	int i, j;
	char string[79];
	FILE *f1 = fopen("data.txt","r");
	FILE *f2 = fopen("newdata.txt", "w");
	
	while (fgets(string, sizeof(string), f1) != NULL) {
		printf("%s", string);
		if (string[-2] >= 8){
			fprintf(f2, string);
		}
	}
	
	
	
	
	
	
	
}









