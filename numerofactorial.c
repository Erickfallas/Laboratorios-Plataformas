#include <stdio.h>

int factorial ( int  n) {
	int i = 1;
	while (n > 1) {
		i = i*n;
		n =(n-1);
	}
	return i;
}

int main () {
	int numero;
	printf("Digite el número al que desea calcularle el factorial.\n");
	scanf("%d",&numero);
	printf("%d! = %d\n", numero , factorial(numero));
	return 0;
}
