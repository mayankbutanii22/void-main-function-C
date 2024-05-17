#include<stdio.h>
void none(){
    int a;
    int Fibonacci;
    int t1=0,t2=1;
    printf("%d, %d, ",t1,t2);
    for(a=3; a<=10; a++){
    	Fibonacci=t1+t2;
    	t1=t2;
    	t2=Fibonacci;
    	printf("%d, ",Fibonacci);
}	
}
int main(){ 
    none();   	
}