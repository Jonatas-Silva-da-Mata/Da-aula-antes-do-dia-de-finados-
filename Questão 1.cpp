#include <stdio.h>
#include  <locale.h>
  int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
  	
  	int n1, n2, op;
  	float r;
  	printf("Atribua os respectivos n�meros:\n\n");
  	
  	printf("Digite o primeiro n�mero: ");
  	scanf("%d", &n1);
  	printf("Digite o segundo N�mero: ");
  	scanf("%d", &n2);
  	
  	printf("\n Informe a opera��o desejada: ");
  	printf("\n1 - Soma; 2 - Subtra��o; 3 - Multiplica��o; 4 - Divis�o; ");
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
		  		printf("\nImposs�vel de calcular.\nPor favor, reinicie o programa e tente novamente. ");
		  		return 0;
			}
			r = n1 / n2;
		  }
		  printf("\nO resultado da opera��o �: %.2f.", r);
	  }else{
		printf("Opera��o inv�lida.\n Encerre o programa e tente novamente.");
	}
  	
  	return 0;
  }
