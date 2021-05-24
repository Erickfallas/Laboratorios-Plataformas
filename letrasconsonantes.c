#include <stdio.h>
#include <ctype.h>

char vocales[] = "aAeEiIoOuU";

int clasificarletra (char letra) {
	int i;
	int esletra = isalpha(letra);
	if (esletra){
		for (i=0;vocales[i];i++){
			if (letra == vocales[i]){
				return 1;
			}	
		}
		return 0;
	}
	else
		return 2;
	
}

int main (int argc, char *argv[]){
	char solicitudletra;
	int resultado;
	printf("Digite la letra que desea clasificar.\n");
	scanf("%c",&solicitudletra);
	resultado = (clasificarletra(solicitudletra));
	if (resultado == 2)
		printf("No ha digitado una letra.\n");
	if (resultado == 1)
		printf("La letra %c es una vocal\n",solicitudletra);
	if (resultado == 0)
		printf("La letra %c es una consonante\n",solicitudletra);
	return 0;
}
