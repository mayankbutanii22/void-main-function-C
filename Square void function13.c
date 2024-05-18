#include<stdio.h>
void square(){
	
	int x,square;
	for(x=1; x<=10; x++){
		square=x*x;
		printf("%d, ",square);
	}
}
int main(){
	square();
}