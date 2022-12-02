#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int p;
    cin >> p;
if (numeroprimo(p) == 0) {
    cout << "numero primo" << endl;
}
  else {
    cout << "numero non primo" << endl;
} 
  return 0;
}
