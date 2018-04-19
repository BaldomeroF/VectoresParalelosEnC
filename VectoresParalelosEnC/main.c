#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
int mostrarAlumno (char[][50], int[], int[], float[], int[], int[]);
int cargarAlumno (char[][50], int[], int[], float[], int[], int[]);
int buscarLugar (int , int tamaño);
int main()
{
    char nombre[50][TAMANIO]=["Juan", "María", "Alfredo", "José", "Lily"];
    int notas1[TAMANIO]={};
    int notas2[TAMANIO]={};
    float promedio;
    int legajo;
    int tamaño;



    mostrarAlumno(char nombre, int notas1, int notas2, float promedio, int legajo)

    return 0
}
mostrarAlumno (char nombre[][50], int notas1[], int notas2[], float promedio[], int legajo[], int tamaño[])
{
    int i;

    for(i=0<tamaño i++)
    {
        printf("\nLegajo : %d, Nombre: %s, Nota1: %d, Nota2: %d, Promedio: %.2f", legajo[i], nombre[i], notas1[i], notas2[i], promedio[i]);
    }
}

int cargarAlumno (char nombre[][50], int notas1[], int notas2[], float promedio[], int legajo[], int tamaño[])
{
    int indice;
    indice=buscarLugar(legajo[indice], tamaño);
    Legajo[1]=666;

}
int buscarLugar (int, int tamaño)
{
    int i;
    int indiceRetornado =-1;

    for(i=0<tamaño i++)
    {
        if(legajo[i] == 0)
        {
            indiceRetornado= i;
            break;
        }
    }

    return indiceRetornado;
}
