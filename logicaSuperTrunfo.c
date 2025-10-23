#include <stdio.h>
int main()
{
  unsigned int População1, População2, Turistico1, Turistico2;
  float área1, área2, PIB1, PIB2, CAPITA1, CAPITA2, DENSIDADE1, DENSIDADE2, SUPER1, SUPER2;
  char Código1[50], Código2[50];
  char Cidade1[50], Cidade2[50];
  char Estado1[50], Estado2[50];

  printf("Digite o Estado: \n");
  scanf("%s", &Estado1);
  printf("Digite o Código: \n");
  scanf("%s", &Código1);
  printf("Digite a Cidade: \n");
  scanf("%s", &Cidade1);
  printf("Digite a População: \n");
  scanf("%u", &População1);
  printf("Digite a área: \n");
  scanf("%f", &área1);
  printf("Digite o PIB: \n");
  scanf("%f", &PIB1);
  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%u", &Turistico1);
  printf(" \n");

  DENSIDADE1 = (float)População1 / área1;
  CAPITA1 = PIB1 / (float)População1;

  printf("Carta 1: \n");
  printf("Estado: %s\n", Estado1);
  printf("Código: %s\n", Código1);
  printf("Cidade: %s\n", Cidade1);
  printf("População: %u\n", População1);
  printf("Área: %.2f \n", área1);
  printf("PIB: %.2f \n", PIB1);
  printf("Pontos Turísticos: %u\n", Turistico1);
  printf("PIB per capita: %.2f \n", CAPITA1);
  printf("Densidade demográfica: %.2f \n", DENSIDADE1);
  printf(" \n");

  printf("Digite o Estado: \n");
  scanf("%s", &Estado2);
  printf("Digite o Código: \n");
  scanf("%s", &Código2);
  printf("Digite a Cidade: \n");
  scanf("%s", &Cidade2);
  printf("Digite a População: \n");
  scanf("%u", &População2);
  printf("Digite a área: \n");
  scanf("%f", &área2);
  printf("Digite o PIB: \n");
  scanf("%f", &PIB2);
  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%u", &Turistico2);
  printf(" \n");

  DENSIDADE2 = (float)População2 / área2;
  CAPITA2 = PIB2 / (float)População2;

  printf("Carta 2: \n");
  printf("Estado: %s\n", Estado2);
  printf("Código: %s\n", Código2);
  printf("Cidade: %s\n", Cidade2);
  printf("População: %u\n", População2);
  printf("Área: %.2f\n", área2);
  printf("PIB: %.2f\n", PIB2);
  printf("Pontos Turísticos: %u\n", Turistico2);
  printf("PIB per capita: %.2f \n", CAPITA2);
  printf("Densidade demográfica: %.2f \n", DENSIDADE2);
  printf(" \n");

  if (População1 > População2){
    printf("Carta 1 tem maior população. \n");
  }
  else if (População2 > População1){
    printf("Carta 2 tem maior população. \n");
  }
  else{
    printf("As duas cartas têm a mesma população. \n");
  }

  if (área1 > área2){
    printf("Carta 1 tem maior área. \n");
  }
  else if(área2 > área1){
    printf("Carta 2 tem maior área. \n");
  }
  else{
    printf("As duas cartas têm a mesma área. \n");
  }

  if(PIB1 > PIB2){
    printf("Carta 1 tem maior PIB. \n");
  }
  else if(PIB2 > PIB1){
    printf("Carta 2 tem maior PIB. \n");
  }
  else{
    printf("As duas cartas têm o mesmo PIB. \n");
    }


  if(Turistico1 > Turistico2){
    printf("Carta 1 tem mais pontos turísticos. \n");
  }
  else if(Turistico2 > Turistico1){
    printf("Carta 2 tem mais pontos turísticos. \n");
  }
  else{
    printf("As duas cartas têm o mesmo número de pontos turísticos. \n");
  }

  if(CAPITA1 > CAPITA2){
    printf("Carta 1 tem maior PIB per capita. \n");
  }
  else if(CAPITA2 > CAPITA1){
    printf("Carta 2 tem maior PIB per capita. \n");
  }
  else{
    printf("As duas cartas têm o mesmo PIB per capita. \n");
  }

  if(DENSIDADE1 > DENSIDADE2){
    printf("Carta 1 tem maior densidade demográfica. \n");
  }
  else if(DENSIDADE2 > DENSIDADE1){
    printf("Carta 2 tem maior densidade demográfica. \n");
  }
  else{
    printf("As duas cartas têm a mesma densidade demográfica. \n");
  }

  if(SUPER1 > SUPER2){
    printf("Carta 1 é a vencedora do Super Trunfo! \n");
  }
  else if(SUPER2 > SUPER1){
    printf("Carta 2 é a vencedora do Super Trunfo! \n");
  }
  else{
    printf("As duas cartas empataram no Super Trunfo! \n");
  }

  SUPER1 = área1 + PIB1 + Turistico1 + População1 + CAPITA1 - DENSIDADE1;
  SUPER2 = área2 + PIB2 + Turistico2 + População2 + CAPITA2 - DENSIDADE2;

  return 0;
}
