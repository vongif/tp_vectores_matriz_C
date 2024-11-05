/*Genere un enunciado y la codificación de un ejercicio donde utilice
al menos una estructura, una función y un vector.*/


#include <stdio.h>
#include <stdlib.h>


float calculo_promedio(int num_empleados, float salarios[]);



int main(int argc, char *argv[]){


int num_empleados = 0;
int i = 0;

printf("Ingrese la cantidad de empleados: ");
scanf("%d", &num_empleados);

char nombres[num_empleados][10]; 
int edades[num_empleados];
float salarios[num_empleados];

for (i = 0; i < num_empleados; i++)
{
    printf("Ingrese el nombre del empleado: %d\n", i + 1);
    scanf("%s", &nombres[i]);
    printf("Ingrese la edad del empleado: %s\n", nombres[i]);
    scanf("%d", &edades[i]);
    printf("Ingrese el salario del empleado: %s\n", nombres[i]);
    scanf("%f", &salarios[i]);

}

float calculo_promedio(int num_empleados, float salarios[]);


printf("\n--------------Info Empleados-----------------\n");
for (int i = 0; i < num_empleados; i++) {
    printf("Empleado: %s, Edad: %d, Salario: %.2f\n", nombres[i], edades[i], salarios[i]);
}
    printf("\nSalario promedio de empleados: %.2f\n", calculo_promedio(num_empleados, salarios));

return 0;

}


float calculo_promedio(int num_empleados, float salarios[]){
    float sum_salarios = 0.0;
    for (int i = 0; i < num_empleados; i++) {
        sum_salarios += salarios[i]; 
    }

    return sum_salarios / num_empleados; 
}