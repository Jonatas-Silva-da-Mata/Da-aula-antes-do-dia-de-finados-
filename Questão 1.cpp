#include <stdio.h>
#include  <locale.h>
  int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
  	
  	int n1, n2, op;
  	float r;
  	printf("Atribua os respectivos números:\n\n");
  	
  	printf("Digite o primeiro número: ");
  	scanf("%d", &n1);
  	printf("Digite o segundo Número: ");
  	scanf("%d", &n2);
  	
  	printf("\n Informe a operação desejada: ");
  	printf("\n1 - Soma; 2 - Subtração; 3 - Multiplicação; 4 - Divisão; ");
  	scanf("%d", &op);
  	
  	if(op >= 1 && op <= 4){
  		if(op == 1){
  			r = n1 + n2;
		  }else if(op == 2){
		  	r = n1 - n2;
		  }else if(op == 3){
		  	r = n1 * n2;
		  }else{
		  	if(n2 == 0) {
		  		printf("\nImpossível de calcular.\nPor favor, reinicie o programa e tente novamente. ");
		  		return 0;
			}
			r = n1 / n2;
		  }
		  printf("\nO resultado da operação é: %.2f.", r);
	  }else{
		printf("Operação inválida.\n Encerre o programa e tente novamente.");
	}
  	
  	return 0;
  }
