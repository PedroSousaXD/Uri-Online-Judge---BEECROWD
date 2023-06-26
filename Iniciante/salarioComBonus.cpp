#include <iostream>
 
using namespace std;
 
int main() {
  
  char name[50];
  double a, b, c;

  scanf("%s",&name);
  scanf("%lf", &a);
  scanf("%lf", &b);
  printf("TOTAL = R$ %.2f\n", c = a + ( b * 0.15 ));
  
  return 0;
}