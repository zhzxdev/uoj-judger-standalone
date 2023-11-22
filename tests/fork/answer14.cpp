#include <unistd.h>

#include <iostream>
using namespace std;

int main() {
  fork();
  cout << "hello world!" << endl;
  return 0;
}
