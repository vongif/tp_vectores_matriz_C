/*Escribir un programa que permita ingresar una cadena de hasta
diez caracteres que representa un número en numeración romana, y por medio
de una función romanoadecimal () imprima el número y su equivalente en
numeración arábiga*/


#include <stdio.h>
#include <stdlib.h>

int romanoadecimal(char numeros_rom[i]);



int main(int argc, char *argv[]){

    char numeros_rom[2][11];
    char i;   
       

    for (i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 11; j++) {
            numeros_rom[i][j] = '\0';  
        }    
    }
    for (i = 0; i < 10; i++) 
    {
        printf("Ingrese diez numeros romanos %d: ", i+1);
        scanf("%s", numeros_rom[i]);
    }

    printf("Los numeros romanos ingresados son:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Los numeros ingresados son: %s \n", numeros_rom[i]);
    }         

    printf("Los numeros romanos ingresados y sus equivalentes arábigos son:\n");
    for (i = 0; i < 10; i++) {
        int resultado = romanoadecimal(numeros_rom[i]);
        printf("%s -> %d\n", numeros_rom[i], resultado);
    }

    return 0;
} 



int romanoadecimal(char numeros_rom[]){
    int total = 0;
    int i = 0;
    
    
    while (numeros_rom[i] != '\0')
    {
        if (numeros_rom[i] == I)
        {
            int total = 1;
        }
        if (numeros_rom[i] == II)
        {
            int total = 2;
        }
        if (numeros_rom[i] == III)
        {
            int total = 3;
        }
        if (numeros_rom[i] == IV)
        {
            int total = 4;
        }
        if (numeros_rom[i] == V)
        {
            int total = 5;
        }
        if (numeros_rom[i] == X)
        {
            int total = 10;
        }
        if (numeros_rom[i] == L)
        {
            int total = 50;
        }
        if (numeros_rom[i] == C)
        {
            int total = 100;
        }

    }
    return total;
    

}
