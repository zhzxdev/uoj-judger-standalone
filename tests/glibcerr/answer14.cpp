#include <unistd.h>

#include <csignal>
#include <cstring>
#include <iostream>
#include <thread>
using namespace std;

int main() {
  int *p = new int[500];
  p += 10;
  delete[] p;
  return 0;
}
