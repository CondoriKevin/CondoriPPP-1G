#include <stdio.h>
#include <stdlib.h>


int contarCaracteres( char text[], char let);

int main()
{
    char texto[50];
    char letra;
    int cantidadLetra;

    printf("Escriba una frase!!! : \n");
    fflush(stdin);
    gets(texto);

    printf("Escriba una letra!!! : \n");
    fflush(stdin);
    scanf("%c", &letra);


    cantidadLetra = contarCaracteres( texto, letra);

    printf("Hay %d letras %c en la frase", cantidadLetra, letra);

    return 0;
}
int contarCaracteres( char text[], char let){
	int contador = 0;
	for(int i = 0; text[i] != '\0'; i++){
		if(text[i] == let){
			contador++;
		}
	}
	return contador;
}
