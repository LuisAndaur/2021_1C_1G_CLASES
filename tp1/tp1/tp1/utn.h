#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED



/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje[] char Es el mensaje a ser mostrado
 * \return int El numero ingresado por el usuario
 *
 */
int getInt(char mensaje[]);

/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje[] char Es el mensaje a ser mostrado
 * \return float El numero ingresado por el usuario
 *
 */
float getFloat(char mensaje[]);

/** \brief Solicita un caracter al usuario y devuelve el resultado
 *
 * \param mensaje[] char Es el mensaje a ser mostrado
 * \return char El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[]);




int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);



/** \brief Genera un número aleatorio
 *
 * \param desde int Número aleatorio mínimo
 * \param hasta int Número aleatorio máximo
 * \param iniciar int Indica si se trata del primer número solicitado
 * \return char Retorna el número aleatorio generado
 *
 */
char utn_getNumeroAleatorio(int desde, int hasta, int iniciar);

/** \brief Solicita un numero y lo retorna.
 *
 * \return int Numero ingresado por el usuario.
 *
 */



/** \brief Muestra el menu de opciones y devuelve una opcion seleccionada
 *
 * \param numA int El primer operando A
 * \param numB int El segundo operando B
 * \param flagA int Si la bandera es 1 muestra el valor ingresado
 * \param flagB int Si la bandera es 1 muestra el valor ingresado
 * \return int La opcion seleccionada
 *
 */
int mostrarMenu(int numA, int numB, int flagA, int flagB);

/** \brief Solicita el ingreso de un numero
 *
 * \return int El numero ingresado
 *
 */
int pedirOperando();

/** \brief Suma dos numeros y devuelve el resultado.
 *
 * \param a int Primero operando.
 * \param b int Segundo operando.
 * \return int Devuelve el resultado de la suma.
 *
 */
int sumar(int a, int b);

/** \brief Resta dos numeros y devuelve el resultado.
 *
 * \param a int Primero operando.
 * \param b int Segundo operando.
 * \return int Devuelve el resultado de la resta.
 *
 */
int restar(int a, int b);

/** \brief Multiplica dos numeros y devuelve el resultado.
 *
 * \param a int Primero operando.
 * \param b int Segundo operando.
 * \return int Devuelve el resultado de la multiplicacion.
 *
 */
int multiplicar(int a, int b);

/** \brief Divide dos numeros y devuelve como resultado si fue posible la division.
 *
 * \param a int Primero operando.
 * \param b int Segundo operando.
 * \param division float* Direccion de memoria
 * \return int Devuelve 1 si fue posibles dividir / 0 si no fue posible la division.
 *
 */
int dividir(int a, int b, float* division);

/** \brief Calcula el factorial de un entero n.
 *
 * \param n int Parametro del entero n.
 * \return int Resultado n!.
 *
 */
long long int factorial(int n);

/** \brief Calcular todas las operaciones
 *
 * \param numA int Operador A
 * \param numB int Operador B
 * \param suma int* Calcula la suma
 * \param resta int* Calcula la resta
 * \param multiplicacion int* Calcula la multiplicacion
 * \param rDividir int* Calcula la division si pudo dividir devuelve 1/ sino 0
 * \param division float* Resultado de la division
 * \param factorialA long longint* Calcula el factorial del operador A
 * \param factorialB long longint* Calcula el factorial del operador B
 * \return void
 *
 */
void calcularOperaciones(int numA, int numB, int* suma, int* resta, int* multiplicacion, int* rDividir, float* division, long long int* factorialA, long long int* factorialB);

/** \brief Muestra el resultado de todas las operaciones realizadas
 *
 * \param numA int Operador A
 * \param numB int Operador B
 * \param suma int* Resultado de la suma
 * \param resta int* Resultado de la resta
 * \param multiplicacion int* Resultado de la multiplicacion
 * \param rDividir int* Devuelve 1 si pudo dividir / 0 si no pudo
 * \param division float* Resultado de la division
 * \param factorialA long longint* Resultado A!
 * \param factorialB long longint* Resultado B!
 * \return void
 *
 */
void mostrarResultados(int numA, int numB, int* suma, int* resta, int* multiplicacion, int* rDividir, float* division, long long int* factorialA, long long int* factorialB);

#endif // UTN_H_INCLUDED
