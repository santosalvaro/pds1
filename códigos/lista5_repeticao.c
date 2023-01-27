#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fat (int a){
  int f = 1;
  while (a > 1)
    {
      f = f * a;
      a = a - 1;
    }
  return f;
}

int mdc (int a, int b){
  int rest = a % b;
  while (rest != 0)
    {
      a = b;
      b = rest;
      rest = a % b;
    }
  return b;
}

int maxdc (int d, int c){
  int rest = d % c;
  while (rest != 0)
    {
      d = c;
      c = rest;
      rest = d % c;
    }
  return c;
}

int fib (int a){
  int q = 0, w = 1, e, i;
  if (a == 0)
    return q;
  for (i = 2; i <= a; i++)
    {
      e = q + w;
      q = w;
      w = e;
    }
  return w;
}

int primo (int a){
  int i;
  if (a < 2)
    return 0;
  for (i = 2; i < a; i++)
    {
      if (a % i == 0)
	return 0;
    }
  return 1;
}

int decres (int a){
  for (int i = a; i >= 0; i--){
    printf ("(%d)", i);
  }
}

int rest (int a, int b){
  while (a >= b)
    {
      a = a - b;
    }
}

int form (int a){
  int soma = 0;
  int i = 1;
  while (i <= a)
    {
      soma = soma + i;
      i++;
    }
  a = soma;
}

int mmc (int a, int b){

  int resto;

  do
    {
      resto = a % b;

      a = b;
      b = resto;

    }
  while (resto != 0);

  return (a * a) / a;
}

int divi (int a, int b){

  while (a >= b)
    {
      return a / b;
    }

}

int raiz (int a){
  int palpite = 1;

  while (!(a >= palpite * palpite && a < (palpite + 1) * (palpite + 1)))
    {
      palpite = (a / palpite + palpite) / 2;
    }
  return palpite;
}

int dig (int a){
  int digito, soma = 0;
  while (a > 0)
    {
      digito = a % 10;
      soma = soma + digito;
      a = a / 10;
    }
  a = soma;
}

int expo (int a, int b){
  while (a > 0 && b > 0)
    {
      return pow (a, b);
    }
}

int cres (int a){
  int i = 0, ordem;

  if (0 <= a)
    ordem = 1;
  else
    ordem = -1;


  for (i = 0; i != a + ordem; i = i + ordem)
    {
      printf ("(%d)", i);
    }
  return 0;
}

int main (){
  int a, b, c, d;

  printf ("digite um valor para a:");
  scanf ("%d", &a);
  printf ("digite um valor para b:");
  scanf ("%d", &b);
  printf ("digite um valor para c:");
  scanf ("%d", &c);

  printf ("\nO fatorial de %d eh %d\n", a, fat (a));
  printf ("O mdc de %d e %d eh %d\n", a, b, mdc (a, b));
  d = mdc (a, b);
  printf ("O mdc3 de %d,%d e %d eh %d\n", a, b, c, maxdc (d, c));
  printf ("O %d(-C)simo) de Fibonacci eh %d\n", a, fib (a));
  printf ("O numero %d eh primo? %d\n", a, primo (a));
  printf ("A sequencia decrescente do numero %d\n", decres (a));
  printf ("O resto da divisao de %d por %d eh %d\n", a, b, rest (a, b));
  printf ("somatorio de %d eh %d\n", a, form (a));
  printf ("O mmc de %d e %d eh %d\n", a, b, mmc (a, b));
  printf ("O resultado inteiro da divisC#o de %d por %d eh %d\n", a, b, divi (a, b));
  printf ("A raiz quadrada de %d eh %d\n", a, raiz (a));
  printf ("A soma dos digitos de %d eh %d\n", a, dig (a));
  printf ("%d elevado à  %d eh %d\n", a, b, expo (a, b));
  printf ("A ordem crescente de %d", cres (a));

  return 0;
}
