/*
		Paginas: (1)http://c.conclase.net 
				 (2)http://apunteseduardo.blogspot.com/2009/11/diferencias-entre-getch-getche-y.html
		
**************************************************************************************************************************************************************/
/*****************************EXPLICACIONES*******************************************************************************************************************/

Int getche(void); :
//Lee un solo carácter directamente desde el teclado, mostrando tal carácter en pantalla, a través de la BIOS o por directamente a vídeo.
/*
Diferencias entre getch(), getche(), y getchar()
getch() y getche() se encuentran definidas en el fichero de cabecera: "conio.h" (librería de Borland) y la función getchar() se encuentra definida en "stdio.h"
La función getch(): lee caracter a caracter pero no muestra por pantalla el carácter leido. -> "conio.h"
La función getche(): lee carácter a carácter y muestra por pantalla el carácter leido. -> "conio.h"
La función getchar(): lee caracter a caracter, hace un barrido, tras haber detectado fin ( intro ). -> "stdio.h"
Un apunte aparte merece la función putchar(), incluido en stdio.h, que muestra por pantalla (stdout) el carácter pasado por parámetro.
*/



/**************************************************************************************************************************************************************/


