#include <stdio.h>
int main(){

    float numero1, numero2, resultado; 
    int operacao;

    printf("Digite o Primeiro Numero :");
    scanf("%f", &numero1);

    printf("Digite o Segundo Numero :");
    scanf("%f", &numero2);

    printf("Escolha a Operacao a Ser Realizada:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - divisaon\n");
    
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
        resultado = numero1 + numero2;
        printf("Resultado: %.2f\n", resultado);
break;

case 2:
resultado = numero1 - numero2;
printf("Resultado: %.2f\n", resultado);
break;

case 3: 
resultado = numero1 * numero2;
printf("Resultado: %.2f\n", resultado);
break;

case 4:
if (numero2 != 0) {
    resultado = numero1 / numero2;
    printf("Resultado: %.2f\n", resultado);
}
else {
    printf("Erro: Divisao por zero nao e permitido\n");
}
break;
default:
    printf("Operacao invalida\n");
    break;

    

}
 return 0;
 
}



    
   
    
    


