#include <stdio.h>

int acounter( void){
    char ch;    
    scanf("%c", &ch);
    if (ch == '.'){
        return 0;        
        }    
    if (ch == 'a'){        
        return acounter()+1;
        }        
    return acounter();    
}

int main(void) 
{
    printf("Input number:\n");       
    printf("%d", acounter());
    return 0;
}
