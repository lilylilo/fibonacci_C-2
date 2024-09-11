#include <stdio.h>

// Função para verificar se um número faz parte da sequência de Fibonacci
int pertenceFibonacci(int numero) {
    int a = 0, b = 1, temp;

    // Itera gerando a sequência de Fibonacci
    while (a <= numero) {
        if (a == numero) {
            return 1; // O número pertence à sequência
        }
        temp = a + b; // Próximo número da sequência
        a = b;
        b = temp;
    }

    return 0; // O número não pertence à sequência
}

int main() {
    int numero;

    // Solicita que o usuário informe um número
    printf("Informe um número: ");
    scanf("%d", &numero);

    // Verifica se o número informado pertence à sequência de Fibonacci
    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
