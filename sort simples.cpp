#include <stdio.h>
#include <locale.h>
 
int main() {
setlocale(LC_ALL, "Portuguese_Brazil");

 int n1, n2, n3;
  
   printf("Digite o primeiro número: ");
   scanf("%d", &n1);
   
   printf("Digite o segundo número: ");
   scanf("%d", &n2);
   
   printf("Digite o terceiro número: ");
   scanf("%d", &n3);
   
   if((n1 <= n2) && (n1 <= n3)){
       if(n2 <= n3){
        printf("%d\n%d\n%d\n",n1,n2,n3);
       }
       else if(n2 <= n3){
        printf("%d\n%d\n%d\n",n1,n3,n2);
       }
   }
   
   if ((n2 < n1) && (n2 < n3)){
       if(n1 < n3)
       printf("%d\n%d\n%d\n",n2,n1,n3);
       else if(n1 < n3)
       {
        printf("%d\n%d\n%d\n",n2,n3,n1);
	   }
      
   }
   
   if ((n3 < n1) && (n3 < n2)){
       if (n1 <= n2){
        printf("%d\n%d\n%d\n",n3,n1,n2);
       }
        else if(n1 <= n2){
        printf("%d\n%d\n%d\n",n3,n2,n1);
       }
   } 
   
   printf("\n%d\n%d\n%d\n",n1,n2,n3);
   
    return 0;
}
