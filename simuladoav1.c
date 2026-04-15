#include <stdio.h>
int main(){
   int idade;
   float valor, taxa, valor_final;
   printf("insira sua idade: ");
   scanf ("%d", &idade);
   printf("insira o valor da compra:");
   scanf ("%f", &valor);
   if(idade >= 60){
    taxa = valor * 0.02;
   }
   else if (valor <= 100){
    taxa = valor * 0.05;
   }
   else if ( valor >= 500){
    taxa = valor * 0.15;
   }
   else{
    taxa = valor * 0.10;
   }

    valor_final = valor + taxa;
   printf("o valor final da compra com impostos aplicados é de %.2f\n", valor_final);
    return 0;
}