//==================================================================
// Decrição: Lê um número hexadecimal e imprime a sua forma decimal
//==================================================== By mr_1r3z3 =

// Libs
# include <stdio.h>

// Função Main
int main()
{
    int numero1; // Primeiro número de entrada
    int numero2; // Segundo número de entrada

// Lê o primeiro número
printf("Digite um valor para o primeiro número: ");
scanf("%x",&numero1);

// Lê o segundo número
printf("Digite um valor para o segundo número: ");
scanf("%x",&numero2);

// Realiza a conversão do primeiro número inserido
printf("Valor 1 - Hexadecimal: %X, Decimal: %d\n",numero1,numero1);

// Realiza a conversão do segundo número inserido
printf("Valor 2 - Hexadecimal: %X, Decimal: %d\n",numero2,numero2);

// Retorna o valor em decimal
return 0;
}