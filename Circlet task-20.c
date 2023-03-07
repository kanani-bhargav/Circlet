#include<stdio.h>

int main(){
	int r;
	int c;
	int s;
	
	for(r=1;r<=4;r++){
		for(c=r;c<=4;c++){
		printf("%d",c);
		}
		for(s=1;s<r;s++){
			printf("  ");
		}
		for(c=4;c>=r;c--){
		printf("%d",c);
		}
		printf("\n");
	}
	return 0;
	
}
