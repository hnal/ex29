//este programa faz um cardapio eletronico
//funciona da seguinte forma:
//-voce escolhe o produlto
//
//-diz com o quanto vai pagar
//
//-O programa retorna o seu troco, e as moedas que lhe seram dadas
//com uma ordem de preferencia das maiores moedas para as menores.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define VALOR1 0.7
#define VALOR2 1
#define VALOR3 2
#define VALOR4 0.50
#define VALOR5 1.50
#define SEMERRO 0

int troco (float n);//funcao que calcula o troco e as moedas
int main(void)//funcao principal
{
	int a;
	float   c, d, e, f, g;
	c=VALOR1;
	d=VALOR2;
	e=VALOR3;
	f=VALOR4;
	g=VALOR5;
	printf("A seguir você podera escolher algum tipo de doce\n\n");
	printf("1.Jujuba R$ %.2f\n2.batom Garoto R$ %.2f\n3.Picole R$ %.2f\n4.Pirulito R$ %.2f\n5.twist R$ %.2f\n\nPara escolher digite o numero relativo ao doce\n",c,d,e,f,g);
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			troco(c);
			break;
		case 2:
			troco(d);
			break;
		case 3:
			troco(e);
			break;
		case 4:
			troco(f);
			break;
		case 5:
			troco(g);
			break;
		default:
			printf("Erro:\nNao existe esta opcao!!\n");
			break;
	}
	return SEMERRO;	
}
int troco(float a)
{
	float d, j, c;
	int e;
	printf ("Digite com o quanto voce vai pagar\n");
	scanf("%f", &c);
	d= c-a;
	printf("O seu troco eh: %.2f\nas moedas seram:\n\n", d);
	if((c-a)>= 1)//VAlor da moeda é 1
	{
		e=c-a;
		printf("%d x R$1.00\n",e);
		j = (c-a) -e;
	}
	if(j>= 0.5)//valor da moeda é 0.50
	{
		e=j/0.5;
		printf("%d x R$0,50\n", e);
		j-=(e*0.5);
	}
	if(j>= 0.25)//valor da moeda é 0.25
	{
		e=j/0.25;
		printf("%d x R$0.25\n", e);
		j-= (e*0.25);
	}
	if(j >= 0.10)//valor da moeda é 0.10
	{
		e=j/0.09;
		printf("%d x R$0.10\n", e);
		j-=(e*0.10);
	}
	if( j >= 0.04 )// O valor de arredondamento
	{
		e=j/0.04;
		printf("%d x R$0.05\n", e);
	}
	return 0;
}
