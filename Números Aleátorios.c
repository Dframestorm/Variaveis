#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void main(){
setlocale(LC_ALL,"");

//Respons�vel de alimentar o rand de forma diferente
srand((unsigned)time(NULL));

//Vari�vel que recebe o resto da divis�o por 3 (aleatorio entre 0 e 2)
int aleatorio = rand() % 3;

//Vari�vel que recebe o resto da divis�o por 5 (aleatorio entre 1 e 5)
int aleatorioSegundo = (rand() % 5) + 1;

printf("%d", aleatorioSegundo);





}
