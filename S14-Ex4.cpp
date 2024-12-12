#include<stdio.h>
#include<string.h>

int main(){
	
	char str[17]="Hoang Trung Dung";
	int length=strlen(str);
	int sokytu=0;
	char kytu;
	printf("moi ban nhap ki tu muon kiem tra\n");
	scanf("%c",&kytu);
     for(int i=0;i<length-1;i++){
     	if(str[i]==kytu){
     		sokytu++;
		 }
	 }
	if(sokytu==0){
		printf("ki tu khong ton tai trong mang\n");
	}else{
		printf("trong mang co %d ki tu %c\n",sokytu,kytu);
	}
	
	return 0;
}
