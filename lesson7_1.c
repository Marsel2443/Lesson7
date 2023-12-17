#include <stdio.h>

void rec(int n) {    
    if (n==0)
    return;         
        else  
            rec(n/10);
        printf("%3d", n%10);           
}

int main(void) 
{
    int n;
    printf("Input number:\n");
    scanf("%d", &n);
    rec(n);        
    return 0;
}

