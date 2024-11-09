#include<stdio.h>
#include<string.h>
#include<stdlib.h>

   //charger de chaine:

   char *chargerChaine(int N){


         char *p=malloc((N+1)*sizeof(char));
   if(p==NULL){

    printf("ne pas d'espace en memoire!");

    return NULL;
   }
    else
    {

    int i ;



     printf("donner la chaine:");


    for(i=0;i<N;i++){



        scanf(" %c",&p[i]);

    }

     p[N]='\0';}

   return p;
   }

   //langeur de chaine :

int  Longueur (char *ch){


int i=0;

while (ch[i] != '\0'){
    i++;
    }
        return i;

}
        void chargertab(char *p,char tab[]){

          printf("\n le tableux:\n");

        int i=0;

       while(p[i]!='\0'){

        tab[i]=p[i];
        i++;
       }

       tab[i]='\0';

        }








     void inversertab(char tab[], char t[], int m) {

      printf("\n le inverse tableux:\n");

    for (int i = 0; i < m; i++) {
        t[i] = tab[m - 1 - i];
    }
    t[m] = '\0';
}









        void affichertab(char tab[],int m){

        int i=0;

        for(i=0;i<m;i++){

            printf(" %c",tab[i]);

        }
        }




int main(){


char *ch;
int n;
int m;
printf("donner la taille maximale de la chaine :");
scanf("%d",&n);


ch=chargerChaine(n);

 m=Longueur(ch);

 char tab[m],t[m];

 chargertab(ch,tab);

 affichertab(tab,m);

 inversertab(tab,t,m);

 affichertab(t,m);

 free(ch);

return 0;
}
