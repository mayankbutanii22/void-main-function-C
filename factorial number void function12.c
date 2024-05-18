#include<stdio.h>
void factorial(){
	
	int x,fact=1;
	for(x=1; x<=5; x++){
	   fact=fact*x;	
	   printf("%d, ",fact);
	}

}
int main(){
	factorial();
}