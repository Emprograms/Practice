#include<stdio.h>

int main() {
    
    for ( int i=0; i <= 9; i++ ) {
        printf("%d", i);
        printf("\t");
    }
    
    printf("\n\n");
    
    for (char c = 'A'; c <= 'Z'; ++c)
        printf("%c\t", c);
        
    return 0;
}   
