#include <stdio.h>
#include <stdlib.h>

#define T 7 //esto no ocupa nada en memoria

/*********COMENTARIOS*********************************************************************
 Punteros-> sirven para modificar los valores de las variables en el main.
 para esto en las funciones que queremos realizar esto en ves de pasar un valor
 de la variable lo que necesito es el lugar en memoria que se indica con *.

******************************************************************************************/

/**
void puntero(int*,int);
*/

/*************************FUNCION PRINCIPAL************************************************/
int main()
{
    /**PUNTERO**************
    int p=10;
    int q=20;

    puntero(&p,q);

    printf("El valor de p: ",);
    printf("El valor de q: ");
    **************************/

    /*******VECTORES*****/
/**
    UN VECTOR ES UN CONJUNTO DE ELEMENTOS
    UN VECTOR ES UN CASO PARTICULAR DE UN PUNTERO. (PENSALO). (ARITMETICA DE PUNTEROS).
    -> DECLARACION:
        TIPO DE DATO NOMBRE[NUMERO DE ELEMENTOS DEL VECTOS];

    -> COMO SE ACCEDE AL ELEMENTO Y DARLE UN VALOR:

    -> NOMBREDELVECTOR [LUGAR DEL ELEMENTO] = VALOR;

    -> PARA ESCRIBIR UN ELEMENTO DEL VECTOR:
        printf(" %d" , nombreDelVector[lugarDelElemento]);

*/
    //int const Q=10;  constante de solo lectura. Solo se puede tomar el valor. Ocupar lugar en memoria.
    //no se usan las constantes
    //int vector[T];
    //int vector[T] = {1,2,3,4,5,6,7};// de esta manera se cargan los valores por extension
    //int i;
/**Ejemplo 1:********************
    vector[2]=9;

    printf(" %d\n", vector[2]);
********************************/
/**EJEMPLO 2:*********************/

   /**PARA INGRESAR LOS VALORES DEL VECTOR*/
    /**for (i=0;i<T;i++) Es necesario para que inicialice en 0 porq estamos trabajando con vectores.
    {
        printf(" ingrese un numero\n");
        scanf(" %d", &vector[i]);
    }
    */

    /**PARA MOSTRAR LOS VALORES DEL VECTOR*/
    /**printf("Todos los numeros : \n");
    for (i=0;i<T;i++) Es necesario para que inicialice en 0 porq estamos trabajando con vectores.
    {
        printf(" El valor es: %d\n", vector[i]);//CUANDO MUESTRO ES SIN EL AMPERSUN
    }
    */
    /**PARA MOSTRAR LOS VALORES PARES DEL VECTOR*/
    /**printf("Todos los numeros pares : \n");
    for (i=0;i<T;i++) Es necesario para que inicialice en 0 porq estamos trabajando con vectores.
    {
        if(vector[i]%2==0)
        {
        printf(" El valor es: %d\n", vector[i]);//CUANDO MUESTRO ES SIN EL AMPERSUN
        }
    }
    */


/**EJEMPLO 3********/

/**SWAP: INTERCAMBIO DE VALORES. PARA HACER EL INTERCAMBIO DE VARIABLES NECESITO UNA TERCER VARIABLE*/
/**
C=B;
B=A;
A=C;
*/

    int vector[T]={4,8,1,3,6,2,9};

    int i;
    int j;
    int auxiliar;

    /**for anidado ordenamiento metodo de burbujeo.
        En este caso ordenamos de mayor a menor*/
    for(i=0; i<T-1 ; i++)
    {
            for(j=i+1; j<T; j++)
            {
                if(vector[i]<vector[j])//criterio de ordenamiento
                {
                    auxiliar=vector[i]; //swap
                    vector[i]=vector[j];
                    vector[j]=auxiliar;
                }
            }
    }


    for (i=0;i<T;i++)/**Es necesario para que inicialice en 0 porq estamos trabajando con vectores.*/
    {
        printf(" El valor es: %d\n", vector[i]);//CUANDO MUESTRO ES SIN EL AMPERSUN
    }




    return 0;
}
/**PUNTERO
void puntero(int* a,int b)
{
    *a = b+5;
    b = 9;
}
*/
