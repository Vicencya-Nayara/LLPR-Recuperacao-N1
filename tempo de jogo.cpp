#include <stdio.h>
#include <locale.h>
 
int main() {
setlocale(LC_ALL, "Portuguese_Brazil");
	
 int inicio, fim;
 
   printf("Qual o horario que o jogo iniciou: ");
   scanf("%d", &inicio);
    
   printf("Qual a duração do jogo: ");
   scanf("%d", &fim);
 
  if(inicio<fim)
    
 {
    printf("O JOGO DUROU %d HORA(S)\n", fim-inicio);
 }
  else{
  	 printf("O JOGO DUROU %d HORA(S)\n", 24-inicio+fim);
  }
    
    return 0;
}
