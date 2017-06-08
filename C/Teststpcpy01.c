#include<stdio.h>
#include<string.h>

int main(void){
	char string[10];
	char *str1 = "abcd";
	char *str2 = "1234567890987";


	stpcpy(string,str1);
	stpcpy(string,str2);
	printf("%s\n",string);
	return 0;
}
