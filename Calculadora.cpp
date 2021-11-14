#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main()
{
   float n, n2, r;
   char op,op2 = 0;
   int loop = 0, p = '=', c = 'c', ce = 'v';
    
	
	printf("Menu de operacoes \n\n");
    printf("+ - Soma \n");
    printf("- - Subtracao \n");
    printf("/ - Divisao \n");
    printf("* - Multiplicacao \n");
    printf("c - Comando C (Limpar a tela)\n");
	printf("v - Comando Ce (Refazer a ultima operacao)\n");
	printf("= - Sair \n");
    printf("Entre com os valores:\n");
    scanf("%f",&n);
   while(loop != '='){
	
	inicio:
	
	scanf("%s",&op);
   
   if(op == p){
    
	printf("resultado: %2.f", r);
    return 0;

}else if(op == ce){
		
		printf("Menu de operacoes \n\n");
    	printf("+ - Soma \n");
    	printf("- - Subtracao \n");
    	printf("/ - Divisao \n");
    	printf("* - Multiplicacao \n");
    	printf("c - Comando C (Limpar a tela)\n");
		printf(", - Comando Ce (Refazer a ultima operacao)\n");
		printf("= - Sair \n");
    	printf("Entre com os valores:\n");
		printf("%2.f \n",r);
		printf("%s \n",op2);
		n2 = 0;
		goto meio;
		break;
	
	}else if(op == c){
		
		system("cls");
		scanf("%f",&n);
	
	}else if(op != p){
	meio:
	scanf("%f",&n2);
	
	switch(op)
{
     
    case '+':
          r=n+n2;
            printf("Resultado: %2.f\n",r);
      break;

    case '-':
          r=n-n2;
            printf("Resultado: %2.f\n",r);
      break;

    case '*':
          r=n*n2;
            printf("Resultado: %2.f\n",r);
      break;

    case '/':
          r=n/n2;
              printf("Resultado: %2.f\n",r);
      break;
      
	case '=':
         loop = '=';
	  break;
      	
	  default :
	      	printf ("Valor invalido!\n");
}
        	n = r;			
}			
	  goto inicio;
}
return 0;
}
