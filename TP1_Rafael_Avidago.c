#include<stdio.h>
void main () {
    //~~CALCULADORA DE OP ESPECIAIS POR RAFAEL CARVALHO AVIDAGO GERALDO~~//
    //variaveis
    int op, t1 = 0, mdc1 = 0, mdc2 = 0, mdca = 0, mdcb = 0, resto = 0, log = 0, log2 = 0;
    char vc;
    while(op != 0){
    //MENU
    printf("\n\t~x~ BEM VINDO A CALCULADORA DE OPERACOES ESPECIAIS\n\t~x~ SELECIONE UMA OPERACAO PARA COMERCAR: \n\t(1) TABUADA\n\t(2) MDC\n\t(3) LOG NA BASE 10\n\t(4) VERIFICAR CARACTERE\n\t(0) SAIR");
    printf("\n\t~x~ OPERACAO DESEJADA: ");
    scanf("%d", &op);
    switch(op){
    case 1:
    //tabuada
        printf("~x~ VOCE ESCOLHEU ~TABUADA~ \n");
        printf("~x~ ESCOLHA UM NUMERO INTEIRO PARA DAR A TABUADA: \n");
        scanf("%d",&t1);
        printf("~x~ A TABUADA DE %d EH: \n", t1);
        printf("\n--------------\n| %d x 1 = %d  |\n| %d x 2 = %d  |\n| %d x 3 = %d  |\n| %d x 4 = %d |\n| %d x 5 = %d |\n| %d x 6 = %d |\n| %d x 7 = %d |\n| %d x 8 = %i |\n| %d x 9 = %d |\n| %d x 10 = %d|\n--------------\n", t1, t1*1, t1, t1*2, t1, t1*3, t1, t1*4, t1, t1*5, t1, t1*6, t1, t1*7, t1, t1*8, t1, t1*9, t1, t1*10);
        break;
    case 2:
    //calculadora de mdc
        printf("\n\t~x~ VOCE ESCOLHEU ~MDC~\n");
        printf("\n\t~x~ DIGITE DOIS NUMEROS INTEIROS:  \n");
        scanf("%d %d", &mdc1, &mdc2);
        mdca = mdc1;
        mdcb = mdc2;
        do{
        resto = mdca % mdcb;
        mdca = mdcb;
        mdcb = resto;

        }while(resto != 0);
    printf("\n\t~x~ O MDC ENTRE %d E %d EH: %d\n", mdc1, mdc2, mdca);
        break;
    case 3:
    //LOG EM BASE 10
    printf("\n\t~x~ VOCE ESCOLHEU ~LOG~\n");
    printf("\n\t~X~ DIGITE UM NUMERO PARA ACHAR O LOGARITMO: \n");
    scanf("%d", &log);
    for (;log>=10;){
        log=log/10;
        log2++;
    }
    printf("\n\t~x~ O LOG DESSE NUMERO NA BASE 10 EH: %d\n", log2);
        log2=0;
        break;
    case 4:
    //VERIFICACAO DE CARACTERE
        printf("\n\t~x~ VOCE ESCOLHEU ~VERIFICACAO DE CARACTERE~\n");
        printf("\n\t~x~ DIGITE UM CARACTERE: \n");
        scanf(" %c", &vc);
        if (vc >= 65 && vc <= 90|| vc >= 92 && vc <= 122)
        printf("\n\t~x~ O CARACTERE EH LETRA.\n");
        else if(vc == '+'||vc == '-'||vc == '*'||vc == '/'||vc == '%'||vc =='>'||vc =='<'||vc =='='||vc == '!'||vc =='&'||vc =='|')
        printf("\n\t~x~ O CARACTERE EH OPERADOR.\n");
        else if (vc ==  '.'||vc == ','||vc == ';')
        printf("\n\t~x~ O CARACTERE EH PONTUACAO.\n");
        else if (vc >= 48 && vc <= 57)
        printf("\n\t~x~ O CARACTERE EH NUMERO.\n");
        else 
        printf("\n\t~x~ NAO RECONHECI O CARACTERE.\n\tTENTE NOVAMENTE\n");
        break;
    }
    }
}