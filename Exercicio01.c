#include <stdio.h>
#include <math.h>
int main()
{
    float nota1, nota2, nota3, mediaAritmetica; 
    int codigoAluno;
while(1){
    printf("Digite o código do Aluno: ");
    scanf("%d", &codigoAluno); 
    
    if(codigoAluno == 0){
        printf("Código Inválido!");
        break;
    }
    else{
        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        printf("A Média Aritmética das notas eh: %g\n", (nota1+nota2+nota3)/3);
    }
    
  }
}