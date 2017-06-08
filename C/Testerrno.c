#include<stdio.h>
#include<errno.h>
#include<string.h>

extern int errno;
int main(){
	FILE *pf;
	int errnum;
	pf = fopen("Hello","China");
	if(pf ==NULL){
		errnum = errno;
		fprintf(stderr,"Wrong%d\n",errno);
		perror("use perror");
		fprintf(stderr,"wring2%s\n",strerror(errnum));
	}else{
		fclose(pf);
	}
	return 0;
}
