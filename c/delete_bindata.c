#include<stdio.h>
void deletefile(){
	struct student s1;
	File *fp;
	File *fpt;
	fp=open("file.dat","wb");
	fpt=open("temp.dat","rb");
	int r;
	printf("Enter a num to delete file record :");
	scanf("%d",&r);
	while(fread(&s1,sizeof(s1),1,fp)){
		if(s1.admno!=r){
			fwrite(&s1,sizeof(s1),1,fpt);
		}
	}
	fclose(fp);
	fclose(fpt);
	remove("file.dat");
	rename("temp.dat","file.dat")
}
int main(){
	deletefile();
	return 0;
}
