/* La empresa www.ejercicios.com.ar, de venta de productos por Internet comercializa 5 productos,
los cuales se identifican por nros (códigos únicos) introducidos por el usuario.
Además, se debe realizar la carga de los precios de dichos artículos y una vez efectuada toda la carga averiguar e
imprimir:
a. Precio máximo y nro. de artículo al que corresponde. (1 punto)
b. Precio mínimo y nro. de artículo al que corresponde. (1 punto)
c. Cantidad de artículos con precio superior al precio promedio. (1 punto)
d. Cantidad de artículos con precio superior a $100. (1 punto)
e. Listar los artículos por precio en orden ascendente. (2 puntos)*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int productos_precio[5][2];
    float precios[5];
    int prod = 0;

    for (prod = 0; prod < 5; prod++)
    {
        productos_precio[prod][0] = 0;
        precios[prod] = 0.0;
    }

    for (prod = 0; prod < 5; prod++)
    {
        printf("Ingrese el codigo del producto y el precio: %d  ", prod + 1);
        scanf("%d %f", &productos_precio[prod][0], &precios[prod]);
    }

    printf("\nProductos y precios ingresados:\n");
    for (prod = 0; prod < 5; prod++)
    {
        printf("Producto: %d, Codigo: %d,  Precio: %.2f\n", prod + 1, productos_precio[prod][0], precios[prod]);
    }

    return 0;
}