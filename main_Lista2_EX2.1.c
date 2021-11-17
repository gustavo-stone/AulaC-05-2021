#include <stdio.h>

int main() {
	
	float salario_base, salario_total, imposto;
	
	printf("Informe o salario base:");
	scanf("%f", &salario_base);
	
	imposto = (0.02 * salario_base) ;
	salario_total = salario_base - imposto;
	
	printf("O salario a receber eh = %f\n", salario_total);
	
	system("pause");
	return 0;
}
