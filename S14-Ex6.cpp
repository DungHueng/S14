#include<stdio.h>
#include<ctype.h>

int main(){

    char string[] = "Hello 123123 Xin chao !!!";
    int count = 0;
    int length = sizeof(string)/sizeof(char);

    for(int i = 0; i < length - 1; i++) {
        if(isalpha(string[i]) != 0) {
            count++;
        }
    }
    printf("So luong ky tu la chu = %d\n", count);
	
	return 0;
}
