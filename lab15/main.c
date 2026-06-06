#include <stdio.h>

int n;

void normal(n) {
    if (n == 0) return;
    normal(n / 10);
    printf("%d ", n % 10);
}

void reverse(int n) {
    if (n == 0) return;
    printf("%d ", n % 10);
    reverse(n / 10);
}

int main() {
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("->: ");
	normal(n);
    
    printf("\n<-: ");
	reverse(n);
    
    return 0;
}

