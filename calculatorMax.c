#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca para funções matemáticas

int main() {
	
	char operador; //Char é tipo um Let do JS; Serve como uma variável do tipo string para guardar algo (Não é isso mas é como se fosse)
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
			if(num2 != 0) { // Se numero2 for diferente de 0 pode executar a ação de divisão de boa!
				result = num1 / num2; 
			}
			else { // Se não, imprima essa mensagem ai para o usuário
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
