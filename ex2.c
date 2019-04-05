#include <stdio.h>

int *recebe_notas(int *apr, int qnt){
    for(int i = 0; i < qnt; i++){
        if(*(apr+i) >= 6){
            *(apr + i) = 1;
        }
        else
        {
            *(apr + i) = 0;
        }
    }
    return apr;
}

int *conta_notas(int *APR, int qnt, char option){
    int cont = 0;
    //if(option == 'a'){
        for(int i = 0; i < qnt; i++){
            if(*(APR+i) == 1)
                cont++;    
        }

        *(APR + (qnt+1)) = cont;

        cont = 0;
        for(int i = 0; i < qnt; i++){
            if(*(APR+i) == 0)
                cont++;    
        }
        *(APR + (qnt+2)) = cont;
    return APR;
}

int main(){
    int NOTAS[12],*APR;
    NOTAS[11],NOTAS[12] = 0;
    int qnt_aprovados, qnt_reprovados;
    printf("Olá,digite as 10 notas por favor\n");
    for(int i=0;i<10;i++){
        scanf("%d",&NOTAS[i]);
    }

    APR = recebe_notas(NOTAS, 10);
    APR = conta_notas(APR, 10,'a');
    printf("%d\n\n\n\n",NOTAS[12]);



    return 0;
}