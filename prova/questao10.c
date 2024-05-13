#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont, cont_max;                                  //cont para contar o numero de segmentos crescentes. cont_max para registrar o cont em uma variavel de maximos.
    int numero, numero_max, repetidor;
    char op;
    
    cont = 0;

    printf("Informe o primeiro numero da sequencia: ");
    scanf("%d", &numero);

    while (repetidor == 0){
        
        if(numero > numero_max){
            numero_max = numero;
            cont++;                                         //contador acrescenta +1
        }else{
            if(cont == 0){                                  //lembrando que toda variavel tipo int inicializasse em 0 quado nao e atribuido valor, se cont for 0 e ele adicionar 0, 0 sera considerado a posicao do segmento e contabilizado
                numero_max = numero;
                cont++;
            }
            if (numero < numero_max && cont_max <= numero_max){                      //com numero menor que o maximo crescente, o contador encerra e adiciona o cont somado ao cont_max
                cont_max = cont;                                                     //na mesma condicional ele verifica se esse cont somado é maior que o cont já registrado(cont_max)
            }                                                                        //Isso foi feito pois mesmo com o numero crescente o usuario podera criar outro seguimento(afinal, o codigo so encerra com o NAO dele),
        }                                                                            //Assim, resumindo, o numero max que vai sinalizar o segmento crescente de comprimento maximo
        
        printf("Deseja continuar(S - SIM | N - NAO): ");
        scanf(" %c", &op);

        if(op == 'N'){
            break;
        }

        printf("Digite o proximo numero: ");
        scanf("%d", &numero);

    }

    if(cont_max == 1){
        printf("Com apenas um ponto, nao possui seguimento crescente de comprimento maximo.");
    }

    printf("Comprimento do segmento crescente de comprimento máximo: %d", cont_max-1);
    
}