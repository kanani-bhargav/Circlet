#include<stdio.h>

int main(){
	char r;
	char c;
	for(r='A';r<='E';r++){
		for(c='A';c<=r;c++){
		printf("%c",r);
		}
		printf("\n");
	}
	return 0;
	
}
