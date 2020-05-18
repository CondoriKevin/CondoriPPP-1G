#include <stdio.h>
#include <stdlib.h>
#define CANT 4

typedef struct
{
    int id;
    float price;
    char procesador[21];
    char marca[21];

} eNotebook;

void sort(eNotebook notebook[], int cant);
int showData(eNotebook eNotebook[], int cant);

int main()
{

    eNotebook notebook[CANT] =
    {

        {100, 1609, "AMD",           "LG"},
        {101, 2701, "INTEL",         "PANA"},
        {102, 3300, "AMD",         "SONY"},
        {103, 1160, "XL",          "TCL"},
    };

    sort( notebook, CANT);

    return 0;
}

void sort(eNotebook notebook[],int cant)
{
    eNotebook aux;
    for(int i=0; i<cant-1; i++)
    {
        for(int j=i+1; j<cant; j++)
        {
            if(strcmp(notebook[i].marca,notebook[j].marca)>0)
            {
                aux = notebook[i];
                notebook[i] = notebook[j];
                notebook[j] = aux;
            }

            else if(strcmp(notebook[i].marca, notebook[j].marca) == 0 && notebook[i].price>notebook[j].price)
            {
                aux = notebook[i];
                notebook[i] = notebook[j];
                notebook[j] = aux;

            }

        }
    }
    showData(notebook, cant);


}

int showData(eNotebook notebook[], int cant)
{
    printf(" ID\t    PRICE\t    PROCESADOR\t    MARCA\n");

    for(int i=0; i<cant; i++)

    {

        printf(" %d\t    %.2f\t          %s\t    %s\n",notebook[i].id,notebook[i].price,notebook[i].procesador,notebook[i].marca);

    }

    return 0;
}
