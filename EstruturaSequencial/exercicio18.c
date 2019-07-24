#include <stdio.h>

/*Faça um programa que peça o tamanho de um arquivo para download (em MB) e a
velocidade de um link de Internet (em Mbps), calcule e informe o tempo
aproximado de download do arquivo usando este link (em minutos).*/

int main() {
/*Variavéis*/
    float vel, down, tempo, arq, link;

    printf("*******************************************************\n");
    printf("***         SISTEMA DE CALCULO DE DOWNLOAD          ***\n");
    printf("*******************************************************\n\n");

/*Dados de Entrada*/
    printf("Entre com o tamanho do arquivo em MB: ");
    scanf("%f", &arq);
    printf("Entre com a velocidade do link de Internet em Mbps: ");
    scanf("%f", &link);

/*Calculos*/
    vel = (link/8);
    down = (arq/vel);     /*Valor do resultado em segundos*/
    tempo = (down/60);    /*Valor do resultado em minutos*/

/*Dados de Saída*/
    printf("O tempo estimado do download é %.2f minutos\n", tempo);

  return 0;
}
