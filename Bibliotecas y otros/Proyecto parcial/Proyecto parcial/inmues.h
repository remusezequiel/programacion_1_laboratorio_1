
///////////PROTOTIPOS//////////////////////////////////////////////////////////////////////////////////

//(1)FUNCION INGRESE UN ENTERO
/** \brief Esta funcion permite recivir como parametro un mensaje de pedido el cual sera referencia
 *      para que el usuario ingrese un numero
 * \param mensaje[] char
 * \return int valor del numero
 *
 */
int ingresoEntero(char mensaje[]);
//(2)FUNCION INGRESE UN NUMERO FLOTANTE
/** \brief Esta funcion permite recivir como parametro un mensaje de pedido el cual sera referencia
 *      para que el usuario ingrese un numero
 * \param mensaje[] char
 * \return float valor del numero
 *
 */
float ingresoFlotante(char mensaje[]);


//(3)FUNCION INGRESE UN CARACTER
/** \brief Esta funcion permite recivir como parametro un mensaje de pedido el cual sera referencia
 *      para que el usuario ingrese un caracter
 * \param mensaje[] char
 * \return char el caracter impreso
 *
 */
char ingresoChar(char mensaje[]);


//(4)FUNCION INGRESE UN ID
/** \brief Esta funcion permite recivir como parametro el tamaño de un vector. Esto sirve para
 *      que los id generados sean del rango del tamaño del vector. Por ejemplo, si el vector
 *      tiene un rango de 100 podremos obtener 100 id diferentes correspondientes con el
 *      lugar donde se guardo el ente en el vector
 * \param size int
 * \return int
 *
 */
int ingresoId(int size);
//(5)FUNCION INGRESE RESPUESTA
char ingresoRespuesta(char mensaje[]);


//(6)FUNCION INGRESAR CADENA
int ingresaCadena(char* array, int size, char* mensaje);






////////////////////////////////////////////////////////////////////////////////////////////////////////
