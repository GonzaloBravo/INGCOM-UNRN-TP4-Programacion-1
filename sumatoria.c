/* 
Programacion 1 - Ingenieria en Computacion
Trabajo Practico 4 - Escribir un programa que resuelva la sumatoria de un numero -
Alumno: GONZALO BRAVO- 2023
*/
#include <stdio.h>
int main()
{
    int numero, sum, cont;
    printf("Ingrese un numero para realizar su sumatoria:\n");
    scanf("%d",&numero);
    sum=numero;
    printf ("La sumatoria del numero %d es: \n", numero);
    for (cont=1; cont<numero; cont++){ 
        printf ("%d+", cont);
        sum=sum+cont;
    } 
    printf ("%d", numero);
    printf ("\nEl resultado de la sumatoria del numero %d es: %d\n", numero, sum);
    return 0;
}