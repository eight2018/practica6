#include <stdio.h>
#include <stdlib.h>


//#include "funciones.h"
//float sumaEnteros(float primerNumero, float segundoNumero, float* resultado);
//float restaEnteros(float primerNumero, float segundoNumero, float* resultado);
//float multiplicaEnteros(float primerNumero, float segundoNumero, float* resultado);
int divideEnteros(int primerNumero, int segundoNumero, float* resultado);

int main()
{
    int primerNumero=0;
    int segundoNumero=0;
    char seguir='s';
    int opcion=0;
    float resultadoMain;
    int retorno;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=%d)\n",primerNumero);
        printf("2- Ingresar 2do operando (B=%d)\n",segundoNumero);
        printf("3- Calcular la suma (A+B)");
        printf("\n4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                {
                    printf("Ingresar 1er operando (A=x)");
                    fflush(stdin);
                    scanf("%d",&primerNumero);


                }
                break;
            case 2:
                {
                    printf("Ingresar 2do operando (B=x)");
                    fflush(stdin);
                    scanf("%d",&segundoNumero);
                                   }
            break;

            case 5:
                retorno=divideEnteros(primerNumero,segundoNumero,&resultadoMain);
            if(retorno==0)
            {
                printf("\nEl resultado es: %.2f",resultadoMain);
            }
            else
            {
                printf("\nERROR");
            }

                break;

            case 7:

                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }

    return 0;

}

int divideEnteros(int primerNumero, int segundoNumero, float *resultado)
{
    float resultadoCalculo;
    int retorno = -1;
    if(segundoNumero!=0)
    {
        resultadoCalculo = (float)primerNumero / (float)segundoNumero;
        *resultado = resultadoCalculo;
        retorno = 0;
    }
    return retorno;
}



