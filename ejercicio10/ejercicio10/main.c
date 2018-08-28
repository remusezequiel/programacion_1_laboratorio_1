#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**Enunciado:
Al presionar el botón pedir números hasta que el usuario quiera, mostrar:
1-Suma de los negativos.
2-Suma de los positivos.
3-Cantidad de positivos.
4-Cantidad de negativos.
5-Cantidad de ceros.
6-Cantidad de números pares.
7-Promedio de positivos.
8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos).
*/

int main()
{
    int numero;
    int numeroNegativo;         // <0
    int numeroPositivo;         // >=0
    int sumaNegativos = 0;      // sumaNegativos+=numeroNegativo;
    int sumaPositivos = 0;      // sumaPositivo+=numeroPsitivo;
    int resta;                  // sumaPositivos - sumaNegativos;
    int contadorPositivos = 0;  //contadorPositivos++;
    int contadorNegativos = 0;  //contadorNegativos++;
    int contadorCeros = 0;      //contadorCeros++;
    int contadorPares = 0;      //contadorPares++;  (numero%2 == 0)
    int promedioPositivos;      //sumaPositivos/contadorPositivos;
    int promedioNegativos;      //sumaNegativos/contadorNegativos;
    int maximo = INT_MIN;
    int minimo = INT_MAX;
    int respuesta = 1;

    do{
        printf("Ingrese un numero entero:%d \n");
        scanf(" %d", &numero);

        if(numero > maximo)//maximo
            {
                maximo=numero;
            }
        else if(numero < minimo)//minimo
            {
                minimo=numero;
            }



        if(numero%2 == 0)//pares
            {
                contadorPares++;
            }

        if(numero < 0)//negativos
            {
                contadorNegativos++;
                sumaNegativos = sumaNegativos + numeroNegativo;
            }
        else if(numero > 0)//positivos
            {
                contadorPositivos++;
                sumaPositivos = sumaPositivos + numeroPositivo;
            }
        else if(numero == 0)//ceros
            {
                contadorCeros++;
            }

        printf("Desea continuar? (0=no / 1=si)");
        scanf("%d", &respuesta);

    }while(respuesta != 0)

        promedioNegativos = sumaNegativos/contadorNegativos;
        promedioPositivos = sumaPositivos/contadorPositivos;
        resta = sumaPositivos + sumaNegativos;

        printf("1-Suma de los negativos: %d \n", sumaNegativos);
        printf("2-Suma de los positivos: %d \n", sumaPositivos);
        printf("3-Cantidad de positivos: %d \n", contadorPositivos);
        printf("4-Cantidad de negativos: %d \n", contadorNegativos);
        printf("5-Cantidad de ceros: %d\n", contadorCeros);
        printf("6-Cantidad de números pares: %d \n", contadorPares);
        printf("7-Promedio de positivos: %d \n", promedioPositivos);
        printf("8-Promedios de negativos: %d \n", promedioNegativos);
        printf("9-Diferencia entre positivos y negativos: %d \n", resta);
        printf("10-Numero maximo:%d \n", maximo);
        printf("11-Numero minimo:%d \n", minimo);


    return 0;
}
