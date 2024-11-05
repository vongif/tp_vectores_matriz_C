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
float precio_min = 0.0;
int codigo_producto_min = 0;
float precio_prom = 0.0;
int precio_superior_promedio = 0;
int precio_sup_a_100 = 0; 
aux=0;
y=0;
i=0;


//Funciones----------------------------------------------------------------------------------------------------------------

void precio_maximo(float precios[], int n, int *indice);  

void precio_minimo(float precios[], int n, int *indice);  

void calcular_precio_promedio(float precios[], int n);

void precio_sup_promedio(float precios[], int n);

void precio_sup_100(float precios[], int n);

void precio_ascendente(float precios[], int n);




//--------------------FUNCION MAIN------------------------------------------------------------------------------------------


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

    
    int indice_min = 0;  
    precio_minimo(precios, 5, &indice_min);
    codigo_producto_min = productos_precio[indice_min][0];
    precio_min = precios[indice_min];
    
    printf("\nEl precio minimo es: %.2f, correspondiente al producto con código: %d\n", precio_min, codigo_producto_min);

    
    calcular_precio_promedio(precios, 5);
    printf("\nEl precio promedio es: %.2f\n", precio_prom);

    // Contar productos con precio superior al promedio
    precio_sup_promedio(precios, 5);
    printf("Cantidad de productos con precio superior al promedio: %d\n", precio_superior_promedio);


    precio_sup_100(precios, 5);
    printf("Cantidad de productos con precio superior a $100: %d\n", precio_sup_a_100);


    
    orden_ascendente(precios, 5);
	int i=0;
	for(i=0;i<5;i++){
		printf("El valor de la pos %d es %.2f\n",i,precios[i]);
	}


    return 0;
}


 //--------------------FUNCION PRECIO MAXIMO------------------------------------------------------------------------------------------

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

//--------------------FUNCION PRECIO MINIMO------------------------------------------------------------------------------------------

void precio_minimo(float precios[], int n, int *indice) 
{
    float min = precios[0];       
    *indice = 0;                  
    for (int i = 1; i < n; i++)
    {
        if (precios[i] < min)    //Solo se cambia el signo para que muestre el precio minimo
        {
            min = precios[i];
            *indice = i;
        }                         
    }
}


//--------------------FUNCION CALCULAR PROMEDIO-----------------------------------------------------------------------------

void calcular_precio_promedio(float precios[], int n){
    float suma = 0.0;
    for (int i = 0; i < n; i++)
    {
        suma += precios[i];
    }
    precio_prom = suma / n;
}


//--------------------FUNCION PRECIO SUPERIOR AL PROMEDIO--------------------------------------------------------------------

void precio_sup_promedio(float precios[], int n) 
{
    precio_superior_promedio = 0;
    for (int i = 0; i < n; i++)
    {
        if (precios[i] > precio_prom){
        precio_superior_promedio ++;
        }                     
    }
}


//--------------------FUNCION PRECIO SUPERIOR A 100---------------------------------------------------------------------------

void precio_sup_100(float precios[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        if (precios[i] > 100){
        precio_sup_a_100 ++;
        }                     
    }
}


//--------------------FUNCION ARTICULOS PRECIOS ASCENDENTES-------------------------------------------------------------------


void orden_ascendente(float precios[], int n){
    
    //Ejemplo de ordenamiento por burbujeo
	for(i=0;i<n-1;i++){ 
		for(y=0;y<n-i-1;y++){     
			if (precios[i]>precios[y+1]){ 
				aux=precios[y];
				precios[y]=precios[y+1];
				precios[y+1]=aux;
			}
        }    
    }
}

