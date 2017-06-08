#include<stdio.h>

int main(int argc, char *arg[]){
	if(argc == 2){
		printf("Hello is %s\n", arg[1]);
	}

	else if(argc > 2){
		printf("To many things here\n");
	}
	else{
		printf("Hello\n");
	}
	
}
