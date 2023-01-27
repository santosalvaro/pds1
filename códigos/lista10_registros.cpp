#include<stdio.h>
#include<math.h>
#include<stdbool.h>

struct ponto {
    float x;
    float y;
    
    float distancia(ponto &p);
    void atribuir(float a, float b);
};

float ponto::distancia(ponto &p) {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
};

void ponto::atribuir(float a, float b) {
    x = a;
    y = b;
};

struct triangulo {
    ponto p1, p2, p3;

    float perimetro();
    float area();
    bool equilatero();
    bool semelhante(triangulo &t);
};

float triangulo::perimetro() {
    return p1.distancia(p2) + p1.distancia(p3) + p2.distancia(p3);
};

float triangulo::area() {
    return abs((p2.x*p3.y)-(p2.y*p3.x)-(p1.x*p3.y)+(p1.y*p3.x)+(p1.x*p2.y)-(p1.y*p2.x))/2;
};

bool triangulo::equilatero() {
    if(
        p1.distancia(p2) == p1.distancia(p3) && 
        p1.distancia(p2) == p2.distancia(p3)
    ) return true;
    return false;
};

bool triangulo::semelhante(triangulo &t) {
    if(
        t.p1.distancia(t.p2)/p1.distancia(p2) == t.p1.distancia(t.p3)/p1.distancia(p3) &&
        t.p1.distancia(t.p2)/p1.distancia(p2) == t.p2.distancia(t.p3)/p2.distancia(p3)
    ) return true;
    return false;
};

/*
.Considere um retângulo com os seguintes pontos:
. p1: superior esquerdo
. p2: superior direito
. p3: inferior esquerdo
. p4: inferior direito
. p1   p2
. p3   p4
*/
struct retangulo {
    ponto p1, p2, p3, p4;

    bool valido();
    float perimetro();
    float area();
    bool quadrado();
};

bool retangulo::valido() {
    if(
        p1.y == p2.y &&
        p3.y == p4.y &&
        p1.x == p3.x &&
        p2.x == p4.x
    ) return true;
    return false;
}

float retangulo::perimetro() {
    if (!valido()) {
        printf("O retangulo não e valido!");
        return 0;
    }
    return p1.distancia(p2) + p2.distancia(p4) + p4.distancia(p3) + p3.distancia(p1);
}

float retangulo::area() {
    if (!valido()) {
        printf("O retangulo não e valido!");
        return 0;
    }
    return p1.distancia(p2) * p1.distancia(p3);
}

bool retangulo::quadrado() {
    if (!valido()) {
        printf("O retangulo não e valido!");
        return false;
    }

    if (
        p1.distancia(p2) == p2.distancia(p4) &&
        p2.distancia(p4) == p4.distancia(p3) &&
        p4.distancia(p3) == p3.distancia(p1)
    ) return true;
    return false;
}

struct circunferencia {
    ponto centro;
    float raio;

    void atribuir(float n);
    float perimetro();
    float area();
    bool contem(ponto &p);
    bool contem(triangulo &t);
    bool contem(retangulo &r);
    bool pertence(ponto &r);
    bool circunscrita(triangulo &t);
    bool circunscrita(retangulo &r);
};

void circunferencia::atribuir(float n) {
    raio = n;
}

float circunferencia::perimetro() {
    return 2*3.14*raio;
}

float circunferencia::area() {
    return 3.14*pow(raio, 2);
}

bool circunferencia::contem(ponto &p) {
    if (centro.distancia(p) <= raio) return true;
    return false;
}

bool circunferencia::contem(triangulo &t) {
    if (
        centro.distancia(t.p1) <= raio &&
        centro.distancia(t.p2) <= raio &&
        centro.distancia(t.p3) <= raio
    ) return true;
    return false;
}

bool circunferencia::contem(retangulo &r) {
    if (
        centro.distancia(r.p1) <= raio &&
        centro.distancia(r.p2) <= raio &&
        centro.distancia(r.p3) <= raio &&
        centro.distancia(r.p4) <= raio
    ) return true;
    return false;
}

bool circunferencia::pertence(ponto &p) {
    if (centro.distancia(p) == raio) return true;
    return false;
}

bool circunferencia::circunscrita(triangulo &t) {
    if (
        centro.distancia(t.p1) == raio &&
        centro.distancia(t.p2) == raio &&
        centro.distancia(t.p3) == raio
    ) return true;
    return false;
}

bool circunferencia::circunscrita(retangulo &r) {
    if (
        centro.distancia(r.p1) == raio &&
        centro.distancia(r.p2) == raio &&
        centro.distancia(r.p3) == raio &&
        centro.distancia(r.p4) == raio
    ) return true;
    return false;
}


int main () {
    circunferencia c;
    c.centro.atribuir(0, 5);
    c.atribuir(5);

    ponto p;
    p.atribuir(-5, 5);

    triangulo t;
    t.p1.atribuir(0, 1);
    t.p2.atribuir(1, 1);
    t.p3.atribuir(0, 0);

    retangulo r;
    r.p1.atribuir(-1, 5);
    r.p2.atribuir(0, 5);
    r.p3.atribuir(-1, 11);
    r.p4.atribuir(0, 11);

    printf("%f\n", c.perimetro());
    printf("%f\n", c.area());
    printf("%d\n", c.contem(p));
    printf("%d\n", c.contem(t));
    printf("%d\n", c.contem(r));

    return 0;
}