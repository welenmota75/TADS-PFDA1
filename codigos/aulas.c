#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
/* VARI�VEIS GLOBAIS */
int    _1oDia_de_aula, _1oMes_de_aula, total_dias, dia_final;
/* CORPO DO PROGRAMA */
main()
{ setlocale(LC_ALL, "");
  printf ("\nEm que dia suas aulas come�aram? ---> ");
  fflush (stdin);
  scanf  ("%i" , &_1oDia_de_aula); /* em 2019, as aulas come�aram em 11/02 */
  printf ("\nEm que m�s suas aulas come�aram?[2=fevereiro][3=mar�o][4=abril] ---> ");
  fflush (stdin);
  scanf  ("%i" , &_1oMes_de_aula);
  total_dias = 0; 
  switch ( _1oMes_de_aula )
  {  	case 2:  
	{ dia_final  = 28; /* fevereiro tem 28 dias */
  	  total_dias = dia_final - _1oDia_de_aula + 31 + 2; /* conta fevereiro, mar�o e abril */
  	}
  	break;
  	case 3:  
	{  dia_final  = 31; /* mar�o tem 31 dias */
  	   total_dias = dia_final - _1oDia_de_aula + 2;     /* conta mar�o e abril */
  	}
  	break;
  	case 4:  
	{  dia_final  = 2; /* consedera at� hoje 02/04/2019 */
    	   total_dias = dia_final - _1oDia_de_aula;         /* conta s� abril */
  	}
  	break;
  }
  
  printf ("\n\nVoc� faz parte do IFSP h� %d dias.", total_dias);
  getch();
}
