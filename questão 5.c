#include <stdio.h>

int main()
{
int idioma, idioma1, idioma2, idioma3;

 printf ("Escolha um idioma:");
 scanf("%d",&idioma);

 switch (idioma){

 case 1:
 printf ("Idioma escolhido é o Inglês\n:");
    printf ("welcome!");
    scanf("%d",&idioma1);
    break;
 case 2:
 printf ("Idioma escolhido é o Espanhol\n:");
printf ("sea bienvenido!");
    scanf ("%d",&idioma2);
    
 break;
 case 3:
 printf ("Idioma escolhido é o Francês\n:");
 printf ("Accueillir!");
    scanf ("%d",&idioma3);
break;

 default:
 printf ("Opção digitada errada");
    break;
 }   
    

    return 0;
}