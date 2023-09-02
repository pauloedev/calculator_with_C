#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca para fun��es matem�ticas

int main() {
	
	char operador; //Char � tipo um Let do JS; Serve como uma vari�vel do tipo string para guardar algo (N�o � isso mas � como se fosse)
	double num1, num2, result;
	
	printf("Escolha o operador que voce vai usar \n [+]=[-]=[*]=[/] \n");
	scanf("%c", &operador);
	
	printf("Digite um numero: \n");
	scanf("%lf", &num1);
	
	printf("Digite outro numero: \n");
	scanf("%lf", &num2);
	
	switch(operador) {
		
		case '+':
			result = num1 + num2;
			break;
			
		case '-':
			result = num1 - num2;
			break;
			
		case '*':
			result = num1 * num2;
			break;
			
		case '/':			
			if(num2 != 0) { // Se numero2 for diferente de 0 pode executar a a��o de divis�o de boa!
				result = num1 / num2; 
			}
			else { // Se n�o, imprima essa mensagem ai para o usu�rio
				printf("ERROR: NAO DA PRA DIVIDIR POR 0!!!");
				return 1;
			}
			break;

		default:
			printf("OPERADOR NAO IDENTIFICADO!!!.\n");
			break;
	}
	
	printf("SEU RESULTADO: %.1lf\n", result);
	
	system("pause");
	
	
}
