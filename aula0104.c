#include <stdio.h>

int main(){
    int valor;
    int idade;
    printf("entre com o valor da compra: ");
    scanf("%d", &valor);
    printf("entre com a idade: ");
    scanf("%d", &idade);
    if(idade>=60){
        int taxa = valor * 0.02;
    }
    else if(valor<=100){
        taxa = valor * 0.05;}
    else if (valor > 100 && valor < 500){
        taxa = valor/10;
    }
    else{
        taxa = valor * 0.15;
    }
    int valor_final = taxa + valor;
    printf("o valor da compra é %d", &valor_final)

    return 0
}