#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char name[100];
	char *description;

	strcpy(name , "Anwar");

	description = malloc(30 *sizeof(char));
	if(description == NULL){
		fprintf(stderr,"ERROR");
	}else{
		strcpy(description, "Anwar dawut");
	}

	description = realloc(description, 100 * sizeof(char));
	if(description == NULL){
	
		fprintf(stderr ,"ERROR");
	}else{
		strcat(description ,"Anwar is my brother");
	}

	printf("Name = %s\n", name);
	printf("Description: %s\n",description);

	free (description);

}
