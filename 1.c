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


int productos_precio[5][2];
float precios[5];
int prod = 0;
int n = 0;
float precio_max = 0.0;
int codigo_producto_max = 0;

void precio_maximo(float precios[], int n, int *indice);

int main(int argc, char *argv[])
{
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


    int indice_max = 0;  
    precio_maximo(precios, 5, &indice_max);
    codigo_producto_max = productos_precio[indice_max][0];
    precio_max = precios[indice_max];
    //*indice al ser un puntero, tambien se actualiza en la funcion main, con el indice de precio maximo.

    printf("\nEl precio máximo es: %.2f, correspondiente al producto con código: %d\n", precio_max, codigo_producto_max);

    return 0;


    return 0;
}

void precio_maximo(float precios[], int n, int *indice)
{
    float max = precios[0];       //se inicializa el primer elemento, suponiendo que el primero es el maximo
    *indice = 0;                  //tambien se inicializa, suponiendo que el primer producto tiene el precio max en la posicion 0
    for (int i = 1; i < n; i++)
    {
        if (precios[i] > max)
        {
            max = precios[i];
            *indice = i;
        }                         //este bucle recorre el vector y va iterando. Si precios[i] es > que max, max se va
                                  //actualizando para que sea = a precio[i]. (el nuevo maximo)
                                  //y *indice se actualiza a i y almacena en donde se encuentra este nuevo precio maximo.
    }
}
