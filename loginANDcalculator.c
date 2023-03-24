#include <stdio.h>
#include <string.h>
#include <locale.h>


int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	char nome_trmp[20];
	char senha_trmp[20];
	char name_trmp[20];
	char password[20];
	
	printf("Por favor crie um nome de usuario: ");
	scanf("%s", nome_trmp);
	
	printf("Por favor crie uma senha para o login: ");
	scanf("%s", senha_trmp);
	
	system("cls");
	
	printf("Insira seu nome de usuario: \n");
	scanf("%s", name_trmp);
	if (strcmp(nome_trmp, name_trmp) == 0) {
		printf("\nInsira sua senha: \n");
		scanf("%s", password);
		if (strcmp(senha_trmp, password) == 0){
			system("cls");
			printf("\nLogin realizado com sucesso! \n");
				
		} else {
			printf("Senha incorreta, reinicie a aplicação e tente novamente!");
		}
	} else {
		printf("Login incorreto, reinicie a aplicação e tente novamente! ");
	}
	
	if(strcmp(nome_trmp, name_trmp) == 0 && strcmp(senha_trmp, password) == 0 ){
		
	float kilo,metro,imc;
	
	printf("\nInsira o seu KG e tecle enter:");
	scanf("%f", &kilo);
	
	printf("Insira o seu metro e tecle enter:");
	scanf("%f", &metro);
	
	imc = kilo/(metro * metro);         // criei uma string imc que faz o calculo de kilo dividido por metro vezes metro
	
	//utilizei o & comercial no caso E lógico para fazer o sinal de entre dois numeros
	
	printf("\nEsse é o seu IMC: %.2f \n", imc);
	if (imc<18.6){
	printf("\nVoce esta abaixo do peso \n"); }
	if (imc>=18.6 & imc<=24.9){
	printf("\nPeso ideal (parabéns) \n"); }
	if (imc>=25.0 & imc<=29.9){
	printf("\nLevemente acima do peso \n"); }
	if (imc>=30.0 & imc<=34.9){
	printf("\nObesidade grau 1 \n"); }
	if (imc>=35.0 & imc<=39.9){
	printf("\nObesidade grau 2 (severa) \n"); }
	if (imc>40.0){
	printf("Obesidade grau 3 (morbida) \n"); }
	system("PAUSE");
	
	}
	
	return 0;

	
}
