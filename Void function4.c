#include<stdio.h>
void none(){
    int a=1,sum=0;
    for(a=1; a<=10; a++){
    	sum= sum + a;
    	printf("%d, ",a);
	}
		printf("\n\n%d ",sum);
}
int main(){ 
    none();   	
}