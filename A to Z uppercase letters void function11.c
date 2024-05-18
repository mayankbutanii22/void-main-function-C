#include<stdio.h>
void name(){
	char x;
	
	for(x='A'; x<='Z'; x++){
		printf("%c, ",x);
	}
}
int main(){
	name();
}