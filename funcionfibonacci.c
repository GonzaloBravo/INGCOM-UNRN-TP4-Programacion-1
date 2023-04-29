/* 
Programacion 1 - Ingenieria en Computacion
Trabajo Practico 4 - Escribir un programa que determine el valor que se encuentra en una
posicion de la serie de Fibonacci -
Alumno: GONZALO BRAVO- 2023
*/
#include <stdio.h>
int fibonacci (int valor)
{
int num1, num2, pos;
num1=0;
num2=1;
pos=2;
while (num1>=0){
    num1=num1+num2;
    pos=pos+1;
    if (num1==valor){
        return pos;
    }
    num2=num2+num1;
    pos=pos+1;
    if (num2==valor){
        return pos;
    }
}
}

int main()
{
int valor;
printf("Ingrese un valor para encontrar su posicion en la serie de Fibonacci:\n");
scanf("%d",&valor);
if (valor==0){
    printf ("El valor %d se encuentra en la posicion 1\n", valor);
}
if (valor==1){
    printf ("El valor %d se encuentra en la posicion 2\n", valor);
}
if (valor>0){
printf ("El valor %d se encuentra en la posicion %d\n", valor, (fibonacci (valor)));
}
return 0;
}