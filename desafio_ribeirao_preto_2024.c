#include <stdio.h>
#include <conio.h>
#include<stdbool.h>

int main(int argc, char const *argv[])
{
    printf("\n*************** QUESTAO 1 ***************\n");

    int indice = 13;
    int soma = 0;
    int contador = 0;

    while(contador < indice) {
        contador = contador + 1;
        soma = soma + contador;
    }
    printf("Resposta da primeira questao, soma eh igual a :> %d\n", soma);

    printf("\n*************** QUESTAO 2 ***************\n");
    
    int valorAtual = 0;
    int vetorFibonacci[2] = {0 , 1};
    int valorInformado = 0;
    bool statusBuscaFibonacci = false;
    char resposta[200] = " ";

    printf("Informe um numero para verificar se faz parte da sequencia de Fibonacci:> ");
    scanf("%d", &valorInformado);

    if(valorInformado == 0 || valorInformado == 1) {
        statusBuscaFibonacci = true;
    } else {
            for (int i = 2; i < __INT_MAX__; i++) {

            valorAtual = vetorFibonacci[0] + vetorFibonacci[1];
            vetorFibonacci[0] = vetorFibonacci[1];
            vetorFibonacci[1] = valorAtual;

            if (valorAtual == valorInformado)
                statusBuscaFibonacci = true;

            if (valorAtual >= valorInformado) break;
        }
    }
        
    (statusBuscaFibonacci == true) ? printf("Resposta: O numero %d faz parte da Sequencia Fabonacci\n", valorInformado ): printf("Resposta: O numero %d nao faz parte da Sequencia Fabonacci\n", valorInformado);

    printf("\n*************** QUESTAO 3 ***************\n");
    printf("Resolucao:\n");
    printf("a) 1, 3, 5, 7 , [?] | Resposta: [?] = 9\n");
    printf("b) 2, 4, 8, 16, 32, 64, [???] | Resposta: [???] = 128\n");
    printf("c) 0, 1, 4, 9, 16, 25, 36, [??] | Resposta: 49\n");
    printf("d) 4, 16, 36, 64, [???] | Resposta: 100\n");
    printf("e) 1, 1, 2, 3, 5, 8, [??] | Resposta: 13\n");
    printf("f) 2, 10, 12, 16, 17, 18, 19, [??] | Resposta: 18 \n\t:>>>> Obs: Resolucao da questao f esta detalhada no README.md\n");

    printf("\n*************** QUESTAO 4 ***************\n");
    printf("Resposta no READMD.md\n");

    printf("\n*************** QUESTAO 5 ***************\n");

    char palavra[150];
    int quantidadeCaracteres = 0;
    int quantidadeNecessariasParaInverterString = 0;
    int contadorRegressivo = 0;
    char utilTroca[1];

    printf("Informe uma palavra de ate 150 caracteres:> ");
    scanf("%s", &palavra);

    quantidadeCaracteres = strlen(palavra);

    contadorRegressivo = quantidadeCaracteres - 1;

    if(quantidadeCaracteres % 2 != 0) {
        quantidadeNecessariasParaInverterString = (quantidadeCaracteres - 1) / 2;
    } else {
        quantidadeNecessariasParaInverterString = (quantidadeCaracteres) / 2;
    }

    for (int i = 0; i < quantidadeNecessariasParaInverterString; i++) {
        utilTroca[0] = palavra[i];
        palavra[i] = palavra[contadorRegressivo];
        palavra[contadorRegressivo] = utilTroca[0];
        contadorRegressivo--;
    }

    printf("Resposta: Palavra de invertida:> %s\nObs:. eh o mesmo enderece de memoria\n", palavra);

    return 0;
}
