#include<stdio.h>
void character(){
	
	int x;
	for(x='Z'; x>='A'; x--){
		printf("%c, ",x);
	}
}
int main(){
	character();
}