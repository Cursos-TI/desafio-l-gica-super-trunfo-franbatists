#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () {

 int turismo1, turismo2;
 int jogador1, jogador2;
 float PIB1, PIB2;
 float area1, area2;
 float populacao1, populacao2;
 float densidade1, densidade2;
 char estado1[50], estado2[50];

 srand (time (0));

 strcpy (estado1, "Bahia");
 strcpy (estado2, "Ceará");

 populacao1 = 14.850513;
 populacao2 = 9.233656;

 area1 = 567.295;
 area2 = 148.886;

 PIB1 = 115.9;
 PIB2 = 194.885;

 densidade1 = 25.04;
 densidade2 = 59.07;

 turismo1 = 13;
 turismo2 = 15;

printf("*** JOGO SUPER TRUNFO ***\n");
printf("Escolha o primeiro atríbuto:\n");
printf("CARTA 1: %s\n", estado1);
printf("CARTA 2: %s\n", estado2);
printf(".1 População\n");
printf(".2 Área\n");
printf(".3 PIB\n");
printf(".4 Densidade\n");
printf(".5 turismo\n");

printf("Escolha a primeira opção para comparar: ");
scanf("%d", &jogador1);

jogador2 = rand () % 2 + 1;

switch (jogador1) {

case 1:
printf("jogador: população \n");
break;

case 2:
printf("jogador: area \n");
break;

case 3:("jogador: PIB \n");
break;

case 4:("jogador: densidade \n");
break;

case 5:("jogador: turismo \n");
break;

default:
printf("opção invalida\n");
break;
}
switch (jogador2){

    case 1:
    printf("jogador: população \n");
    break;
    
    case 2:
    printf("jogador: area \n");
    break;
    
    case 3:("jogador: PIB \n");
    break;
    
    case 4:("jogador: densidade \n");
    break;
    
    case 5:("jogador: turismo \n");
    break;
    
    default:
    printf("opção invalida\n");
    break;  
}

if (jogador1 == jogador2)
{
  printf("###empate!\n");
} else if  ((jogador1 > populacao1) && (jogador2 > populacao2) ||
(jogador1 > area1) && (jogador2 > area2) ||
(jogador1 > PIB1) && (jogador2 > PIB2) ||
(jogador1 < densidade1) && (jogador2 < densidade2) ||
(jogador1 > turismo1) && (jogador2 > turismo2))
{
  printf("### Parabéns a carta 1 venceu! ###\n");
} else {
    printf("### Parabéns a carta 2 venceu! ###\n");
}
  
return 0;
}