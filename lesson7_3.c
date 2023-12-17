#include <stdio.h>

int conv(int n) {    
    int  m;        
        if (n==0){
            return 0;
        }        
        m = conv(n/2);        
        return m+= n%2;         
}
   
int main(void) 
{
    int n;
    printf("Input number:\n");
    scanf("%d", &n);    
    conv(n);    
    printf("%d", conv(n));     
    return 0;
}

