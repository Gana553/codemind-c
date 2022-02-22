#include<stdio.h>
int main()
{
    int L,B,W,C,area,tarea,narea,nl,nb,cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    area=L*B;
    nl=L+(2*W);
    nb=B+(2*W);
    narea=nl*nb;
    tarea=narea-area;
    cost=C*tarea;
    printf("%d",cost);
}