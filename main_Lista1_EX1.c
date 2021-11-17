#include <stdio.h>

int main() {
	
	int K;
	float M;
	
	printf("Digite a velocidade:");
	scanf("%d", &K);
	
	M = K / 3.6;
	
	printf("A velocidade convertida por metros por segundo eh = %f\n", M);
	
	system("pause");
	return 0;
}
