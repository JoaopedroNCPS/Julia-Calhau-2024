#include <stdio.h>
int main(){
	
	int a, b, c, d, e;
	//defin��o de variaveis
	printf("Digite tres numeros inteiros:\n");
	//entrada
	scanf("%d %d %d", &a, &b, &d);
	
	//processamento	
	c = a + b;   
	e = c * d;
	printf("A Soma de a + b = %d", c);
	printf("\n");
	printf("A multiplica��o de c * d = %d", e);
	return 0;
	
}
