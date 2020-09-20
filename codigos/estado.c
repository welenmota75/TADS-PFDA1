#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

char estciv;
main()
{
	setlocale(LC_ALL,"");
	INICIO:
	system ("color 70");
	system("cls");
	printf("\n\n\n\n\t\t\tforneça o estado civil");
	printf("\n\n\n\t\t\t\[c] = casado");
    printf("\n\n\n\t\t\t\[s] = solteiro");
    printf("\n\n\n\t\t\t\[d] = dirvorciado");
    printf("\n\n\n\t\t\t\[o] = outros");
    
    printf ("\n\n\n\n\t\t\tsua opcao:");
    fflush(stdin);
    scanf("%c", &estciv);

    switch(estciv)
    {
        case 'c': 
        case 'C' : printf("\n\nCasado");
        break;
        
        case 's':
        case 'S': printf("\n\nsolteiro");
        break;
        
        case 'd':
        case 'D': printf("\n\ndivorciado");
        break;
        
        case 'o':
        case 'O': printf("\n\noutros");
        break;
        
        default : 
        {
            system ("color 47");
		    system ("cls");
            printf("\n\nopcaoinvalida!!!\a\a\a");
            getch();
            goto INICIO;
        }
    }
    
    getch();
}
