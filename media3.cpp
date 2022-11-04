#include <stdio.h>

int main() {

    float N1, N2, N3, N4, MEDIA, EXAME, MF;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &N1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &N2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &N3);
    
    printf("Digite a quarta nota: ");
    scanf("%f", &N4);
 
    MEDIA = (2*N1 + 3*N2 + 4*N3 + N4)/10;
 
    printf("Media: %.1f\n",MEDIA);
 
    if(MEDIA >= 7){
    printf("Aluno aprovado.\n");
    }
    
    if(MEDIA < 5){
    printf("Aluno reprovado.\n");
    }
    
    if((5 <= MEDIA) && (MEDIA < 7)){
    printf("Aluno em exame.\n");
    scanf("%f", &EXAME);
    printf("Nota do exame: %.1f\n",EXAME);
    MF = (MEDIA + EXAME)/2;
     
    if(MF >= 5){
    printf("Aluno aprovado.\n");
    printf("Media final: %.1f\n", MF);
    }
     
    if(MF <= 4.9){
    printf("Aluno reprovado.\n");
   
    printf("Media final: %.1f\n",MF);
    }
     else{
    	("Aluno reprovado.\n");
	}
 }
 
    return 0;
}
