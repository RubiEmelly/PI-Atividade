#include <stdio.h>
#include <math.h>
int main()
{
    int intervalo=0, numero=0, foraIntervalo=0;
    
while(1){
    printf("Digite um número: ");
    scanf("%d", &numero); 
    
    if(numero>=10 && numero<=20){
        intervalo++;
        printf("Número entre [10,20]: %d\n", intervalo);
    }
    else{
        foraIntervalo++;
        printf("Número fora do intervalo: %d\n", foraIntervalo);
    }
    
  }
}