/*MOTIVOS*/
#define INFATRO 10
#define ACV 20
#define GRIPE 30
/*ESTADOS*/
#define PENDIENTE 0
#define CUMPPLIDO 1


/*ESTRUCTURA ASOCIADO*/
typedef struct
{
    int idAsociado;
    int dni;
    char nombre[50];
    char apellido[50];
    int edad;
    int estado;
    int isActive;

}sAsociado;
/*ESTRUCTURA LLAMADA*/
typedef struct
{
    int idLlamada;
    int asociado;
    char motivo[100];
    int estado;
    int idAmbulancia;
    float tiempo;

}sLlamada;

/**
Nota 1: Se deberá desarrollar una biblioteca lib.c y lib.h la cual contendrá las funciones
(Alta, Baja,Modificar, Nueva llamada, Fin de llamada e Informar).*/
int initicializar(sAsociado* ,int limite);
int mostrarOpciones(void);
int alta(sAsociado* ,int limite);
int baja(sAsociado* ,int limite, int id);//falta hacer
int modificar(sAsociado* ,int limite, int id);
int nuevaLlamada();//falta hacer
int siguienteId(sAsociado* ,int limite);
int finLlamada();
