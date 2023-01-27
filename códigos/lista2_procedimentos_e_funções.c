#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

 float media (float a, float b, float c){
     return ((a+b+c)/3);
 }
 
 float mediaponderada (float a, float b, float c){
     return (((a*3) + (b*4) + (c*5)) / (3+4+5));
 }
 
 float perimetro ( float r){
     return (2 * PI * r);
 }
 
 float areadocirculo (float r){
     return (PI * pow(r,2));
 }
 
 float areadotriangulo( float b, float c){
     return ((b*c) / 2);
 }
 
 float areadacaixa (float b, float a, float c){
     return (2 * ((b * a) + (c * a) + (b * c)));
}
     
 float volumedacaixa(float a, float b, float c){
     return  (a * b * c);
 }
 
 float areadocilindro (float r, float h){
     return ((2 * PI * pow(r,2)) + (2 * PI * r * h));
 }
 
 float volumedocilindro (float r, float h){
     return ((PI * pow(r,2) * h));
 }
 
 float hipotenusa(float b, float c){
     return (sqrt(pow(b,2) + pow(c,2)));
 }
 
float raizpositiva (float a, float b, float delta){
    return ((-b + sqrt (delta))/ (2 * a));
}

int main(){
    float a, b, c;
    
    printf("Questão 1\n");
 
printf("Digite o valor de a:"); 
scanf("%g", &a);

printf("Digite o valor de b:"); 
scanf("%g", &b);

printf("Digite o valor de c:"); 
scanf("%g", &c);
 
  printf("\nA) Média: média de a, b e c = %g\n", media (a,b,c));
  printf("B) Média ponderada: média ponderada de a, b e c onde a tem peso 3, b 4 e c 5 = %g\n", mediaponderada (a,b,c));
  printf("C) Perímetro: perímetro de um círculo de raio a = %g\n", perimetro (a));
  printf("D) Área do círculo: área de um círculo de raio a = %g\n", areadocirculo (a));
  printf("E) Área do triângulo: área de um triângulo de base b e altura c = %g\n", areadotriangulo (b,c));
  printf("F) Área da caixa: calcula a área de uma caixa de dimensões a, b e c = %g\n", areadacaixa (a,b,c));
  printf("G) Volume da caixa: calcula o volume de uma caixa de dimensões a, b e c = %g\n", volumedacaixa (a,b,c));
  printf("H) Área do cilindro: calcula a área de um cilindro de raio r e altura h = %g\n", areadocilindro (a,b));
  printf("I) Volume do cilindro: calcula o volume de um cilindro de raio r e altura h = %g\n", volumedocilindro (a,b));
  printf("J) Hipotenusa: hipotenusa de um triângulo retângulo, cujos lados conhecidos são b e c = %g\n", hipotenusa (b,c) );
   
    float delta = pow(b,2) -4 * a * c;
   
  printf("K) Raiz positiva: calcula a raiz positiva da equação do segundo grau definida por a.x2+b.x+c = %g\n", raizpositiva (a,b,delta));
   
  return 0;
}
