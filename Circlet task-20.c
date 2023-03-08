#include<stdio.h>

int main(){
	int r;
	int c;
	int a=4;
	int b=4;
	
	for(r=1;r<=4;r++){
		for(c=1;c<=7;c++){
			if(a==c || b==c){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		a++;
		b--;
		printf("\n");
	}
	return 0;
	
}
