/* 
Programacion 1 - Ingenieria en Computacion
Trabajo Practico 4 - Escribir un programa que determine si un numero es capicua -
Alumno: GONZALO BRAVO- 2023
*/
#include <stdio.h>
int main()
{
int numero, resto, suma, cociente;
printf("Ingrese un numero para saber si es capicua:\n");
scanf("%d",&numero);
while (numero<=10)
{
    printf ("El numero ingresado debe ser mayor a 10\n");
    printf("Ingrese un numero para saber si es capicua:\n");
    scanf("%d",&numero);
}
cociente=numero;
suma=0;
while (cociente>=10)
{
    resto=cociente%10;
    suma=(suma*10)+resto;
    cociente=cociente/10;
}
suma=suma*10+cociente;
if (suma==numero){
    printf ("El numero %d es capicua\n", numero);
}
else{
    printf ("El numero %d no es capicua\n", numero);
}
return 0;
}