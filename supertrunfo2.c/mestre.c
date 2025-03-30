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

jogador2 = rand () % 5 + 1;

switch (jogador1){

case 1:
printf("jogador: população -");
jogador1 = populacao1 > populacao2 ? 1 : 0;
break;

case 2:
printf("jogador: area -");
jogador1 = area1 > area2 ? 1 : 0;
break;

case 3:("jogador: PIB -");
jogador1 = PIB1 > PIB2 ? 1 : 0;
break;

case 4:("jogador: densidade -");
jogador1 = densidade1 < densidade2 ? 1 : 0;
break;

case 5:("jogador: pontos_turísticos -");
jogador1 = turismo1 > turismo2 ? 1: 0;
break;

default:
printf("opção invalida\n");
break;
}

printf("Escolha o segundo atríbuto:\n");
printf("CARTA 1: %s\n", estado1);
printf("CARTA 2: %s\n", estado2);
printf(".1 População\n");
printf(".2 Área\n");
printf(".3 PIB\n");
printf(".4 Densidade\n");
printf(".5 turismo\n");

printf("Escolha a segunda opção para comparar: ");
scanf("%d", &jogador1);
if (jogador1 == jogador2){
 printf("Voce escolheu a mesma opção!\n");
} else {

 switch (jogador2) {

    case 1:
    printf("jogador: população -");
    jogador2 = populacao1 > populacao2 ? 1 : 0;
    break;
    
    case 2:
    printf("jogador: area -");
    jogador2 = area1 > area2 ? 1 : 0;
    break;
    
    case 3:("jogador: PIB -");
    jogador2 = PIB1 > PIB2 ? 1 : 0;
    break;
    
    case 4:("jogador: densidade -");
    jogador2 = densidade1 < densidade2 ? 1 : 0;
    break;
    
    case 5:("jogador: pontos_turísticos -");
    jogador2 = turismo1 > turismo2 ? 1: 0;
    break;
    
    default:
    printf("opção invalida\n");
    break;  
    }

 if (jogador1 && jogador2)
{
   printf("### Parabéns, voce ganhou!\n");
} else if(jogador1 |= jogador2) {
    printf("### Empatou! ###\n");
} else {
    ("### Infelizmente voce perdeu ###");
 }
}
return 0;
}