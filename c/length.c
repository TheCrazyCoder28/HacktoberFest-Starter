#include <stdio.h>
int main () {
	FILE *fp;
	fp = fopen( "file.txt" , "r" );
	fprintf("%s",fp);
	printf("Starting position= %d\n",ftell(fp));
	while(fgetc(fp)!=EOF){
	}
		printf("Last position = %d\n",ftell(fp));
	return(0);
}
