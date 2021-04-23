#ifndef CADENA_H_INCLUDED
#define CADENA_H_INCLUDED

/** \brief Solicita que ingrese el/los nombres
 *
 * \param vec[] char Cadena que guarda el/los nombre/s
 * \return void
 *
 */
void ingresoNombre(char vec[]);

/** \brief Solicita que ingrese el/los apellidos
 *
 * \param vec[] char Cadena que guarda el/los apellido/s
 * \return void
 *
 */
void ingresoApellido(char vec[]);

/** \brief Concatena el/los nombre/s y el/los apellido/s
 *
 * \param name[] char Cadena con el/los nombre/s
 * \param surname[] char Cadena con el/los apellido/s
 * \param nameSurname[] char Cadena resultante con el/los nombre/s y el/los apellido/s
 * \return void
 *
 */
void concatenarNombreYApaellido(char name[], char surname[], char nameSurname[]);

/** \brief Aplica el formato deseado
 *
 * \param nameSurname[] char Cadena resultante con el/los nombre/s y el/los apellido/s con formato deseado
 * \return void
 *
 */
void aplicarFormato(char nameSurname[]);

#endif // CADENA_H_INCLUDED
