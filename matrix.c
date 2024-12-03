#include <stdio.h>

int main() {
    char M[5][5] = {{'1', '2', '3','4','5'}, {'7','a', 'c', '8','d'}, {'c', '9', '4','z','8'},{'5','6','p','n','3'},{'2','9','t','m','k'}};
    int i, j;
    char temp;

    // Print the  matrix
    printf("Original Matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c\t", M[i][j]);
        }
        printf("\n");
    }

    // Print diagonal
    printf("\nDiagonal Elements:\n");
    for (i = 0; i < 5; i++) {
        printf("%c\t", M[i][i]);
    }
    printf("\n");
      printf("\n");
        printf("\n");


int a;
a=0;
          printf("diagonal iverse:");
          printf("\n");


         for (i = 4; i >=0 ; i--) {


         printf("%c\t", M[i][a]);
         a++;

         }



           printf("\n");
             printf("\n");
               printf("\n");


    // impaire lignes

     printf("les lignes impaire :");

    printf("\n");
    printf("\n");

      for (i = 0; i < 5; i+=2) {
        for (j = 0; j < 5; j++) {

               // if(i%2==0)
          printf("%c\t",M[i][j]);

        }
        printf("\n");

        }


        printf("\n");
        printf("\n");
         // paire lignes

     printf("les lignes paire :");

    printf("\n");
    printf("\n");

      for (i = 1; i < 4; i+=2) {
        for (j = 0; j < 5; j++) {

          //      if(i%2==1)
          printf("%c\t",M[i][j]);

        }
        printf("\n");

        }




 printf("\n");
  printf("\n");
   printf("\n");


//colone impaire
printf("le colone impaire ");

    printf("\n");
    printf("\n");

   for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j+=2) {

          printf("%c\t",M[i][j]);

        }
        printf("\n");

        }

 printf("\n");
   printf("\n");

   //colone paire

   printf("le colone paire ");


    printf("\n");
    printf("\n");

   for (i = 0; i < 5; i++) {
        for (j = 1; j < 4; j+=2) {

          printf("%c\t",M[i][j]);

        }
        printf("\n");

        }



    printf("\n");
   printf("\n");
    // change the matrix
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            temp = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = temp;
        }
    }

    // Print the matrix inverse
    printf("\n change Matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c\t", M[i][j]);
        }
        printf("\n");


    }



    return 0;
}
