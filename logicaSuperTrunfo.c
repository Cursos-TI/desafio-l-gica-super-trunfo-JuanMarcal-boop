#include <stdio.h>
int main()
{
  // Declaração das variáveis
  int P1, P2, resultado1, resultado2;
  unsigned int População1, População2, Turistico1, Turistico2;
  float área1, área2, PIB1, PIB2, CAPITA1, CAPITA2, DENSIDADE1, DENSIDADE2, SUPER1, SUPER2;
  char Código1[50], Código2[50];
  char Cidade1[50], Cidade2[50];
  char Estado1[50], Estado2[50];
  // Entrada dos dados da primeira carta
  printf("Digite o Estado: ");
  scanf("%s", &Estado1);
  printf("Digite o Código: ");
  scanf("%s", &Código1);
  printf("Digite a Cidade: ");
  scanf("%s", &Cidade1);
  printf("Digite a População: ");
  scanf("%u", &População1);
  printf("Digite a área: ");
  scanf("%f", &área1);
  printf("Digite o PIB: ");
  scanf("%f", &PIB1);
  printf("Digite o número de Pontos Turísticos: ");
  scanf("%u", &Turistico1);
  printf(" \n");
  // Cálculo do PIB per capita e densidade demográfica da primeira carta
  CAPITA1 = PIB1 / (float)População1;
  DENSIDADE1 = (float)População1 / área1;
  // Exibição dos dados da primeira carta
  printf("Carta 1: \n");
  printf("Estado: %s\n", Estado1);
  printf("Código: %s\n", Código1);
  printf("Cidade: %s\n", Cidade1);
  printf("População: %u\n", População1);
  printf("Área: %.2f \n", área1);
  printf("PIB: %.2f \n", PIB1);
  printf("Pontos Turísticos: %u\n", Turistico1);
  printf("PIB per capita: %f \n", CAPITA1);
  printf("Densidade demográfica: %.2f \n", DENSIDADE1);
  printf(" \n");
  // Entrada dos dados da segunda carta
  printf("Digite o Estado: ");
  scanf("%s", &Estado2);
  printf("Digite o Código: ");
  scanf("%s", &Código2);
  printf("Digite a Cidade: ");
  scanf("%s", &Cidade2);
  printf("Digite a População: ");
  scanf("%u", &População2);
  printf("Digite a área: ");
  scanf("%f", &área2);
  printf("Digite o PIB: ");
  scanf("%f", &PIB2);
  printf("Digite o número de Pontos Turísticos: ");
  scanf("%u", &Turistico2);
  printf(" \n");
  // Cálculo do PIB per capita e densidade demográfica da segunda carta
  DENSIDADE2 = (float)População2 / área2;
  CAPITA2 = PIB2 / (float)População2;
  // Exibição dos dados da segunda carta
  printf("Carta 2: \n");
  printf("Estado: %s\n", Estado2);
  printf("Código: %s\n", Código2);
  printf("Cidade: %s\n", Cidade2);
  printf("População: %u\n", População2);
  printf("Área: %.2f\n", área2);
  printf("PIB: %.2f\n", PIB2);
  printf("Pontos Turísticos: %u\n", Turistico2);
  printf("PIB per capita: %f \n", CAPITA2);
  printf("Densidade demográfica: %.2f \n", DENSIDADE2);
  printf(" \n");
  // Escolha da categoria para comparação
  printf("Escolha uma categoria para comparar as cartas: \n");
  printf("1. População\n");
  printf("2. área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Demográfica\n");
  printf("Digite o número da categoria escolhida: ");
  scanf("%d", &P1);
  printf(" \n");
  // Realização da comparação com base na categoria escolhida
  switch (P1)
  {
  case 1:
    printf("Você escolheu comparar a População.\n");
    resultado1 = (População1 > População2) ? 1 : 0;
    break;
  case 2:
    printf("Você escolheu comparar a área.\n");
    resultado1 = (área1 > área2) ? 1 : 0;
    break;
  case 3:
    printf("Você escolheu comparar o PIB.\n");
    resultado1 = (PIB1 > PIB2) ? 1 : 0;
    break;
  case 4:
    printf("Você escolheu comparar os Pontos Turísticos.\n");
    resultado1 = (Turistico1 > Turistico2) ? 1 : 0;
    break;
  case 5:
    printf("Você escolheu comparar a Densidade Demográfica.\n");
    resultado1 = (DENSIDADE1 < DENSIDADE2) ? 1 : 0;
    break;
  default:
    printf("Opção de comparação inválida!\n");
    return 0;
  }

  // Escolha da segunda categoria para comparação
  printf("Escolha uma segunda categoria para comparar as cartas: \n");
  printf("1. População\n");
  printf("2. área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Demográfica\n");
  printf("Digite o número da categoria escolhida: ");
  scanf("%d", &P2);
  printf(" \n");
  // Realização da segunda comparação com base na categoria escolhida
  if (P1 == P2)
  {
    printf("As categorias escolhidas devem ser diferentes!\n");

    return 0;
  }
  else
  {
    switch (P2)
    {
    case 1:
      printf("Você escolheu comparar a População.\n");
      resultado2 = (População1 > População2) ? 1 : 0;
      break;
    case 2:
      printf("Você escolheu comparar a área.\n");
      resultado2 = (área1 > área2) ? 1 : 0;
      break;
    case 3:
      printf("Você escolheu comparar o PIB.\n");
      resultado2 = (PIB1 > PIB2) ? 1 : 0;
      break;
    case 4:
      printf("Você escolheu comparar os Pontos Turísticos.\n");
      resultado2 = (Turistico1 > Turistico2) ? 1 : 0;
      break;
    case 5:
      printf("Você escolheu comparar a Densidade Demográfica.\n");
      resultado2 = (DENSIDADE1 < DENSIDADE2) ? 1 : 0;
      break;
    default:
      printf("Opção de comparação inválida!\n");
      break;
    }

    if (resultado1 && resultado2)
    {
      printf("Parabéns! A Carta 1 venceu!\n");
    }
    else if (resultado1 != resultado2)
    {
      printf("Empate! Nenhuma carta vence.\n");
    }
    else
    {
      printf("Que pena! A Carta 2 venceu.\n");
    }
  }
  return 0;
}
