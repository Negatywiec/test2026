#include <iostream>
#include <string>
#include <random>

using namespace std;
int randomizer(int a, int b) {
  random_device rd;
  mt19973 engine(rd());
  uniform_int_distribution<int>ran(a, b);
  return ran(engine);
}


int main() {
  setlocale(LC_CTYPE, "Polish");

  cout << randomizer(2, 8) << "fin";
  
  return 0;
}
