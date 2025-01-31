#include <stdio.h>

int main(){

int idade, matricula;
float altura;
float peso;
char nome, bairro, turma[50];

printf("Digite o nome do aluno: \n" );
scanf(" %s" ,&nome);

printf("Digite a matricula: \n");
scanf("%d", &matricula);

printf("Digite a sua idade: \n");
scanf(" %d" ,&idade);

printf("Digite seu bairro: \n");
scanf(" %s", &bairro);

printf("Sua turma: \n");
scanf("%s", turma);

printf("Informe seu peso: \n");
scanf("%f", &peso);

printf("Digite a altura: \n");
scanf("%d", &altura);


printf("Nome do aluno: %s   Matricula:  %d" , nome, matricula);
printf("Idade: %d  Altura: %f    Peso: %f ", idade, altura, peso);
printf("Turma: %s  Bairro: %s");
 
 return 0;



}
