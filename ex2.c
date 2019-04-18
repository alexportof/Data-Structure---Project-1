// nome : Álex Porto Ferreira
// matricula: 170119815

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

int *conta_notas(int *APR, int qnt){
    int cont = 0;
        for(int i = 0; i < qnt; i++){
            if(*(APR+i) == 1)
                cont++;    
        }

        *(APR + qnt) = cont;

        cont = 0;
        for(int i = 0; i < qnt; i++){
            if(*(APR+i) == 0)
                cont++;    
        }
        *(APR + (qnt+1)) = cont;
    return APR;
}
int percent_aprv(int *APR, int aprov, int reprov, int qnt){
    int porcent_aprov,porcent_reprov;

    porcent_aprov = (aprov * 100)/qnt ;
    porcent_reprov = (reprov * 100)/qnt;

    *(APR + (qnt+2)) = porcent_aprov;
    *(APR + (qnt+3)) = porcent_reprov;

    if(porcent_aprov > 50)
        return 1;
    else
        return 0;
    
}

int main(){
    int NOTAS[14],*APR, qnt_aprovados, qnt_reprovados, metade_aprov =0;

    NOTAS[10],NOTAS[11],NOTAS[12],NOTAS[13] = 0;

    printf("Olá,digite as 10 notas por favor\n");

    for(int i=0;i<10;i++){
        scanf("%d",&NOTAS[i]);
    }

    APR = recebe_notas(NOTAS, 10);
    APR = conta_notas(APR, 10);
    //printf("%d\n\n\n\n", NOTAS[10]);

    metade_aprov = percent_aprv(APR, NOTAS[10], NOTAS[11],10);

   printf("Quantidade de aprovados: %d\n", NOTAS[10]);
    printf("Quantidade de reprovados: %d\n", NOTAS[11]);
    printf("Percentual de aprovados: %d %%\n", NOTAS[12]);
    printf("Percentual de reprovados: %d %%\n", NOTAS[13]);
    if(metade_aprov == 1)
        printf("Mais da metade da turma foi aprovada!Parabens!!\n");
    else
        printf("Menos da metade da turma foi aprovada!Que pena :(\n");

    return 0;
}