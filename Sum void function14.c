#include<stdio.h>
void sum(){
	
	int x,sum=0,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(x=1; x<=5; x++){
		sum=sum+x;
	}
		printf("\n%d",sum);
}
int main(){
	sum();
}