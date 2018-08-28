#include <stdio.h>
#include <stdlib.h>

/*1- declarar funcion//prototipo || firma
  2- llamada a la funcion
  3- Desarrollo de la funcion

    PREGUNTAS A REALIZARSE: queDevuelve comoSeLlama (queRecive)

    retorna|reciba
        1  |  1     ---->(1)
        1  |  0     ---->(2)
        0  |  1     ---->(3)
        0  |  0     ----> 4)funcion nulla -> void(){} [es un objeto]


    *prototipos por arriba del main
    *implementaciones por debajo del main
*/
//PROTOTIPOS
void sumar1(void);//prototipo (4) funcion nula: todo prototipo termina con punto y coma. Si no va a recivir nada le pongo void entre parentecis
void sumar2(int ,int);//prototipo funcion(3)
int sumar3(void);//prototipo:(2)


//FUNCION PRINCIPAL
int main()
{
    //sumar1();
/*
    int numeroUno;
    int numeroDos;


    printf("ingrese un numero:");
    scanf("%d", &numeroUno);


    printf("ingrese un numero:");
    scanf("%d", &numeroDos);

    sumar2(numeroUno, numeroDos);//funcion sumar2(parametros actuales)
*/
    int suma;

    suma=sumar3();

    printf("La suma es: %d", suma);

    return 0;
}

//DEFINICION DE FUNCIONES

//FUNCION NULA
void sumar1(void)//implementacion
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("ingrese un numero:");
    scanf("%d", &numeroUno);


    printf("ingrese un numero:");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    printf("La suma es: %d", suma);

}

void sumar2(int n1, int n2)//sumar2(parametros formales)
{
    int suma;

    suma = n1 + n2;

    printf("La suma es: %d", suma);



}

int sumar3(void)//sumar3
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("ingrese un numero:");
    scanf("%d", &numeroUno);


    printf("ingrese un numero:");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;



    return suma;
}


