#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  double raio, A;
  scanf(" %lf", &raio);
  A = raio * raio * 3.14159;
  printf("A=%.4f\n", A);
  return 0;
}