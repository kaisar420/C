#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char name[100];
	char *desp;

	strcpy(name ,"Kaisar");

	desp = malloc(200 * sizeof(char));
	if(desp == NULL){
		fprintf(stderr , "ERROR");
	}else{
		strcpy(desp , "Kaisar is Smart");
	}

	printf("Kaisar%s\n",name);
	printf("Desp :%s\n",desp);
}
