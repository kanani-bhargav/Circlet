#include<stdio.h>

int main(){
	int r;
	int c;
	
	for(r=5;r>=1;r--){
		for(c=5;c>=r;c--){
		printf("%d",c);
		}
		
//		for(c=r;c<5;c++){
//				printf("%d",c);
//		}
		
		
		printf("\n");
	}
	return 0;
	
}
