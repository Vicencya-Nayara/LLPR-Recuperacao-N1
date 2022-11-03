#include <stdio.h>
 #include <locale.h>
 
int main() {
setlocale(LC_ALL, "Portuguese_Brazil");

 int S, T, F;
 
    printf("Digite a hora da saída: ");
    scanf("%d", &S);

    printf("Digite a duração da sua viagem: ");
    scanf("%d", &T);

    printf("Digite o fuso hoario da sua viagem: ");
    scanf("%d", &F);
    
    if(S == 0)
    {
      S = 24;
    }
    else{
     S = ((S + T + F) % 24);
	}

   
    
    printf("%d\n", S);
    
    
 
    return 0;
}
