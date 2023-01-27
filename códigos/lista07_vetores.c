//exercicio 01
#include<stdio.h>
//crie arquivo naturais.txt
int main() {
    FILE* f1 = fopen("naturais.txt", "r+t");
        if(f1 == NULL) {
             printf("erro ao abror arquivo\n");
            return(1);
        }

    int arr[1000];  
    int i = 0;
    fscanf(f1, "%d", &arr[i]);
    while(!feof(f1)) {
                ++i;
        fscanf(f1, "%d", &arr[i]);

    }
    fclose(f1);
    for(int j=0; j<i; j++)
    printf(" %d ", arr [j]);
    printf("\n");
    
    return(0);
}

//exercicio 02
#include<stdio.h>
//crie arquivo naturais.txt
float media(float* v, int n) {
    if(n <= 0) return(0);

    float s = 0;
    for(int i = 0; i < n; ++i) {
        s += v[i];
    }

    return(s/n);
}

int main() {
    FILE* f1 = fopen("naturais.txt", "r+t");
        if(f1 == NULL) {
             printf("erro ao abror arquivo\n");
            return(1);
        }
        
    int arr[1000];  
    int i = 0;
    fscanf(f1, "%f", &arr[i]);
    while(!feof(f1)) {
                ++i;
        fscanf(f1, "%f", &arr[i]);

    }
        
    fclose(f1);
    printf("a media eh %f\n ", media (arr,i));

    
    return(0);
}

//exercicio 03
#include<stdio.h>

float media(float* v, int n) {
    if(n <= 0) return(0);

    float s = 0;
    for(int i = 0; i < n; ++i) {
        s += v[i];
    }

    return(s/n);
}

float variancia(float* v, int n) {
    if(n <= 0) return(0);

    float av = media(v, n);

    float s = 0;
    for(int i = 0; i < n; ++i) {
        s += (v[i] - av) * (v[i] - av);
    }

    return(s/n);
}

int main() {
    float v[5] = {63,60,59,55,62};

    printf("%f", variancia(v, 5));

    return(0);
}

//exercicio 04
#include<stdio.h>
float maior(float* v, int n){
    float m=v[0];
    for(int i=0; i<n; i++){
        if(v[i] > m) m=v[i];
    }
    return(m);
}
//crie arquivo naturais.txt
int main() {
    FILE* f1 = fopen("naturais.txt", "r+t");
        if(f1 == NULL) {
             printf("erro ao abror arquivo\n");
            return(1);
        }

    int arr[1000];  
    int i = 0;
    fscanf(f1, "%f", &arr[i]);
    while(!feof(f1)) {
                ++i;
        fscanf(f1, "%f", &arr[i]);

    }
    fclose(f1);
    printf(" o maior eh %f\n", maior(arr,i));
    
    return(0);
}

//exercicio 05
#include<stdio.h>

int menor(int* v, int n) {
    if(n <= 0) return(0);

    int m = v[0];
    for(int i = 1; i < n; ++i) {
        if(v[i] < m) m = v[i];
    }

    return(m);
}

int main() {
    int v[5] = {42,60,-100,-60,-80};

    printf("%d", menor(v, 5));

    return(0);
}

//exercicio 06
#include<stdio.h>

int produtoescalar(int* u, int* v, int n) {
    if(n <= 0) return(0);

    int s = 0;
    for(int i = 0; i < n; ++i) {
        s += u[i] * v[i];
    }

    return(s);
}

int main() {
    int v[5] = {-1,-2,3};
    int u[5] = {4,0,-8};

    printf("%d", produtoescalar(v, u, 3));

    return(0);
}