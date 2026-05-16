#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
	char name[79];
	char surname[79];
    int yrofbirth;
} humen;

int i, j;

int numoflines;

int copy(humen *list1, humen *list2) {
    for (i = 0; i < numoflines; i++) {
        list2[i] = list1[i];
    }
    return 0;
}

int sort(humen *list1) {
    humen memel;
	for (j=0; j<numoflines-1; j++) {
	    for (i=0; i<numoflines-j-1; i++) {
	        if (list1[i+1].yrofbirth < list1[i].yrofbirth) {
	            memel = list1[i];
	            list1[i] = list1[i+1];
	            list1[i+1] = memel;
	        }
	    }
	    
	}
	    return 0;
}
int main() {
	
	FILE *f1;
	
	f1 = fopen("text.txt","r");
	

	
	char str[79];
	
	while (fgets(str, 79, f1) != NULL) {
   		numoflines++;
    	}

	fclose(f1);
	
	

	f1 = fopen("text.txt","r");
	

	    
	humen hlist1[numoflines], hlist2[numoflines];
	    

	
	
    
	
	i = 0;
    while (fscanf(f1, "%s %s %d", hlist1[i].name, hlist1[i].surname, &hlist1[i].yrofbirth) != EOF) {
    	i++;
    }
        
    
    
    
    
    copy(hlist1, hlist2);
    
    sort(hlist2);
    
    printf("inp\n");
    for (i = 0; i < numoflines; i++) {
        printf("%s, %s, %d \n",hlist1[i].name, hlist1[i].surname, hlist1[i].yrofbirth);
    }
    
    printf("\nout\n");
    for (i = 0; i < numoflines; i++) {
        printf("%s, %s, %d \n",hlist2[i].name, hlist2[i].surname, hlist2[i].yrofbirth);
    }
    
    printf("\ndone");
    
    fclose(f1);
    
    return 0;
}
