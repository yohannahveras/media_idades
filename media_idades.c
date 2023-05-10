#include <stdio.h>
#include <math.h>

  int main ()
  {

    int idade, soma, quantidade;
    double media;
    
    printf("Digite as idades:\n");
    scanf("%d", &idade);
    
    soma = 0;
    quantidade = 0;
    
    while (idade >= 0) {
        soma = soma + idade;
        quantidade = quantidade + 1;
        scanf("%d", &idade);
    }
    
    if (quantidade == 0) {
       printf("IMPOSSIVEL CALCULAR\n"); 
    }
    else {
        media = (double) soma / quantidade;
        printf("MEDIA = %.2lf", media);
        }
    
    return 0;
  }
