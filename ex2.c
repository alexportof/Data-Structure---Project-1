#include <stdio.h>

int *recebe_notas(int *apr, int qnt_elem){
    for(int i = 0; i < qnt_elem; i++){
        if(*(apr+i) >= 6){
            *(apr + i) == 1;
        }
        else
        {
            *(apr + i) == 0;
        }
    }
    return apr;
}

int main(){
    int apr[10],*APR;
    printf("Olá,digite as 10 notas por favor\n");
    for(int i=0;i<10;i++){
        scanf("%d",&apr[i]);
    }

    APR = recebe_notas(apr, 10);

    return 0;
}