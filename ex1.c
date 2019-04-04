#include <stdio.h>

int *fneuronio(int *input, int *weight, int max,int limiart, int *excitement){
    int somap = 0;

    for(int i = 0; i < max; i++)
    {
        somap = somap + (*(input+i) * *(weight+i)); 
    }
    
    if (somap > limiart) {
        *excitement = 1;
    }
    else {
        *excitement = 0;    
    }
    return excitement;
}

int main(){
    int input[10],weight[10],limiart, excitement,*ptr,*excitement_returned;
    ptr = &excitement;

    printf("Olá, por favor forneca os 10 valores de entrada\n");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&input[i]);
    }
    
    printf("Agora os 10 valores de peso,por favor\n");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &weight[i]);
    }

    printf("Agora forneça o valor do limiar T\n");
    scanf("%d", &limiart);

     excitement_returned = fneuronio(input, weight, 10, limiart, ptr);
    
    
    
    return 0;
}