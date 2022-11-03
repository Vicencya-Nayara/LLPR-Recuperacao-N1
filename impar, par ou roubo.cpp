#include <stdio.h>
#include <locale.h>
 
int main() {
setlocale(LC_ALL, "Portuguese_Brazil");

    int p,j1, j2, r, a, s;
    
    printf("Número escolhido pelo jogador \nDigite 0 se escolheu ímpar \nDigite 1 se escolheu par: \n");
    scanf("%i", &p);
    
    printf("Número escolhido pelo jogador1: \n");
    scanf("%i", &j1);
    
    printf("Número escolhido pelo jogador2: \n");
    scanf("%i", &j2);
    
    printf("Jogador 1 roubou: \nDigite 1 se robou \nDigite 0 se não robou: \n");
    scanf("%i", &r);
    
    printf("Jogador 2 acusou \nDigite 1 se ele acusou \nDigite 0 se ele não acusou: \n");
    scanf("%i", &a);
    
    s = j1 +j2;
   
    if( r == 1) {
    if( a == 1) {
    printf("Jogador 2 ganha!\n");
   } 
    else {
    printf("Jogador 1 ganha!\n");
    }
    
    } else {
    if( ( s % 2 == 0 && p == 1) || (s % 2 == 1 && p == 0) ){
    printf("Jogador 1 ganha!\n");
    }
    
	else {
    printf("Jogador 2 ganha!\n");
    }
}
   
   
    return 0;
} 
