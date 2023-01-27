//exercicio 01
#include<stdio.h>
//crie arquivo matrizez.txt

int main() {
    FILE* f1 = fopen("matrizes.txt", "r+t");
    if(f1==NULL) {
        printf("Nao foi possivel abrir o arquivo!");
        return(1);
    }
    int linhas, colunas;
    fscanf(f1, "%d %d", &linhas, &colunas);
    float matriz[linhas][colunas];
    for(int i = 0; i < linhas; ++i) {
        for(int j = 0; j < colunas; ++j) {
            fscanf(f1, "%f", &matriz[i][j]);
        }
    }
    fclose(f1);
    for(int i = 0; i < linhas; ++i) {
        for(int j = 0; j < colunas; ++j) {
            printf("%f\t", matriz[i][j]);
        }
        printf("\n");
    }
    return(0);
}
//exercicio 02
#include<stdio.h>

float media_matriz(int n, float mat[][100]) {
    float soma = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            soma += mat[i][j];
        }
    }
    return(soma/(n*n));
}

int main() {
    float mat[100][100] = {{1,2},{3,4}}; 
    printf("%f", media_matriz(2, mat));
    return(0);
}
//exercicio 03
#include<stdio.h>

void identidade(int n, float A[][100]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i == j) A[i][j] = 1;
            else A[i][j] = 0;
            printf("%f\t", A[i][j]);
        }
        printf("\n");
    }
}
//exercicio 04
#include<stdio.h>
//crie matrizes.txt

void transposta(int n, float A[][100], float T[][100]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            T[i][j] = A[j][i];
            printf("%f\t", T[i][j]);
        }
        printf("\n");
    }
}

int main() {
    FILE* f1 = fopen("matrizes.txt", "r+t");
    if(f1==NULL) {
        printf("Nao foi possivel abrir o arquivo!");
        return(1);
    }
    int linhas, colunas;
    fscanf(f1, "%d %d", &linhas, &colunas);
    float matriz[100][100];
    for(int i = 0; i < linhas; ++i) {
        for(int j = 0; j < colunas; ++j) {
            fscanf(f1, "%f", &matriz[i][j]);
        }
    }
    fclose(f1);
    float transposed[100][100];
    transposta(linhas, matriz, transposed);
    return(0);
}
//exercicio 05
#include<stdio.h>
#include<stdbool.h>

//crie matrizes.txt

bool simetrica(int n, float A[][100]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(A[i][j] != A[j][i]) return(false);
        }
    }
    return(true);
}

int main() {
    FILE* f1 = fopen("matrizes.txt", "r+t");
    if(f1==NULL) {
        printf("Nao foi possivel abrir o arquivo!");
        return(1);
    }
    int linhas, colunas;
    fscanf(f1, "%d %d", &linhas, &colunas);
    float matriz[100][100];
    for(int i = 0; i < linhas; ++i) {
        for(int j = 0; j < colunas; ++j) {
            fscanf(f1, "%f", &matriz[i][j]);
        }
    }
    fclose(f1);
    printf("%d", simetrica(linhas, matriz));
    return(0);
}
//exercicio 06
#include<stdio.h>
//cria matrizes.txt

void soma_matriz(int n, float A[][100], float B[][100], float S[][100]) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            S[i][j] = A[i][j] + B[i][j];
            printf("%f\t", S[i][j]);
        }
        printf("\n");
    }
}

int main() {
    FILE* f1 = fopen("matrizes.txt", "r+t");
    if(f1==NULL) {
        printf("Nao foi possivel abrir o arquivo!");
        return(1);
    }
    int linhas, colunas;
    fscanf(f1, "%d %d", &linhas, &colunas);
    float matriz[100][100];
    for(int i = 0; i < linhas; ++i) {
        for(int j = 0; j < colunas; ++j) {
            fscanf(f1, "%f", &matriz[i][j]);
        }
    }
    fclose(f1);
    soma_matriz(linhas, matriz, matriz, matriz);
    return(0);
}
//exercicio 07
#include<stdio.h>
#include<stdbool.h>
//crie matrizes.txt

void mult_matriz(int n, float A[][100], float B[][100], float P[][100]) {
    for(int i = 0; i < n; ++i) {
        float sum = 0;
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                P[i][j] += A[i][k] * B[k][j];
            }
            printf("%f\t", P[i][j]);
        }
        printf("\n");
    }
}

int main() {
    FILE* f1 = fopen("matrizes.txt", "r+t");
    if(f1==NULL) {
        printf("Nao foi possivel abrir o arquivo!");
        return(1);
    }
    int linhas, colunas;
    fscanf(f1, "%d %d", &linhas, &colunas);
    float matriz[100][100];
    for(int i = 0; i < linhas; ++i) {
        for(int j = 0; j < colunas; ++j) {
            fscanf(f1, "%f", &matriz[i][j]);
        }
    }
    fclose(f1);
    float matriz2[100][100] = {
        {1, -2, 2},
        {0, 5, 7},
        {4, 1, 6}
    };
    float produto[100][100];
    mult_matriz(linhas, matriz, matriz2, produto);
    return(0);
}