#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main()
{
//DEFINITION DES FONCTIONS

    pile initialiser()
{   pile_statique *pi=malloc(sizeof(*pi));
    pi->sommet= -1;
    return pi;
}

    int est_vide(pile pi)
{
    if(pi->sommet==-1)
        return 1;
    return 0;
}

    int est_pleine(pile pi)
{
    if(pi->sommet==n-1)
        return 1;
    return 0;
}

    int sommet(pile pi)
{
    int sommet = pi->tab[pi->sommet];
    return sommet;
}

    pile empiler(pile pi,int x)
{

    int i;
    if(est_vide(pi))
    {
        pi->sommet=0;
        pi->tab[0]=x;
    }
    else if(!est_pleine(pi))
    {

        pi->sommet=pi->sommet+1;
        i=pi->sommet;
        pi->tab[i]=x;
    }else
        {
            printf("\n La pile est pleine");
        }
    return pi;
}

    pile depiler(pile pi)
{
    if(est_vide(pi))
    {
        printf("Erreur: votre pile est vide");
        exit(0);
    }
    pi->sommet--;
    return pi;


}



void afficher(pile pi)
{
    if(est_vide(pi))
    {
        printf("\nLa pile est vide !!!");
        return;
    }
    int i=pi->sommet;
    while(!est_vide(pi))
    {
        printf("\n{%d} ",pi->tab[pi->sommet]);
        pi->sommet--;
    }
    pi->sommet=i;
    printf("\n");
}

//USAGE DE LA FONCTION EMPILER
printf("-> Empilons les elements ");
pile pi = initialiser(pi);
pi=empiler(pi,85);
afficher(pi);
pi=empiler(pi,86);
afficher(pi);
pi=empiler(pi,88);
afficher(pi);
pi=empiler(pi,89);
afficher(pi);
pi=empiler(pi,90);
afficher(pi);

//TEST DE LA FOCTION EST_PLEINE()
pi=empiler(pi,89);
afficher(pi);

//USAGE DE LA FONCTION DEPILER & SOMMET

printf("\n-> Usage de la fonction depiler() ");
pi = depiler(pi);
afficher(pi);
int som = sommet(pi);
printf("\n le sommet est : %d",som);

pi = depiler(pi);
afficher(pi);
som = sommet(pi);
printf("\n le sommet est : %d \n",som);

//USAGE DE EST PLEINE

if(est_pleine(pi))
    printf("\nla pile est pleine\n");
else
    printf("\n la pile n'est pas pleine\n");
return 0;
}
