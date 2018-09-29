/*MOTIVOS*/
#define INFATRO 10
#define ACB 20
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

int eGen_init(eGenerica[],int limite);
int eGen_buscarPorId(eGenerica[] ,int limite, int id);
int eGen_siguienteId(eGenerica[] ,int limite);
int eGen_buscarLugarLibre(eGenerica listado[],int limite);

void eGen_mostrarUno(eGenerica parametro);
int eGen_mostrarListado(eGenerica[] ,int limite);
int eGen_mostrarListadoConBorrados(eGenerica[] ,int limite);

int eGen_alta(eGenerica[] ,int limite);
int eGen_baja(eGenerica[] ,int limite, int id);
int eGen_modificacion(eGenerica[] ,int limite, int id);

int eGen_ordenar(eGenerica[] ,int limite, int orden);
