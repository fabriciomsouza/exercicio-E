#include <stdio.h>

float calcularPrestacao(float valor, float taxa, int mesesAtraso) {
    float prestacao;
    prestacao = valor * (1 + (taxa / 100) * mesesAtraso);
    return prestacao;
}

int main() {
    float valor, taxa;
    int mesesAtraso;

    printf("Digite o valor da prestacao: ");
    scanf("%f", &valor);

    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);

    printf("Digite o numero de meses de atraso: ");
    scanf("%d", &mesesAtraso);

    float prestacaoAtraso = calcularPrestacao(valor, taxa, mesesAtraso);

    printf("O valor da prestacao em atraso e: %.2f\n", prestacaoAtraso);

    return 0;
}
