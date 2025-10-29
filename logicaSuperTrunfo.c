#include <stdio.h>
int main()
{
  int P;
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

  CAPITA1 = PIB1 / (float)População1;
  DENSIDADE1 = (float)População1 / área1;

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

  printf("Escolha uma categoria para comparar as cartas: \n");
  printf("1. População\n");
  printf("2. área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Demográfica\n");
  scanf("%d", &P);

  switch (P)
  {
  case 1:
    printf("%s e %s", Estado1, Estado2);
    printf("%s tem %u habitantes e %s tem %u habitantes.\n", Cidade1, População1, Cidade2, População2);
    if (População1 > População2)
    {
      printf("%s vence!\n", Cidade1);
    }
    else if (População2 > População1)
    {
      printf("%s vence!\n", Cidade2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  case 2:
    printf("%s e %s", Estado1, Estado2);
    printf("%s tem %.2f de área e %s tem %.2f de área.\n", Cidade1, área1, Cidade2, área2);
    if (área1 > área2)
    {
      printf("%s vence!\n", Cidade1);
    }
    else if (área2 > área1)
    {
      printf("%s vence!\n", Cidade2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  case 3:
    printf("%s e %s", Estado1, Estado2);
    printf("%s tem %.2f de PIB e %s tem %.2f de PIB.\n", Cidade1, PIB1, Cidade2, PIB2);
    if (PIB1 > PIB2)
    {
      printf("%s vence!\n", Cidade1);
    }
    else if (PIB2 > PIB1)
    {
      printf("%s vence!\n", Cidade2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  case 4:
    printf("%s e %s", Estado1, Estado2);
    printf("%s tem %u pontos turísticos e %s tem %u pontos turísticos.\n", Cidade1, Turistico1, Cidade2, Turistico2);
    if (Turistico1 > Turistico2)
    {
      printf("%s vence!\n", Cidade1);
    }
    else if (Turistico2 > Turistico1)
    {
      printf("%s vence!\n", Cidade2);
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  case 5:
    printf("%s e %s", Estado1, Estado2);
    printf("%s tem %.2f de densidade demográfica e %s tem %.2f de densidade demográfica.\n", Cidade1, DENSIDADE1, Cidade2, DENSIDADE2);
    if (DENSIDADE1 < DENSIDADE2)
    {
      printf("%s vence!\n", Cidade1);
    }
    else if (DENSIDADE2 < DENSIDADE1)
    {
      printf("%s vence!\n", Cidade2);
    }
    else
    {
      printf("Empate!\n");
    }
    return 0;
  }
}
