//exercicio 01
#include<stdio.h>

int primo(int x) {
    if(x == 0 || x == 1) return(0);
    for(int i = 2; i < x; ++i) if(x % i == 0) return(0);
    return(1);
}

int main() {
    int n;
    printf ("Digite a quatidade de primos desejavel:");
    scanf("%d", &n);

    FILE* f1 = fopen("primes.txt", "w+t");
    int primoconta = 0;
    int atualnume = 2;
    
    while(primoconta < n) {
        if (primo (atualnume)) {
            fprintf(f1, "%d\n", atualnume);
            ++primoconta;
        }
        ++atualnume;
    }
    
    fclose(f1);    
    
    return(0);
}

//exercicio 02
#include<stdio.h>

int primo (int x) {
    if(x == 0 || x == 1) return(0);
    for(int i = 2; i < x; ++i) if(x % i == 0) return(0);
    return(1);
}
//crie um arquivo naturais.txt
int main() {
    FILE* f1 = fopen("naturais.txt", "r+t");
    if(f1 == NULL) return(1);
    
    FILE* f2 = fopen("eh_primo.txt", "w+t");
    int n;
    
    fscanf(f1, "%d", &n);
    while(!feof(f1)) {
        fprintf(f2, "%d %s\n", n, primo(n) ? "é primo" : "não é primo");
        fscanf(f1, "%d", &n);
    }

    fclose(f1);
    fclose(f2);
    
    return(0);
}
//exercicio 03
#include<stdio.h>

int primo (int x) {
    if(x == 0 || x == 1) return(0);
    for(int i = 2; i < x; ++i) if(x % i == 0) return(0);
    return(1);
}
//crie um arquivo naturais.txt
int main() {
    FILE* f1 = fopen("naturais.txt", "r+t");
    if(f1 == NULL) return(1);
    
    FILE* f2 = fopen("primos.txt", "w+t");
    FILE* f3 = fopen("não_primos.txt", "w+t");
    int n;
    
    fscanf(f1, "%d", &n);
    while(!feof(f1)) {
        if(primo (n)) fprintf(f2, "%d\n", n);
        else fprintf(f3, "%d\n", n);
        fscanf(f1, "%d", &n);
    }
    
    fclose(f1);
    fclose(f2);
    fclose(f3);
    
    return(0);
}
//exercicio 04
#include<stdio.h>

float funcao(float x) {
    return(x*x - 5*x + 1);
}
//crie um arquivo reais.txt
int main() {
    FILE* f1 = fopen("reais.txt", "r+t");
    if(f1 == NULL) return(1);
    
    FILE* f2 = fopen("resultado.txt", "w+t");
    float n;
    
    fscanf(f1, "%f", &n);
    while(!feof(f1)) {
        fprintf(f2, "%f\n", funcao(n));
        fscanf(f1, "%f", &n);
    }

    fclose(f1);
    fclose(f2);
    
    return(0);
}
//exercicio 05
#include<stdio.h>
#include<math.h>

float funcao(float a, float b, float c, float d, float x) {
    return(a*pow(x,3) + b*pow(x,2) + c*x + d);
}
//crie um arquivo reias.txt
int main() {
    float a, b, c, d;
    printf("Escreva quatro numeros:");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    
    FILE* f1 = fopen("reais.txt", "r+t");
    if(f1 == NULL) return(1);
    
    FILE* f2 = fopen("resultado.txt", "w+t");
    float x;
    
    fscanf(f1, "%f", &x);
    while(!feof(f1)) {
        fprintf(f2, "%f\n", funcao(a, b, c, d, x));
        fscanf(f1, "%f", &x);
    }
    
    fclose(f1);
    fclose(f2);
    
    return(0);
}