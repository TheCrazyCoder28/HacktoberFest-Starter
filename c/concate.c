#include <stdio.h>
#include <string.h>
char* str_concatenate(char dest[], char src[], int index){
    char temp[256];
    int len=strlen(dest);
    dest[len]=src[index];   
    if (dest[index]=='\0'){
        return dest;
    }
    else
        return str_concatenate(dest,src,index+1);
}

int main(){
        char dest[]="house";
        char src[]="clock";

        char* ris=str_concatenate(dest,src,0);

        printf("dest= %s\n", ris); 
    return 0;
    }
