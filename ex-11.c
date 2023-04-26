#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50 
#define MAX_TELEFONE 20 
#define MAX_CONTATOS 100

char nomes[MAX_CONTATOS][MAX_NOME]; 
char telefones[MAX_CONTATOS][MAX_TELEFONE]; 
int num_contatos = 0; 


void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrar() {
    if (num_contatos == MAX_CONTATOS) {
        printf("Agenda cheia. Não é possível cadastrar mais contatos.\n");
        return;
    }
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
    printf("Nome: ");
    fgets(nome, MAX_NOME, stdin);
    nome[strcspn(nome, "\n")] = '\0'; 
    printf("Telefone: ");
    fgets(telefone, MAX_TELEFONE, stdin); 
    telefone[strcspn(telefone, "\n")] = '\0'; 
    strcpy(nomes[num_contatos], nome);
    strcpy(telefones[num_contatos], telefone);
    num_contatos++;
    printf("Contato cadastrado com sucesso!\n");
}

void listar() {
    if (num_contatos == 0) {
        printf("Agenda vazia.\n");
        return;
    }
    printf("Lista de contatos:\n");
    for (int i = 0; i < num_contatos; i++) {
        printf("%s - %s\n", nomes[i], telefones[i]);
    }
}

void ordenar() {
    if (num_contatos == 0) {
        printf("Agenda vazia.\n");
        return;
    }
    for (int i = 0; i < num_contatos-1; i++) {
        for (int j = i+1; j < num_contatos; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                char temp[MAX_NOME];
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
                strcpy(temp, telefones[i]);
                strcpy(telefones[i], telefones[j]);
                strcpy(telefones[j], temp);
            }
        }
    }
    printf("Contatos ordenados por nome.\n");
}

void consultar() {
    if (num_contatos == 0) {
        printf("Agenda vazia.\n");
        return;
    }
    char nome[MAX_NOME];
    printf("Digite o nome do contato: ");
    limpar_buffer();
    fgets(nome, MAX_NOME, stdin);
    nome[strcspn(nome, "\n")] = '\0';
int encontrado = 0;
for (int i = 0; i < num_contatos; i++) {
if (strcmp(nomes[i], nome) == 0) {
printf("Contato encontrado: %s - %s\n", nomes[i], telefones[i]);
encontrado = 1;
}
}
if (!encontrado) {
printf("Contato não encontrado.\n");
}
}

int main() {
int opcao;
do {
printf("Escolha uma opção:\n");
printf("1 - Cadastrar\n");
printf("2 - Listar\n");
printf("3 - Ordenar\n");
printf("4 - Consultar\n");
printf("5 - Sair\n");
scanf("%d", &opcao);
limpar_buffer();
switch (opcao) {
case 1:
cadastrar();
break;
case 2:
listar();
break;
case 3:
ordenar();
break;
case 4:
consultar();
break;
case 5:
printf("Saindo...\n");
break;
default:
printf("Opção inválida.\n");
break;
}
} while (opcao != 5);
return 0;
}