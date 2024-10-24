#include<stdio.h>

struct rz{
    char name[40];
    int age ;

};
 int main (void){
   int n,i;

   printf ("entrer le nombre des etudiant:");
   scanf ("%d",&n);

   struct rz tab[n];

   for (i=0;i<n;i++){
   printf ("entrer le nom de ce personne :");
   scanf ("%s",&tab[i].name);
   printf ("entrer l'age de ce personne :");
   scanf ("%d",&tab[i].age);
   }
     return 0;
}
