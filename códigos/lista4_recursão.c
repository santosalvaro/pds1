#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int a){
    if(a == 0) return(1);
    return(a*fat(a-1));
}
int mdc(int a, int b){
   if(b == 0) return (a);
   else return mdc(b, a % b);
}
int mdc3(int aux, int c){
    
   if(c==0) return (aux);
   else return mdc3(c, aux % c);
}
int fib(int a){
    if ((a==0) || (a==1)) return a;
    return fib(a-1) + fib (a-2);
}
int primo (int a, int b){
    if(b==1) return(1);
    if(a%b==0) return(0);
    return(primo(a, b-1));
}
int decres(int a){
    printf ("(%d)", a);
    if (a==0) return (0);
    return decres(a-1);
}
int res(int a, int b){
    if(a-b<0) return a;
    return (res(a-b,b));
}
int form(int a){
    if(a == 0) return 0;
    else return a+form(a-1);
}
int mmc(int a, int b, int aux){
    if(a==0) return (b);
    if(b==0) return (a);
    return ( a * b ) / aux;
}
int divi(int a, int b){
    if (a < b) return (0);
    else return divi(a-b, b) + 1;
}
float raiz(float x, float chute){
    
    if(chute*chute == x ) return (chute);
    if(chute*chute >= x-0.001 && chute*chute<= x+0.001) return(chute);
    if(chute*chute > x) return (raiz (x, chute*0.5));
    if(chute*chute <x) return (raiz (x, chute*1.5));
} 
int dig(int a){
    if (a == 0) return 0;
    else return (a % 10) + dig(a / 10);
} 
int poten(int a, int b){
    
    if(b == 0) return (1);
    else return (a * poten(a, b-1));
}
int cres(int a, int d){

    printf("(%d)", d);
    if (a>d) return cres(a, d+1);
    else return (0);
} 

int main()
{
    int a, b, c, d=0, aux=mdc(a,b);    
    float x, chute=2;
    
    printf("Digite um valor inteiro:");
    scanf("%d", &a);
    printf("Digite um valor inteiro:");
    scanf("%d", &b);
    printf("Digite um valor inteiro:");
    scanf("%d", &c);
    printf("Digite um valor real:");
    scanf("%g", &x);
    
    
    printf("\nO fatorial de %d eh %d\n", a, fat(a));
    printf("O mdc de %d e %d eh %d\n", a, b, mdc(a,b));
    /*estou usando o resultado do mdc para calcular o mdc3*/
    printf("O mdc3 de %d, %d e %d = %d\n", a, b, c, mdc3(aux,c));
    printf("A posição de numero %d(-ésimo) em Fibonacci eh %d\n", a, fib(a));
    printf("%d eh primo: %d\n", b, primo(b,b-1));
    printf("\nÉ a sequencia decrescente de %d até %d\n", a,decres(a));
    printf("o resto da divisao de %d por %d eh %d\n", a, b, res(a,b));
    printf("O somatorio de %d eh %d\n", a,form(a));
    /*usei a variavel aux que corresponde ao mdc(a,b)*/
    printf("O mmc de %d e %d eh %d\n", a,b, mmc(a,b, aux));
    printf("O resultado inteiro da divisão de %d por %d eh %d\n", a,b, divi(a,b));
    printf("A raiz quadrada de %g eh %g\n", x, raiz(x,chute));
    printf("A soma dos digitos de %d eh %d\n", a, dig(a));
    printf("Resultado de %d elevado a %d eh %d\n", a, b, poten(a,b));
    /*estou usando uma variavel (d) que se inicia com valor 0, para auxiliar na contagem crescente*/
    printf("\nÉ a sequencia decrescente de %d até %d\n", a, cres(a,d));
    
    return 0; 
}


