#include <stdio.h>
#include <locale.h>
  int main(){
  	setlocale (LC_ALL, "Portuguese");
  	
  	float vi, p100, p, r;
  	int op;
  	printf("Calculadora de porcentagem.\n\n");
  	
  	printf("Digite o n�mero que desejas calcular: ");
  	scanf("%f", &vi);
  	printf("\nDigite o percentual que voc� quer calcular dele: ");
  	scanf("%f", &p);
  	printf("\nDigite 1 para apenas calcular a porcentagem;\nDigite 2 para calcular o valor atribuido + a sua porcentagem;\nDigite 3 para calcular o valor atribuido - a sua porcentagem.");
  	scanf("%d", &op );
  	
  	if(op >= 1 && op <= 3){
  		p100 = vi * p / 100;
  		if(op == 1){
  			printf("O valor � %f", p100);
  			
		  }else if(op == 2){
		  	r = vi + p100;
		  	printf("O valor � %f",r);
		  	
		  }else if (op == 3){
		  	r = vi - p100;
		  	 printf("O valor � %f",r);
		  }
	  }else("N�mero incorreto! Tente novamente.");
  	
  	return 0;
  	
  }
