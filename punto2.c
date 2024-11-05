/*Escribir un programa que permita ingresar una cadena de hasta
diez caracteres que representa un número en numeración romana, y por medio
de una función romanoadecimal () imprima el número y su equivalente en
numeración arábiga*/


#include <stdio.h>
#include <stdlib.h>

char romanoadecimal(char numeros_rom[]);



int main(int argc, char *argv[]){

    char numeros_rom[10][11];
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


    printf("\nLos números romanos ingresados y sus equivalentes arábigos son:\n");
    for (int i = 0; i < 10; i++) {
        int resultado = romanoadecimal(numeros_rom[i]);
        if (resultado != -1) { // Si el resultado es válido
            printf("%s -> %d\n", numeros_rom[i], resultado);
        } else {
            printf("%s -> Número romano no válido\n", numeros_rom[i]);
        }
    }
    

    return 0;
} 



char romanoadecimal(char numeros_rom[]){
    int total = 0;
    int i = 0;
    
    while (numeros_rom[i]){

        switch (numeros_rom[i]) {
            case 'I': total += 1; 
            break;
            case 'V': total += 5; 
            break;
            case 'X': total += 10; 
            break;
            case 'L': total += 50; 
            break;
            case 'C': total += 100; 
            break;
            default:
                return -1;  
    }
    i++;    
    }
    

    return total;
    

}
