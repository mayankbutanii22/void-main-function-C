#include<stdio.h>

void none(){ 
    int a,x;
    
    printf("Enter any number: ");
    scanf("%d", &a);

     for (x=1; x<=10; x++) {
      printf("%d * %d = %d \n", a, x, a * x);
  }
}
int main(){ 
    none();   	
}