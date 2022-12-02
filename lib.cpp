#include <iostream>
#include "lib.h"
using namespace std;

bool numeroprimo (int n) {
  int i=1, x;
  bool risultato;
  if (n>1){
    do {
      i++;
      x = n%1;
    }
    while (x!=0);
    if (n == 1) {
        risultato=0;
        return risultato;
    }
    else {
      risultato =1;
      return risultato;
    }
  }
}
