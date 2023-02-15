#include<stdio.h>

main(){
	
	int i,j,l=4,r=4;
	
	for(i=1; i<=4; i++){
		for(j=1; j<=7; j++){
		if(l==j || r==j){
			printf(" *");
	    }
		else{
			printf("  ");
		}
	}
	
	l--;
	r++;
	printf("\n");
}
}
