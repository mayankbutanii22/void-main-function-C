#include<stdio.h>
void none(){
    int row,col;
    
    printf("Enter a row number: ");
    scanf("%d",&row);

    for(row=1; row<=5; row++){
    	for(col=1; col<=5; col++){
    		printf("* ");
		}
		printf("\n");
	}
}	
int main(){ 
    none();   	
}