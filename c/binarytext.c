#include<stdio.h>
#include<stdlib.h>
FILE *fp;
struct student{
	int admno;
	char name[100];
};
void display(){
	fp=fopen("file.txt","rb");
	struct student obj;
	printf("List of Records");
	while(fread(&obj,sizeof(obj),1,fp)){
		printf("\n%d \t",obj.admno);
		puts(obj.name);
	}
	fclose(fp);
}
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
void append(){
	fp=fopen("file.txt","ab");
	int i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct student obj[n];
	for(i=0;i<n;i++){
		printf("Enter number: ");
		scanf("%d",&obj[i].admno);
		printf("Enter name: ");
		scanf("%s",obj[i].name);
		fwrite(&obj[i],sizeof(obj[i]),1,fp);
	}
	fclose(fp);
}
void write(){
	fp=fopen("file.txt","wb");
	int i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct student obj[n];
	for(i=0;i<n;i++){
		printf("Enter number: ");
		scanf("%d",&obj[i].admno);
		printf("Enter name: ");
		scanf("%s",obj[i].name);
		fwrite(&obj[i],sizeof(obj[i]),1,fp);
	}
	fclose(fp);
}
int main(){
	int ch;
	while(1){
		printf("\n1.Create (Clears the previous data)\n2.Display\n3.Append\n4.Exit");
		printf("\nEnter choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				write();
				break;
			case 2:
				display();
				break;
			case 3:
				append();
				break;
			case 4:
				exit(0);
		}
	printf("\nEnter 0 to exit");
	scanf("%d",&ch);
	if(ch==0)
		break;
	}
return 0;
}
