#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
     /*no uso do programa, deve se usar ''.'' ao inves de '',' (exemplo: 1.5 ao inves de 1,5) */
     
     /* 1. Escreva um programa em C++ que resolva as seguintes expressões:
a) 3 + 4; b) 7/4; c) 3 elevado a 2; d) 5.3 * 2.1; e) 2 * 5 – 2; f) 2 + 2 * 5; g) (2 + 5) * 3; h sin(3.141502); i) sqrt(5); j) 1 + 2 + 3;
k) 1 * 2 * 3; l) (1 + 2 + 3) / 3.0; m) (2 + 4) * (3 – 1); n) (9 / 3) + (3 * 2); o) sin(4.5) + cos(3.7); p) log(2.3) – log(3.1);
q) log (7) + (log(7) * log(7) – cos(log(7))); r) (10.3 + 8.4)/50.3 - (10.3 + 8.4); s) (cos(0.8) + sin(0.8)) * (cos(0.8) – sin(0.8)); */
    
  printf("Questão 1\n\n");
  
    printf("A) 3+4 = %d\n", 3+4);
    printf("B) 7.0/4.0 = %g\n", 7.0/4.0);
    printf("C) 3 elevado ao quadrado = %g\n", pow(3,2));
    printf("D) 5.3*2.1 = %g\n", 5.3*2.1);
    printf("E) (2*5) - 2 = %d\n", (2*5) - 2);
    printf("F) 2 + (2*5) = %d\n", 2 + (2*5));
    printf("G) (2+5) * 3 = %d\n", (2+5) * 3);
    printf("H) sin(3.141502) = %g\n", sin(3.141502));
    printf("I) sqrt(5) = %g\n", sqrt(5));
    printf("J) 1+2+3 = %d\n", 1+2+3);
    printf("K) 1*2*3 = %d\n", 1*2*3);
    printf("L) (1+2+3) / 3.0 = %g\n", (1+2+3) / 3.0);
    printf("M) (2+4) * (3-1) = %d\n", (2+4) * (3-1));
    printf("N) (9/3) + (3*2) = %d\n", (9/3) + (3*2));
    printf("O) sin(4.5) + cos(3.7) = %g\n", sin(4.5) + cos(3.7));
    printf("P) log(2.3) - log(3.1) = %g\n", log(2.3) - log(3.1));
    printf("Q) log(7) + (log(7) * log(7) - cos(log(7))) = %g\n", log(7) + (log(7) * log(7) - cos(log(7))));
    printf("R) (10.3+8.4) / 50.3 - (10.3+8.4) = %g\n", (10.3+8.4) / 50.3 - (10.3+8.4)); 
    printf("S) (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)) = %g\n", (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)));
    
    
      /*2. Escreva um programa em C++ que lê quatro números reais do teclado (a, b, c e d) e exibe o resultado das seguintes expressões:
A) a + b; B) a/c; C) a2 (a elevado a 2); D) b * c; E) a * b – c; F) a + b * c; G) (a + b) * c; H) sin(a); I) sqrt(b); 
J) a + b + c; K) a * b * c; L) (a + b + c) / d; M) (a + b) * (a – d); N) (b / c) + (a * d); O) sin(b) + cos(c);
P) log(a) – log c; Q) log(a) + (log(b) * log(d) – cos(log(c))); R) (b + a)/c - (d + a); S) (cos(d) + sin(c)) * (cos(b) – sin(a));*/


float a=0, b=0, c=0, d=0;

 printf("\n\nQuestão 2\n");
 
printf("Digite o valor de a:"); 
scanf("%g", &a);

printf("Digite o valor de b:"); 
scanf("%g", &b);

printf("Digite o valor de c:"); 
scanf("%g", &c);

printf("Digite o valor de d:"); 
scanf("%g", &d);

    printf("\nA) a + b = %g\n", a+b);
    printf("B) a / c = %g\n", a/c);
    printf("C) a elevado ao quadrado = %g\n", pow(a,2));
    printf("D) b * c = %g\n", b*c);
    printf("E) (a * b) - c = %g\n", (a*b) - c);
    printf("F) a + (b*c) = %g\n", a + (b*c));
    printf("G) (a+b) * c = %g\n", (a+b) * c);
    printf("H) sin(a) = %g\n", sin(a));
    printf("I) sqrt(b) = %g\n", sqrt(b));
    printf("J) a+b+c = %g\n", a+b+c);
    printf("K) a*b*c = %g\n", a*b*c);
    printf("L) (a+b+c) / d = %g\n", (a+b+c) / d);
    printf("M) (a+b) * (a-d) = %g\n", (a+b) * (a-d));
    printf("N) (b/c) + (a*d) = %g\n", (b/c) + (a*d));
    printf("O) sin(b) + cos(c) = %g\n", sin(b) + cos(c));
    printf("P) log(a) - log(c) = %g\n", log(a) - log(c));
    printf("Q) log(a) + (log(b) * log(d) - cos(log(c))) = %g\n", log(a) + (log(b) * log(d) - cos(log(c))));
    printf("R) (b+a) / c - (d+a) = %g\n", (b+a) / c - (d+a)); 
    printf("S) (cos(d) + sin(c)) * (cos(b) - sin(a)) = %g\n", (cos(d) + sin(c)) * (cos(b) - sin(a)));
    
        /* 3. Escreva um programa em C++ que lê três números reais do teclado (a, b e c) e exibe o resultado das seguintes expressões:
a) Média: média de a, b e c.
b) Média ponderada: média ponderada de a, b e c onde a tem peso 3, b 4 e c 5.
c) Perímetro: perímetro de um círculo de raio a.
d) Área do círculo: área de um círculo de raio a.
e) Área do triângulo: área de um triângulo de base b e altura c.
f) Hipotenusa: hipotenusa de um triângulo retângulo, cujos lados conhecidos são b e c.
g) Raízes: raízes da equação do segundo grau definida por a.x2 + b.x + c.*/
    
float A=0, B=0, C=0;

 printf("\n\nQuestão 3\n");
 
printf("Digite o valor de a:"); 
scanf("%f", &A);

printf("Digite o valor de b:"); 
scanf("%f", &B);

printf("Digite o valor de c:"); 
scanf("%f", &C);

    printf("\nA) Média: média de a, b e c = %g\n", (A+B+C) / 3);
    printf("B) Média ponderada: média ponderada de a, b e c onde a tem peso 3, b 4 e c 5 = %g\n", ((A*3) + (B*4) + (C*5)) / (3+4+5));
    printf("C) Perímetro: perímetro de um círculo de raio a = %g\n", 2 * PI * A );
    printf("D) Área do círculo: área de um círculo de raio a = %g\n", PI * pow(A,2));
    printf("E) Área do triângulo: área de um triângulo de base b e altura c = %g\n", (B*C) / 2);
    printf("F) Hipotenusa: hipotenusa de um triângulo retângulo, cujos lados conhecidos são b e c = %g\n", sqrt(pow(B,2) + pow(C,2)));
    
    float x1, x2, delta = pow(B,2) -4*A*C;
    
    printf("G) Raízes: raízes da equação do segundo grau definida por a.x2 + b.x + c = x1 é %g e x2 é %g\n", x1 = (-B + sqrt (delta)) / (2*A), x2 =(-B - sqrt(delta))/(2*A));
    
    return 0;
}
