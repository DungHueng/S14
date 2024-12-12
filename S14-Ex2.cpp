#include<stdio.h>
#include<string.h>

int main(){
	
	char str[100];
    	printf("moi ban nhap chuoi ky tu\n");
	fgets(str,sizeof(str),stdin);
	int length=strlen(str);
     for(int i=0;i<length;i++){
     	printf("%c ",str[i]);
	 }
	
	
	return 0;
}
