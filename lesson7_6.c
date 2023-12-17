#include <stdio.h>

long long int recurs_power(int n, int p){        
    if (p == 0) return 1;
    else return n*recurs_power(n, p-1);    
    printf("\n");       
}
    
int main(void) 
{
    int n, p;
    printf("Input number:\n");
    scanf("%d%d", &n, &p);    
    if ((100>= n)&&(n >=-100)&&(0<= p)&&(p<=100)){
        recurs_power(n,p); 
        printf("%I64d ",recurs_power(n,p));
    return 0;
    }
}
