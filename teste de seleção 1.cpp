#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 int A, B, C, D;
     
	printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &B);
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &C);
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &D);
    
    if(B>C && D>A && C+D > A+B && C>0 && D>0 && A%2==0)
    
    {
        printf("Valores aceitos\n");
    }
      else{
      	printf("Valores nao aceitos\n");
	  }
 
    return 0;
}
