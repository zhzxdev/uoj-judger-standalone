#include <unistd.h>

#include <csignal>
#include <iostream>
#include <thread>
using namespace std;

int main() {
  raise(-1);
  return 0;
}
