#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
        char name[79];
        char surname[79];
        int yrofbirth;
} humen;
    
humen hlist1[4], hlist2[4];
    
int i, j;
    
int syrofbirth;
    
char sname[79], ssurname[79];

int copy(humen *list1, humen *list2) {
    for (i = 0; i < 4; i++) {
        list2[i] = list1[i];
    }
    return 0;
}

int sort(humen *list1) {
    humen memel;
	for (j=0; j<4; j++) {
	    for (i=0; i<3; i++) {
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
    int test = 1;
    
    if (test == 1) {
        for (i = 0; i < 4; i++) {
            humen newhumen = {
            "goidin",
            "ivanov",
            2026 - i
            };
            hlist1[i] = newhumen;
        }
    } else {
        for (i = 0; i < 4; i++) {
            scanf("%s %s %d", hlist1[i].name, hlist1[i].surname, &hlist1[i].yrofbirth);
        }
        
    }
    
    
    
    
    copy(hlist1, hlist2);
    
    sort(hlist2);
    
    printf("inp\n");
    for (i = 0; i < 4; i++) {
        printf("%s, %s, %d \n",hlist1[i].name, hlist1[i].surname, hlist1[i].yrofbirth);
    }
    
    printf("\nout\n");
    for (i = 0; i < 4; i++) {
        printf("%s, %s, %d \n",hlist2[i].name, hlist2[i].surname, hlist2[i].yrofbirth);
    }
    
    printf("\ndone");
    
    return 0;
}
