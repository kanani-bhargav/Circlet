#include<stdio.h>

int main(){
	int r;
	int c;
	int s;
	
	for(r=1;r<=5;r++){
		for(s=r;s<5;s++){
			printf(" ");
		}
		for(c=r;c>=1;c--){
		printf("%d",c);
		}
		printf("\n");
	}
	return 0;
	
}
