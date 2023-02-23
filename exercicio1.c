// Escreva o seu código a seguir
#include<stdio.h>
int main () {
int a;
int a1;
int a2;
int res;
char palavra[80];
printf("O seu nome\n");
gets(palavra);
printf("Dia de Nascimento:\n");
scanf("%d",&a);
printf("Mes de Nascimento:\n");
scanf("%d",&a1);
printf("Ano de Nascimento:\n");
scanf("%d",&a2);

res= 365*2023 + 30*2 + 15 -365*a2 -30*a1 - a;


printf("+-------------------+");
printf("|                   |");
printf("|                   |");
printf("+-------------------+");
printf("|                   |");
printf("+-------------------+");
}
