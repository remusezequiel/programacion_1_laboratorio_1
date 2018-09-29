/*MOTIVOS*/
#define INFATRO 101
#define ACV 102
#define GRIPE 103
/*ESTADOS*/
#define PENDIENTE 10
#define CUMPPLIDO 20
#define ALTA 1
#define BAJA 0

/*ESTRUCTURA ASOCIADO*/
typedef struct
{
    int idAsociado;
    int dni;
    char nombre[50];
    char apellido[50];
    int edad;
    int estado;
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
int inicializar(sAsociado* ,int limite);
int mostrarOpciones(void);
int ingresarOpcion(void);
sAsociado cargarUnTipo_sAsociado(int);
void cargarPorCantidad(int cantidad,sAsociado* array,int size);
int alta(sAsociado* ,int limite);
int baja(sAsociado* ,int limite, int id);//falta hacer
void mostrarListaTipo_sAsociado(sAsociado* array, int size);
void mostrarUnTipo_sAsociado_SE(sAsociado asociado);
void mostrarUnTipo_sAsociado_CE(sAsociado asociado);
int modificar(sAsociado* ,int limite, int id);
int nuevaLlamada();//falta hacer
int siguienteId(sAsociado* ,int limite);
int finLlamada();//falta
