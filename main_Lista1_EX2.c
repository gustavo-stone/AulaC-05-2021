#include <stdio.h>

int main() {
	
	float real, dolar;
	
	printf("Informe o valor em reais:");
	scanf("%f", &real);
	
	dolar = real * 0.19;  // cotação do dia 07/05/2021
	
	printf("O valor convertido para dolar eh = %f\n", dolar);
	 
	system("pause");
	return 0;
}
