#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int productos_precio[5][2];
float precios[5];
int prod = 0;


    for (prod = 0; prod < 5; prod++){
        productos_precio[prod][0]=0;
		precios[prod] = 0.0;
    }

    for (prod=0; prod < 5; prod++)
    {
        printf("Ingrese el codigo del producto y el precio: %d  ", prod + 1);
        scanf("%d %f", &productos_precio[prod][0], &precios[prod]);
    }

	printf("\nProductos y precios ingresados:\n");
    for (prod  = 0; prod < 5; prod++)
    {
        printf("Producto: %d, Codigo: %d,  Precio: %.2f\n", prod + 1, productos_precio[prod][0], precios[prod]);
    }

    return 0;

}
