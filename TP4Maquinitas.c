/* 
Programacion 1 - Ingenieria en Computacion -
Trabajo Practico 4 - Juego de Maquinitas de Casino-
Alumno: GONZALO BRAVO - 2023 -
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // contiene la funcion getche
#include <time.h> // contiene la funcion para generar numeros aleatorios
#define N 5 // define la cantidad de N elementos del vector
char menu(){
    printf("*****MENU PRINCIPAL*****\n"); // funcion que imprime el menu principal
    printf("------------------------\n");
    printf ("Seleccione una opcion:\n");
    printf ("J - JUGAR\n");
    printf ("P - PUNTOS ACUMULADOS\n");
    printf ("S - SALIR\n");
    printf("------------------------\n");
    return getche();  
}
void clrscr(){
    system("cls");  // funcion para limpiar la pantalla cada vez que se apuesta
}

void apuesta(int digitos[]){ // funcion que genera el vector con 5 numeros aleatorios
    int i;
    srand(time(NULL)); // inicializa el generador de números aleatorios con srand(time(NULL)
    for (i=0 ; i<N ; i++){
        digitos[i]=rand()%10; // genera 5 números aleatorios de 0 a 9
        printf ("|%d|", digitos[i]);
    }    
}
int puntos(int digitos[]){ // funcion para comparar y encontrar valores iguales dentro del vector
    int i, j, contiguales=1;
    for (i=0; i<N; i++){
        for (j=i+1; j<N; j++){ // recorre el arreglo de manera secuencial
            if (digitos[i]==digitos[j]){ // compara los elementos del arreglo para saber hay elementos iguales
                contiguales=contiguales+1; // si hay elementos iguales se suma +1 al contador
            }  
        }
        if (contiguales!=1){
            i=N;
        }     
    }
        if (contiguales==5){
            return 5; // todos los valores iguales
            } 
        else 
            if (contiguales==4){
            return 4; // cuatro valores iguales
            } 
        else 
            if (contiguales==3){
            return 3; // tres valores iguales
            } 
        else 
            if (contiguales==2){
            return 2; // dos valores iguales
            }
        else{
            return 0; // todos los valores distintos  
        }
}

int main(){
    int resultado, suma=0, digitos[N]={0}; // inicializa el arreglo con ceros
    char opcion;
    do{
        opcion = menu(); // invoca a la funcion menu
        switch(opcion){
        case 'J': // opcion jugar
            clrscr();
            printf("Presione la tecla ENTER para realizar su apuesta\n");
            while(getche()==13){ 
                printf("\a"); // hace que suene el beep de la Notebook/PC cada vez que se apuesta
                clrscr();
                printf("ENTER = APOSTAR\n");
                printf("M = Menu Principal\n");
                printf("\n");
                apuesta(digitos); // invoca a la funcion apuesta
                printf("\n");
                resultado=puntos(digitos); // invoca a la funcion puntos
                if (resultado==5){
                    printf("\nGANASTE! Tus puntos acumulados son %d", suma);
                } 
                else 
                    if (resultado==4){
                        printf("\n80 puntos!");
                        suma=suma+80; // suma +80 a los puntos acumulados
                }  
                else 
                    if (resultado==3){
                        printf("\n40 puntos!");
                        suma=suma+40; // suma +40 a los puntos acumulados
                } 
                else 
                    if (resultado==2){
                        printf("\n20 puntos!");
                        suma=suma+20; // suma +20 a los puntos acumulados
                    }
                else{
                    printf("\n0 puntos!");
                    suma=suma+0; // suma 0 a los puntos acumulados
                }
            }
            clrscr();
            break;
        case 'P': // opcion que muestra en pantalla los puntos acumulados
            clrscr();
            printf("Sus puntos acumulados son: %d\n", suma); 
            printf("\n");
            printf("M = Menu Principal\n");
            if (getche()=='M'){
                clrscr();
            }
            break;
        case 'S': // opcion para salir del juego
            clrscr();
            printf("*****Gracias, esperamos que haya disfrutado del juego!*****\n");
            break;
        default: // si la opcion ingresada es incorrecta
            clrscr();
            printf("Opcion invalida, ingrese nuevamente:\n");
            printf ("J - JUGAR\n");
            printf ("P - PUNTOS ACUMULADOS\n");
            printf ("S - SALIR\n");
            break;
        }
    } while(opcion!='S'); // mintras la opcion sea distinta que "S" (salir), se puede ingresar a las demas opciones o volver al menu principal
    return 0;
}