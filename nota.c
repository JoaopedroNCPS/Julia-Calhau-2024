#include <stdio.h>
#include <locale.h>

int main()
{
   float Nota1, Nota2, Nota3, Media, Soma;
   Soma=0;
   Media=0;
   printf("\t Digite a[1]ªnota : ");
   scanf("%f",&Nota1);

   printf("\t Digite a[2]ªnota : ");
   scanf("%f",&Nota2);
   printf("\t Digite a[3]ªnota : ");
   scanf("%f",&Nota3);
   Soma=Nota1+Nota2+Nota3;
   Media=Soma/3;
   printf("Media = %.1f ",Media );

   return 0;
}
            
