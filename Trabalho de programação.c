#include <stdio.h>

int main ()
{
	float num1, num2, soma, sub, mult, div;
	
	printf("Bem vindo a nossa primeira calculadora\n");
	printf("\nDigite o primeiro numero: " );
	scanf("%f", &num1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%f", &num2);
	
	//soma 
	soma = num1 + num2;
	
	//subtração
	sub = num1 - num2;
	
	//multiplicação
	mult = num1 * num2;
	
	//divisão
	div = num1 / num2;
	
	printf("\nA soma e: %.2f\n", soma);
	printf("\nA subtracao e: %.2f\n", sub);
	printf("\nO produto e: %.2f\n", mult);
	printf("\nA divisao e: %.2f\n", div);
}

