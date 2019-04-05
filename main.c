#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "funciones.h"



int main()
{
    int variableA=0;
    int seCargoA=0;
    int variableB=0;
    int seCargoB=0;
    int resultadoSuma=0;
    int resultadoResta=0;
    int resultadoMultiplicacion=0;
    float resultadoDivision=0;
    int resultadoFactorialA=0;
    int resultadoFactorialB=0;
    int seEjecutoEl3=0;

    char leerBasura;
    char elegirOpcion;

    void imprimirMenu()
{
    printf("\n#####################################");
    printf("\n# 1. Ingresar 1er operando (A = %d)  #",variableA);
    printf("\n# 2. Ingresar 2do operando (B = %d)  #",variableB);
    printf("\n# 3. Calcular todas las operaciones #");
    printf("\n# 4. Informar resultados            #");
    printf("\n# 5. Salir                          #");
    printf("\n#####################################\n\n");
}

    do
        {
            imprimirMenu();
            scanf( "%c", &elegirOpcion);
            switch (elegirOpcion)
            {
                case '1':   variableA=cargarNumero();
                            seCargoA=1;
                            break;

                case '2':   variableB=cargarNumero();
                            seCargoB=1;
                            break;

                case '3':   if ((seCargoA==1)&&(seCargoB==1))
                            {
                                resultadoSuma=sumar(variableA,variableB);
                                resultadoResta=restar(variableA,variableB);
                                resultadoMultiplicacion=multiplicar(variableA,variableB);
                                resultadoDivision=dividir(variableA,variableB);
                                resultadoFactorialA=factorial(variableA);
                                resultadoFactorialB=factorial(variableB);
                                seEjecutoEl3=1;
                            }
                            else
                                printf("No se ha cargado aún algún valor de A o B.\nCargue lo faltante y luego ejecute nuevamente.");
                            break;
                case '4':
                            if (seEjecutoEl3==1)
                            {
                                printf("\nEl valor de A es: %d",variableA);
                                printf("\nEl valor de B es: %d",variableB);
                                printf("\nEl resultado de A+B es: %d",resultadoSuma);
                                printf("\nEl resultado de A-B es: %d",resultadoResta);
                                printf("\nEl resultado de A*B es: %d",resultadoMultiplicacion);

                                if (variableB==0)
                                    {printf("\nNo se puede dividir por 0");}
                                else
                                    {printf("\nEl resultado de A/B es: %.2f",resultadoDivision);}

                                printf("\nEl factorial de A es: %d y El factorial de B es: %d \n",resultadoFactorialA,resultadoFactorialB);
                                printf("\n###PRESIONE ENTER PARA CONTINUAR###\n\n");
                                scanf("%c",&leerBasura);
                            }
                            else
                            {
                                printf("\nNo se puede mostrar ningún resultado\n");
                                printf("No se hicieron los calculos del ITEM 3 aún\n");
                            }
                            break;

                case '5':
                            exit(EXIT_SUCCESS);
            }

            scanf( "%c", &elegirOpcion);

            clearScreen();


        } while ( elegirOpcion < '1' || elegirOpcion > '5' );







    return 0;
}


