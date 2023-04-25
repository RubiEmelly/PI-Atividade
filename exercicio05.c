#include <stdio.h>

int main() {
  int idade, maior_idade = 0, qtd_mulheres = 0;
  char sexo, olhos, cabelos;

  printf("Digite a idade do primeiro habitante: ");
  scanf("%d", &idade);

  while (idade != -1) {
    printf("Digite o sexo do habitante (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite a cor dos olhos do habitante (A-azul, V-verde, C-castanho): ");
    scanf(" %c", &olhos);

    printf("Digite a cor do cabelo do habitante (P-preto, C-castanho, L-louro): ");
    scanf(" %c", &cabelos);

    if (idade > maior_idade) {
      maior_idade = idade;
    }

    if (sexo == 'F' && idade >= 18 && idade <= 35 && olhos == 'V' && cabelos == 'L') {
      qtd_mulheres++;
    }

    printf("Digite a idade do próximo habitante (-1 para encerrar): ");
    scanf("%d", &idade);
  }

  printf("Maior idade do grupo: %d\n", maior_idade);
  printf("Quantidade de mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros: %d\n", qtd_mulheres);

  return 0;
}