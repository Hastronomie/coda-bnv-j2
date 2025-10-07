#include <stdlib.h>
#include <stdio.h>

int main()
{
	char str[100];
	printf("Bonjour, quel est votre prenom ?");
	scanf("%s", str);
	int age;
	printf("Bonjour %s, quel est votre age ?", str);
	scanf("%d", &age);
	int reponse= 2025-age;
	int reponse2= reponse++;
	printf("%s, si vous etes de fin d'annee, votre annee de naissance sera %d, sinon %d\n", str, reponse, reponse2);
	exit(0);
}
