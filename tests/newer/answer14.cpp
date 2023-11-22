#pragma GCC optimize("O0")
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < (1 << 5); i++) new int[1 << 20]();
  return 0;
}
