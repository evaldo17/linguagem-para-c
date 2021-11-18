#include <stdio.h>
void cabecalho(){
	printf("Universidade UNINTER\n");
	printf("Disciplina: Linguagem C\n");
	printf("Aluno: Evaldo Alves\n");
}
int verif(int num1, int num2){
	if (num1 > num2)
		return num1;
	else
		return num2;
}
int main(void)
{
	int num1,num2;
	cabecalho();
	printf("\nDigite o primeiro número: ");
	scanf("%d",&num1);
	printf("Digite o segundo número: ");
	scanf("%d",&num2);
	if(num1==num2){
		printf("Os valores %d e %d são iguais",num1,num2);
	}
	else{
		printf("\nEntre os valores %d e %d o maior é %d",num1,num2,verif(num1,num2));
	}
	return 0;
}

