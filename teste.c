#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *pont; // cria variável ponteiro para o arquivo
  char palavra[20]; // variável do tipo string
  
  pont = fopen("arquivo.txt", "w+");
  
  printf("Escreva uma palavra para testar gravacao de arquivo: ");
  scanf("%s", palavra);
  
  fprintf(pont, "%s", palavra);
  
  fclose(pont);
  
  printf("Dados gravados com sucesso!");

  return(0);
}