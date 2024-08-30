//D. Supondo duas variáveis de ponto flutuante (numero1 e numero2), e que a primeira
//tenha sido inicializada com o valor 7.3, escreva instruções que executem as seguintes
//ações:
//1. Declare a variável fP como um ponteiro para uma variável do tipo float.
int *numero1 , *numero2, *fP;
float y=9;
fP=&y;
//2. Atribua o endereço da variável numero1 à variável de ponteiro fP.
*numero1=&fP;
*numero2=&fP;
//3. Mostre o valor do objeto apontado por fP.
fP=9;
//4. Atribua o valor do objeto apontado por fP à variável numero2.
*numero2=&y;
//5. Mostre o valor de numero2.
numero2=9
//6. Mostre o endereço de numero1. (Se usar printf, use o formato %p.)

//7. Mostre o endereço armazenado em fP. Use o especificador de formtato %p.
//O valor impresso é o mesmo que o endereço de numero1?
Não um mostra o endereço e outro o valor de y.

#include <stdio.h>

int main(){
    int *numero1 , *numero2, *fP;
    float y=9;
    fP=&y;
    *numero1=&fP;
    *numero2=&fP;
    printf("%d", *p);
    *numero2=&y;
    printf("%d", *numero2);
    printf("%d", &numero2);
    printf("%d", &fP);

}