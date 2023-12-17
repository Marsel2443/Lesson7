#include <stdio.h>

void odd_num(int max){
int input;
    scanf("%d", &input);
    if (input == 0)
        return ; 
    if (input%2!=0){
        printf("%d ", input);      
    }
    return odd_num(max);
}

int main(void)
{ 
    printf("Input number:\n");
    odd_num(0);  
    return 0; 
}   
