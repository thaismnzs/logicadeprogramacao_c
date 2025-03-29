#include <stdio.h>

main() {

  int n1, n2;
  int num;
  
  printf("Informe um número: ");
  scanf("%d", &num);
  
  n1 = 1;
  n2 = 1;
 
  while (n1 <= 6) {
        n2 = 1;
        while (n2 <= 6) {
            if (n1 + n2 == num) { 
                printf("%d %d\n", n1, n2);
            }
            n2++; 
        }
        n1++; 
    }
}