void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

int cargarNumero ()
{
    int numero=0;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    return numero;
}

int sumar(int a, int b)
{
    int resultado=0;
    resultado=(a+b);
    return resultado;
}

int restar(int a, int b)
{
    int resultado=0;
    resultado=(a-b);
    return resultado;
}

int multiplicar(int a, int b)
{
    int resultado=0;
    resultado=(a*b);
    return resultado;
}

float dividir(float a, float b)
{
    float resultado=0;
    if (b!=0)
        resultado=a/b;
    return resultado;
}

int factorial (int a)
{
    int resultado=1;
    int i=2;
    for (i=2; i<=a; i++)
    {
        resultado=resultado*i;
    }
    return resultado;
}
