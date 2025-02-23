#include <stdio.h>

int main(){
//Criando as variáveis que irão armazenar os dados
int idade, matricula;
float altura;
char nome[50];

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite seu nome: \n");
scanf("%s", &nome);

printf("Digite sua altura: \n");
scanf("%f", &altura);

printf("Digite sua matricula: \n");
scanf("%d", &matricula);

printf("Nome do aluno: %s \nMatricula: %d \n", nome, matricula);
printf("Idade: %d \nAltura: %f", idade, altura);

return 0;
}
