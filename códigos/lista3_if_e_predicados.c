#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float max (float a, float b, float c){
    if (a>b && a>c) return (a);
    else if (b>c) return (b);
    else return (c); /*não precisaria dos "else", apenas os "if", porém se estivessemos usando o "printf" precisaria dos else.*/
}

float min (float a, float b, float c){
    if (a<b && a<c) return (a);
    else if (b<c) return (b);
    else return (c); /*também não precisaria do "else"*/
}

int par(int x){
    if (x%2==0) return(1);
    else return(0);
}

int dentro (float x, float y, float z){
    if (x>=y && x<=z) return(1);
    else return (0);
}

int fora (int x, int y, int z){
    if(x<y || x>z) return (1);
    return (0);
}

int bissexto(int x){
    if(x%400==0 || x%4==0) return(1);
    else return(0);
}

int main()
{
    float x,y,z;
    
    printf("Digite um valor para x:");
    scanf("%g", &x);
    printf("Digite um valor para y:");
    scanf("%g", &y);
    printf("Digite um valor para z:");
    scanf("%g", &z);
    
    printf("\nO maior dos três é:%g\n", max(x,y,z));
    printf("O menor dos três é:%g\n", min(x,y,z));
    printf("O valor de x é par:%i\n", par(x));/*0 para falso e 1 para verdade*/
    printf("O valor de x está dentro de y à z:%i\n", dentro(x,y,z));
    printf("O valor de x está fora de y à z:%i\n", fora(x,y,z));
    printf("O ano x é um ano bissexto:%i\n", bissexto(x));
    
    return 0;
}
