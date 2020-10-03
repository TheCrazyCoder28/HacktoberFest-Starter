#include <stdio.h>
int main()
{
    char c[1000];
    FILE *fptr;
	fptr = fopen("program.txt", "r");
    if (fptr == NULL)
    {
        printf("Error! opening file");
       }
	else{
	    fscanf(fptr,"%[^EOF]", c);
	    printf("Data from the file:\n%s", c);
	    fclose(fptr);
		} 
    return 0;
}
