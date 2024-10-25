#include<stdio.h>

//declaration des structures
typedef struct {
    char rue[50];
    char ville[50];
    int cp;

}adresse ;

typedef struct {
    char name[40];
    int age ;
    adresse A;
}personne ;

//foction 1   AJOUTER
void ajouterpersonne (personne tab[],int nombre){
    int i;
    for (i=0;i<nombre;i++){
   printf ("entrer le nom de cet personne %d: ",i+1);
   scanf ("%s",tab[i].name);
   printf ("entrer l'age de cet personne %d:",i+1);
   scanf ("%d",&tab[i].age);

   printf ("entrer la rue de cet personne %d:",i+1);
   scanf ("%s",tab[i].A.rue);
   printf ("entrer la ville de cet personne %d:",i+1);
   scanf ("%s",tab[i].A.ville);
   printf ("entrer le code postal de la ville de cet personne %d:",i+1);
   scanf ("%d",&tab[i].A.cp);
   }
}


//fonction 2  :  AFFICHER
void afficherPersonnes( personne tab[],int nombre){
     printf("\n--- Informations des personnes ---\n");
   int i;
   for (i=0; i<nombre;i++){
    printf("personne :%d\n",i+1);
    printf("name:%s\n",tab[i].name);
    printf("age :%d\n",tab[i].age);
    printf("Adresse : %s, %s, %d\n", tab[i].A.rue, tab[i].A.ville, tab[i].A.cp);
    printf("\n");
   }
}

//FONCTION 3  :  MODIFIER
void modifierPersonne(personne tab[], int nombre ){

    int indice;
   printf("enter l'indice de personne %d:",indice);
   scanf ("%d",&indice);

   if  (indice<1 || indice>nombre){
        printf ("nombre pas trouver");}
   else {
   printf("enter le nom de personne %d:",indice);
   scanf ("%s",tab[indice-1].name);
   printf ("entrer l'age de cet personne %d:",indice);
   scanf ("%d",&tab[indice-1].age);

   printf ("entrer la rue de cet personne %d:",indice);
   scanf ("%s",tab[indice-1].A.rue);
   printf ("entrer la ville de cet personne %d:",indice);
   scanf ("%s",tab[indice-1].A.ville);
   printf ("entrer le code postal de la ville de cet personne %d:",indice);
   scanf ("%d",&tab[indice-1].A.cp);
   }
}

//FONCTION 4  :   SUPPRIMER

void supprimerPersonne(personne tab[], int nombre){

    int in,i;
    printf ("donne l'indice de personne que voulez supprimer %d:",in);
    scanf ("%d",&in);

   if (in<0 || in>nombre){
        printf ("nombre pas trouver");}
   else{

        for(i=0;i<=nombre;i++){

        tab[in]= tab[in+1];}


} printf ("le personne est supprime");
}


int main(void){

   int nombre ,i,choix;

   printf ("entrer le nombre des personne:");
   scanf ("%d",&nombre);

    personne tab[nombre];

do {
    printf("\n--- menu ---\n");
    printf ("1.ajouter une personne\n");
    printf ("2.afficher une personne\n");
    printf ("3.modifier une personne\n");
     printf ("4.supprimer une personne\n");

    printf ("entrer votre choix:\n");
    scanf ("%d",&choix);

  switch (choix){
   case 1:
       ajouterpersonne(tab,nombre);
       break;
    case 2:
       afficherPersonnes(tab,nombre);
       break;
   case 3:
      modifierPersonne(tab,nombre);
      break;
   case 4:
      supprimerPersonne(tab,nombre);
      break;
   default :
    printf("Choix invalide. Veuillez réessayer.\n");

   }
   } while (1);


     return 0;
}
