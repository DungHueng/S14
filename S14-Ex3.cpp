#include<stdio.h>
#include<string.h>

int main(){
	
	char str[100];
    	printf("moi ban nhap chuoi ky tu\n");
	fgets(str,sizeof(str),stdin);
	int length=strlen(str);
     for(int i=length-1;i>-1;i--){
     	printf("%c",str[i]);
	 }
	
	
	return 0;
}
