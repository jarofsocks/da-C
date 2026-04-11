#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, ".1251");    
    FILE *f1, *f2;
    f1 = fopen("text.txt", "r");
    f2 = fopen("newtext.txt", "a");
    
    int i, flag;
    
    int yr;
    
    char str[79], str1[79];
    
    char *point;
    
    
    while (fgets(str, 79, f1) != NULL) {
    	flag = 0;
    	if (str[0] == "Ï") {
    		flag = 1;
		} 
    	strcpy(str1, str);
    	point = strtok(str," ");
        for (i = 0; i < 3; i++) {
            point = strtok(NULL," ");
        }
        printf("\n");
        yr = atoi(point);
        if ((yr > 1980) && (flag == 1)){
            fprintf(f2, str1);
            printf("%s", str1);
        }
    }
    
    fclose(f1);
    fclose(f2);
    
    printf("\n\ndone");
    
    return 0;
}

