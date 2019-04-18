// nome : Álex Porto Ferreira
// matricula: 170119815

#include <stdio.h>

int move_disc(int disc,char ori, char dest, char aux){
    if (disc == 1) {
        printf("Mover disco %d de %c para %c\n", disc, ori, dest);
    }
    else
    {
        move_disc(disc-1,ori,aux,dest);
        printf("Mover disco %d de %c para %c\n", disc, ori, dest);
        move_disc(disc-1,aux,dest,ori);
    }
}

int main(){
    int discos;
    printf("Por favor,insira o numero de discos\n");
    scanf("%d",&discos);
    move_disc(discos,'A','C', 'B');
    return 0;
}