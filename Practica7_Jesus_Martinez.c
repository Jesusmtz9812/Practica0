//Practica#7                                  Cruz Martinez Jesus Alberto
//Fecha de entrega 23 de noviembre
//seccion de librerias que se usaran en e codigo
#include <stdio.h>

//declaracion de funciones
int main(){

//declaracion de variables
    float promedioAlumno; //nuestra variable es real en el caso de que sea con punto decimal la calificacion

    /*
    Bloque de instrucciones
    */

    printf("Bienvenido al programa que calcula si el alumno aprobo o reprobo");
    printf(".-.");

    printf("Ingrese el promedio del alumno");
    scanf("&f", &promedioAlumno);
    printf("Ingrese el promedio del alumno");
    scanf("&f", &promedioAlumno);
    if(promedioAlumno>=6)//if y else es una estructura de comparacion que en el diagrama de flujo es el rombo
    {
        printf("El alumno ah aprobado la materia felicidades");
    }
    else
    {
        printf("El alumno ah reprobado super F ");
    }

    return 0;



}
