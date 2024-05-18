#include<stdio.h>
#include<string.h>
void name()
{
  char str[20];
    printf("Enter String: ");
    gets(str);
    int start=0,end=strlen(str)-1;
    
    while(start<end){
    
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
 
        start++;
        end--;
    }
    printf("\n%s",str);
}
int main(){
	name();
}