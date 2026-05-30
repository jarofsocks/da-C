#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

FILE *f1;

int i, j;
char str[79];
int length = 0;
int type_int;
char type[79] = "pipi";

char list[69][5][79];

char swap(char el1[5][79], char el2[5][79]) {
	char swapel[5][79];
	memcpy(swapel, el1, sizeof(swapel));
	memcpy(el1, el2, sizeof(swapel));
	memcpy(el2, swapel, sizeof(swapel));
    return 0;
}

char sort(int type_int, char list[length][5][79]) {
    char memel[5][79];
        for (j=0; j<length-1; j++) {
            for (i=0; i<length-j-1; i++) {
                if (list[i+1][type_int-1] < list[i][type_int-1]) {
                    swap(list[i+1], list[i]);
                    printf("i did smthg");
                }
            }

        }
    return 0;
}

char writelist(char type[79], char list[length][5][79]) {
    printf("Sort by: %s \n------------\n", type);
    for (i = 0; i<length; i++) {
            printf("%s; %s; %s; %s; %s.\n", list[i][0], list[i][1], list[i][2], list[i][3], list[i][4]);
    }
    return 0;
}

int main() {
    
    f1 = fopen("text.txt","r");

	while (fgets(str, 79, f1) != NULL) {
  		length++;
	}

	fclose(f1);
	f1 = fopen("text.txt","r");
	
	i = 0;
    while (fscanf(f1, "%s %s %s %s %s", list[i][0], list[i][1], list[i][2], list[i][3], list[i][4]) != EOF) {
    	i++;
    }
    
    printf("Enter by what type we will bw sorting this list. \n(1 - name, 2 - surname, 3 - byr, 4 - sex, 5 - height) \n:");
    scanf("%d", &type_int);
    
    sort(type_int, list);
    
    writelist(type, list);
    
    return 0;
}
