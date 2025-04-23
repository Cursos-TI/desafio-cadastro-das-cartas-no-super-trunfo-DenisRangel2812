#include <stdio.h> //Inclui bibliotecas.

int main() //int main() é o ponto de início do programa em C e retorna um número que indica se ele terminou corretamente.
{ 
//Nível novato do desafio super trunfo (registro de apenas duas cartas).
// Variáveis para CARTA 1
char Estado, Codigo[4], Nomedacidade[20]; // Declara três variáveis de tipo char (ultilizada para informações de caractere), uma apenas de caractere simples (Denominada "Estado") e duas com strings (Denominadas como "Codigo [3]" e "Nomedacidade [20]").
int Populacao, Pontosturisticos;  // Declara duas variáveis de tipo int (ultilizadas para informações de números inteiros) denominadas como "Populacao" e "Pontosturisticos".
float Area, PIB; //Declara duas variáveis de tipo float (ultilizada para números com casas decimais) denominadas como "Area" e "PIB".


// Variáveis para CARTA 2
char estado, codigo[4], nomedacidade[20]; // Declara três variáveis de tipo char (ultilizada para informações de caractere), uma apenas de caractere simples (Denominada "estado") e duas com strings (Denominadas como "codigo [3]" e "nomedacidade [20]").
int populacao, pontosturisticos; // Declara duas variáveis de tipo int (ultilizadas para informações de números inteiros) denominadas como "populacao" e "pontosturisticos".
float area, pib; //Declara duas variáveis de tipo float (ultilizada para números com casas decimais) denominadas como "area" e "pib".

/*Instruções de comandos:
printf imprime a frase dentro das aspas, na tela do usuário;
scanf lê os dados fornecidos pelo usuário e os armazena em variáveis;
%d Imprime um inteiro no formato decimal (usado em variáveis de tipo int);
%i Equivalente a %d (usado em variáveis de tipo int);
%f Imprime um número de ponto flutuante no formato padrão (usado em variáveis de tipo float);
%e Imprime um número de ponto flutuante na notação científica (usado em variáveis de tipo double);
%c Imprime um único caractere (usado em variáveis de tipo char)(Obs: O %c lê qualquer caractere, inclusive espaços e quebras de linha. Colocar um espaço antes de %c no scanf faz ele ignorar esses caracteres em branco no buffer);
%s Imprime uma cadeia (string) de caracteres (usado em variáveis de tipo char com string);
\n usado para quebrar a linha, e usando dois seguidos, ele quebra e pula uma linha;
() em funções como 'printf()' e 'scanf()' são usados para passar os argumentos necessários para a execução. Sem eles, o compilador não reconhece a chamada da função e gera um erro de sintaxe;
; em C é usado para finalizar uma instrução ou comando;
*/

printf("CARTA 1\n"); //Identificador da carta.

printf("Digite uma letra de A a H que representará o estado: \n"); 
scanf(" %c", &Estado);

printf("Digite um código para carta (Ex: A01, B02... até H04) ultilizando a letra usada acima: \n");
scanf("%s", &Codigo);

printf("Digite o nome de uma cidade de sua escolha (apenas cidades de nome simples, sem nomes compostos): \n"); //Foi solicitado apenas nomes simples porque o '%s' interpreta a entrada como uma única palavra e para ao encontrar um espaço.
scanf("%s", &Nomedacidade);

printf("Digite a população dessa cidade(sem ponto nem vírgula): \n"); //Foi solicitado que o usuário não ultilize pontos e nem vírgulas pois o %i ou %d lêem apenas inteiros, e esses caracters geram erros inesperados na execução do código.
scanf("%i", &Populacao);

printf("Digite a área dessa cidade em km² (digite só os números e em vez de vírgula, use ponto): \n"); //A solicitação do ponto ao em vez da vírgula se da pelo programa em C ter sido criado nos EUA, onde o separador de números decimais é o ponto, e quando usamos vírgula, a execução não funciona como o esperado.
scanf("%f", &Area);

printf("Digite o PIB dessa cidade: \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos que se localizam nesta cidade: \n");
scanf("%i", &Pontosturisticos);



printf("\nCARTA 2\n"); //Identificador da carta.

printf("Digite outra letra de A a H que representará o estado: \n"); 
scanf(" %c", &estado);

printf("Digite um código para carta (Ex: A01, B02... até H04) ultilizando a letra usada acima: \n");
scanf("%s", &codigo);

printf("Digite o nome de uma outra cidade de sua escolha (apenas cidades de nome simples, sem nomes compostos): \n"); //Foi solicitado apenas nomes simples porque o '%s' interpreta a entrada como uma única palavra e para ao encontrar um espaço.
scanf("%s", &nomedacidade);

printf("Digite a população dessa cidade(sem ponto nem vírgula): \n"); //Foi solicitado que o usuário não ultilize pontos e nem vírgulas pois o %i ou %d lêem apenas inteiros, e esses caracters geram erros inesperados na execução do código.
scanf("%i", &populacao);

printf("Digite a área dessa cidade em km² (digite só os números e em vez de vírgula, use ponto): \n"); //A solicitação do ponto ao em vez da vírgula se da pelo programa em C ter sido criado nos EUA, onde o separador de números decimais é o ponto, e quando usamos vírgula, a execução não funciona como o esperado.
scanf("%f", &area);

printf("Digite o PIB dessa cidade: \n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos que se localizam nesta cidade: \n");
scanf("%i", &pontosturisticos);

printf("\n============= CADASTRO FINALIZADO =============\n\n");


//Imprime os dados das duas cartas já cadastradas.
printf("CARTA 1\n");
printf("Estado: %c \n", Estado);
printf("Código: %s \n", Codigo);
printf("Nome da Cidade: %s \n", Nomedacidade);
printf("População: %i \n", Populacao);
printf("Área: %.2f km² \n", Area); //Imprime na tela do usuário apenas duas casas decimais, devido ao ".2" no meio do "%f".
printf("PIB: %.2f bilhões \n", PIB);//Imprime na tela do usuário apenas duas casas decimais, devido ao ".2" no meio do "%f".
printf("Número de Pontos Turísticos: %i \n", Pontosturisticos);

printf("\n--------------//---------------//----------------//--------------//\n\n");

printf("CARTA 2\n");
printf("Estado: %c \n", estado);
printf("Código: %s \n", codigo);
printf("Nome da Cidade: %s \n", nomedacidade);
printf("Populaçao: %i \n", populacao);
printf("Área: %.2f km² \n", area);//Imprime na tela do usuário apenas duas casas decimais, devido ao ".2" no meio do "%f".
printf("PIB: %.2f bilhões \n", pib);//Imprime na tela do usuário apenas duas casas decimais, devido ao ".2" no meio do "%f".
printf("Número de Pontos Turísticos: %i \n", pontosturisticos);

return 0;
/* return 0; → indica que o programa terminou com sucesso. 
Qualquer outro número → geralmente indica que houve algum erro.*/
}

    



  

  




















