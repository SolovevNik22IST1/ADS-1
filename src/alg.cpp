// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (n > 1)
    {
      for (int i = 2; i < n; i++)
          if (n % i == 0)
              return false;
          return true;
    }
    else
        return false;
}

uint64_t nPrime(uint64_t n) {
    int  j, a, N;
 
    printf("Input N: ");
    scanf("%d", &N);
 
    a = 0;
    for (int p = 2;; p++)  {
        for (j = 2; j*j <= p; j++)    {
            if ((p % j) == 0)   break;
            if (j*j > p)   {
                a++;
                if (a == N)    {
                    printf("%d", p);
                    break;
                }
            }
        }
    }
    system("Pause");
    return 0;
}

uint64_t nextPrime(uint64_t value) {
int value;
  int a;
  printf("Input value");
  scanf("%d", &value);
  while(True){
    for (int i = value; i <value*value; i++){
          if (value % i == 0)
            break;
      a=i;
      break;
    }
    printf("%d", a);
}

uint64_t sumPrime(uint64_t hbound) {
  int end, sum;
  printf("Input end number");
  scanf("%d", &end);
  for (int i = 0; i < end; i++){
    sum+=i;
  }
  printf("%d", sum);
}
