/* 
Programacion 1 - Ingenieria en Computacion
Trabajo Practico 4 - Escribir un programa que resuelva la sumatoria de un numero -
Alumno: GONZALO BRAVO- 2023
*/
#include <stdio.h>
void sumatoria (int numero)
{
    int sum, cont;
    sum=numero;
    printf ("La sumatoria del numero %d es: \n", numero);
    for (cont=1; cont<numero; cont++){ 
        printf ("%d+", cont);
        sum=sum+cont;
    } 
    printf ("%d", numero);
    printf ("\nEl resultado de la sumatoria del numero %d es: %d\n", numero, sum);
}

int main()
{
    int numero;
    printf("Ingrese un numero para realizar su sumatoria:\n");
    scanf("%d",&numero);
    sumatoria (numero);
    return 0;
}