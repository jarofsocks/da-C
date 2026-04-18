#include <stdio.h>
#include <stdlib.h>
#include <string.h>


	
int i, j;

typedef struct humen {
	int birth_yr;
	char name[10];
	char surname[10];
} humen;

void del_element(int element, humen *inp_arr) {
	int length = sizeof(inp_arr) / sizeof(inp_arr[0]);
	for (i = element; i < length-1; i++) {
		inp_arr[i] = inp_arr[i+1];
	}
	inp_arr[length] = ;
}

void sort(int *inp_arr, int *out_arr) {
	int min, max;
	min = 99999999999;
	
	for (i = 0; i < 4; i++) {
		if (inp_arr[i] < min) {
			min = inp_arr[i];
		} 	
	} 
}

int main() {
	
	int by;
	char nm[10];
	char snm[10];
	
	humen humen_arr1[4];
	humen humen_arr2[4];
	
	for (i = 0; i < 4; i++) {
		scanf("%d", &by);
		scanf("%s", &nm);	
		scanf("%s", &snm);

		humen_arr1[i].birth_yr=by;
		strcpy(humen_arr1[i].name, nm);
		strcpy(humen_arr1[i].surname, snm);
	
		printf("%d %s %s \n", humen_arr1[i].birth_yr, humen_arr1[i].name, humen_arr1[i].surname);
	}
	return 0;
}
