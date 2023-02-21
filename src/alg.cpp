// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
   if (value > 1) {
      for (uint64_t i = 2; i < value; i++)
          if (value % i == 0)
            return false;
          return true;
   }
   else
     return false;
}

uint64_t nPrime(uint64_t n) {
  uint64_t a = 2;
  uint64_t c = 1;
  while (c != n) {
    a++;
    if (checkPrime(a))
      c++;
  }
  return a;    
}


uint64_t nextPrime(uint64_t value) {
  uint64_t a = value + 1;
  while (checkPrime(a) != true) {
    a++;
  }
  return a;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t a, sum;
  sum = 0;
  for (a = 1; a < hbound; a++) {
    if (checkPrime(a))
      sum += a;
  }
  return sum;
}
