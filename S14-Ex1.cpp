#include<stdio.h>
#include<string.h>

int main(){
	
	char str[100];
    	printf("moi ban nhap chuoi ky tu\n");
	fgets(str,sizeof(str),stdin);
		printf("chuoi da nhap la : ");
	fputs(str,stdout);
	int length=strlen(str);
		printf("chuoi da nhap co do dai la : %d",length);
	return 0;
}
