/*
 * Este programa calcula los primeros 100 numeros triangulares
 * */
#include <stdio.h>

int triangular (int n) {
	int i;
	i = (n+1);
	int numtriangular;
	numtriangular = (n*i/2);
	return numtriangular;
}

int main (){
	int num_natural;
	num_natural = 1;
	printf("Los primeros 100 números triangulares son: \n");
	while (num_natural < 101){
		printf(" - %d",triangular(num_natural));
		num_natural++;
	}
	printf("\n");
	return 0;
}
