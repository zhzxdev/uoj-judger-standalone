#include <unistd.h>

#include <iostream>
#include <thread>
using namespace std;

void t1() {
  while (true)
    ;
}

void t2() {
  sleep(2);
  execlp("/bin/echo", "/bin/echo", "233", NULL);
}

int main() {
  thread th1(t1);
  thread th2(t2);

  int x = 5;
  for (int i = 0; i < 10000000; i++) {
    x = x * x;
  }

  sleep(3);

  return 0;
}