#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* variáveis */

float   nota1,nota2,media;

/* corpo do programa */
main()
{   
    setlocale(LC_ALL,"Portuguese");
  
  
    {   /* Solicita as notas para calcular a média do aluno*/ 
        system ("color 07");
        printf ("Digite nota de p1: ");
        fflush (stdin);
        scanf  ("%f" , &nota1);
        printf ("Digite nota de media2: ");
        fflush (stdin);
        scanf  ("%f" , &nota2);
      
        /* Calcula a média do aluno */
        media = (nota1 + nota2 ) / 2;
        /* Mostra a média para o aluno */
        printf ("\n\nSua média final foi: %.2f\n", media);
        /* Verifica a situação final do aluno */
   }

    /* Aguarda o pressionar de qualquer tecla*/
    getch();
    return(0);
}
