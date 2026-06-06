#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int sig;

void handler() {
	const char *signame;
	switch (sig) {
        case 1:
			signame = "SIGABRT"; 
			break;
        case 2:  
			signame = "SIGFPE";
			break;
        case 3:  
			signame = "SIGILL"; 
			break;
        case 4:  
			signame = "SIGINT"; 
			break;
        case 5: 
			signame = "SIGSEGV"; 
			break;
        case 6: 
			signame = "SIGTERM"; 
			break;
    }
    printf("\nWe handled a signal: %s\n", signame);
    exit(1);
}

int main() {
    signal(SIGABRT, handler);
    signal(SIGFPE, handler);
    signal(SIGILL, handler);
    signal(SIGINT, handler);
    signal(SIGSEGV, handler);
    signal(SIGTERM, handler);

    printf("Enter number for signal \n(1 - SIGABRT, 2 - SIGFPE, 3 - SIGILL, 4 - SIGINT, 5 - SIGSEGV, 6 - SIGTERM, 0 - exit) \n: ");
    scanf("%d", &sig);
    switch (sig) {
        case 0:
            return;
        case 1:
            printf("SIGABRT is ON\n");
			raise(SIGABRT);
			break;
		case 2:
            printf("SIGFPE is ON\n");
			raise(SIGFPE);
			break;
		case 3:
            printf("SIGILL is ON\n");
			raise(SIGILL);
			break;
		case 4:
            printf("SIGINT is ON\n");
			raise(SIGINT);
			break;
		case 5:
            printf("SIGSEGV is ON\n");
			raise(SIGSEGV);
			break;
		case 6:
            printf("SIGTERM is ON\n");
			raise(SIGTERM);
			break;
	}

}

