#include<stdio.h>

int main(){
	int r;
	int c;
	int s;
	
	for(r=5;r>=1;r--){
		for(c=1;c<=r;c++){
			printf("%d",c);
		}
		for(s=5;s>r;s--){
			printf("  ");
		}
			for(c=r;c>=1;c--){
			printf("%d",c);
		}
		printf("\n");
	}
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
		printf("%d",c);
		}
		for(s=r;s<5;s++){
			printf("  ");
		}
		for(c=r;c>=1;c--){
		printf("%d",c);	
		}
		printf("\n");
	}

	return 0;
	
}
