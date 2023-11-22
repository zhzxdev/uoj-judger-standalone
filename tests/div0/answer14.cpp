#include <unistd.h>

#include <csignal>
#include <iostream>
#include <thread>
using namespace std;

int main() {
  cout << 0 / 0 << endl;
  return 0;
}
