#include <stdio.h>

int main() {

    // Autor: Joao

    int idade;

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    if (idade >= 18) {
	printf("Maior de idade!\n");
	printf("Pode entrar na balada.\n");
    } else {
        printf("Desculpe, voce ainda e menor de idade!\n");
        printf("Nao pode entrar na balada\n");
    }

    return 0;
}
