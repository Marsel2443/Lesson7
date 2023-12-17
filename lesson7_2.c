#include <stdio.h>

void rec(int a, int b) {    
    
        printf("%2d", a);
        if ( a > b){
            rec(a-1, b);           
        }                      
        if (a < b){
            rec(a+1, b);        
        }                 
 }       
 
int main(void) 
{
    int a, b;
    printf("Input number:\n");
    scanf("%d%d", &a, &b);    
    rec(a,b);        
    return 0;
}


