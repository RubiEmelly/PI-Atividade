#include <stdio.h>

int main() {
  int i, menor_idade = 999, maior_idade = 0, qtd_mulheres_salario_ate_100 = 0;
  float salario, soma_salarios = 0, media_salarios;
  char sexo;
  int idade;

  for (i = 1; i <= 15; i++) {
    printf("Digite a idade da %dª pessoa: ", i);
    scanf("%d", &idade);

    if (idade < menor_idade) {
      menor_idade = idade;
    }

    if (idade > maior_idade) {
      maior_idade = idade;
    }

    printf("Digite o sexo da %dª pessoa (M/F): ", i);
    scanf(" %c", &sexo);

    printf("Digite o salário da %dª pessoa: ");
    scanf("%f", &salario);

    soma_salarios += salario;

    if (sexo == 'F' && salario <= 100) {
      qtd_mulheres_salario_ate_100++;
    }
  }

  media_salarios = soma_salarios / 15;

  printf("Média de salário do grupo: %.2f\n", media_salarios);
  printf("Menor idade do grupo: %d\n", menor_idade);
  printf("Maior idade do grupo: %d\n", maior_idade);
  printf("Quantidade de mulheres com salário até R$100,00: %d\n", qtd_mulheres_salario_ate_100);

  return 0;
}