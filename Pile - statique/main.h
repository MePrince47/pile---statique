

#define n 5

typedef struct pile_statique
{
    int tab[n];
    int sommet;
}pile_statique, *pile;

pile initialiser();
int est_vide(pile pi);
pile empiler(pile pi,int x);
pile depiler(pile pi);
void afficher(pile pi);
int est_pleine(pile pi);
int sommet(pile pi);


