#include <stdio.h>
#include <stdio.h>


float aplicarDescuento(float precioF);

int main(){

float precio;
//float resultado;

printf("Ingrese el precio del producto : \n");
scanf("%f", &precio);

//resultado = aplicarDescuento(precio);

printf("El precio total con es descuento es de :  %f", aplicarDescuento(precio));

return 0;
}

float aplicarDescuento(float precioF){

int totalDescuento;

totalDescuento = precioF - ( precioF * 0.05 );


    return totalDescuento;
}
