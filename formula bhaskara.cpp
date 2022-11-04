#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B, C;
 
    printf("Digite o primeiro numero: ");
    scanf("%lf", &A);
    
    printf("Digite o segundo numero: ");
    scanf("%lf", &B);
    
    printf("Digite o terceiro numero: ");
    scanf("%lf", &C);
 
    if((B*B - 4*A*C) < 0 || (A == 0))
   {
    printf("Impossivel calcular\n");
   }
 
    else{
    printf("R1 = %.5lf\n",(-B + sqrt(B*B -4*A*C))/(2*A));
    printf("R2 = %.5lf\n",(-B - sqrt(B*B -4*A*C))/(2*A));
	}
 
    return 0;
}
