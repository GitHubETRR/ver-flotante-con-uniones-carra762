#include <stdio.h>

union bytes{
    float var; 
    unsigned char varBytes[4];
};

int main (void){
    union bytes numbytes;
    printf("ingrese su float mano: ");
    scanf("%f", &numbytes.var);
    for (int i = 3; i >=0; i--){
        printf("%x", numbytes.varBytes[i]);
    }
    return 0;
}