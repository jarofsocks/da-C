#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dadada.h"



void main(){
	float a, b, c, p, s;
		
	scanf("%f %f %f", &a, &b, &c);
	
	if (check(a,b,c) == false){
		printf("stuuuuuuuupid");
		return 0;
	}

	p = per(a, b, c);
	s = sss(a, b, c, per(a, b, c));

	printf("P = %f\nS = %f", p*2, s);
}
