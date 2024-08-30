//A.Quais valores serão resultantes das instruções das linhas 6 a 8?

//1 int num, valor;
//2 int *p;
//3 num = 55;
//4 p = &num;
//5 valor = *p;
//6 printf ("%d\n", valor);
//7 printf ("%p\n", p);
//8 printf ("%d\n", *p);

printf("O valor da linha 6 será igual a 55 pois a variavel valor e igual ao valor do endereço de *p");
printf("O valor da linha 7 será igual a 0061FF14 pois a variavel aponta para o endereço de num");
printf("O valor da linha 8 será igual a 55 pois p aponta para o endereço de num então o valor de *p e igual a num");