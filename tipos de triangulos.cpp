#include <stdio.h>
 
 int main () {
	double a, b, c, A, B, C;
	
	printf("Digite o primeiro lado: ");
	scanf("%lf", &a);
	
	printf("Digite o segunndo lado: ");
	scanf("%lf", &b);
	
	printf("Digite o terceiro lado: ");
	scanf("%lf", &c);

	if (a>=b && a>=c) {
		A = a;
		B = b;
		C = c;	
	}
	if (b>=a && b>=c) {
		A = b;
		B = a;
		C = c;	
	}
	if (c>=b && c>=a) {
		A = c;
		B = b;
		C = a;	
	}
	
 if (A>=B+C) {
    	printf("NAO FORMA TRIANGULO\n");
	}
	else{
	if ((A*A)==(B*B)+(C*C)) {
    	printf("TRIANGULO RETANGULO\n");
	}
	if ((A*A)>(B*B)+(C*C)) {
    	printf("TRIANGULO OBTUSANGULO\n");
	}
	if ((A*A)<(B*B)+(C*C)) {
    	printf("TRIANGULO ACUTANGULO\n");
	}
	if ((A==B) && (B==C) && (C==A)) {
    	printf("TRIANGULO EQUILATERO\n");
	}
	if ((A==B && A!=C)||(B==C && B!=A)||(C==A && C!=B)) {
    	printf("TRIANGULO ISOSCELES\n");
	}
	}
	
    return 0;
}
