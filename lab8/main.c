#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

FILE *f1;

int i, j;
char str[79];
int length = 0;
int type_int, type_int1;
char type[79] = "placeholder";
char list[69][5][79];
char name_list[5][79] = {"name", "surname", "byr", "sex", "height"};

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
                if (strcmp(list[i+1][type_int-1], list[i][type_int-1]) < 0) {
                    swap(list[i+1], list[i]);
                }
            }

        }
    return 0;
}

char writelist(char type[79], char type1[79] , char list[length][5][79]) {
	if (type == type1) {
		printf("Sort by: %s \n------------\n", type);
	} else {
		printf("Sort by: %s and %s \n------------\n", type, type1);
	}
    
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
    
    printf("Enter by what types we will be sorting this list (expect 2) \n(pick one number twice to sort by just one element). \n(1 - name, 2 - surname, 3 - byr, 4 - sex, 5 - height) \n:");
    scanf("%d %d", &type_int, &type_int1);
    
    sort(type_int1, list);
    sort(type_int, list);
    
    writelist(name_list[type_int-1],name_list[type_int1-1], list);
    
    return 0;
}
