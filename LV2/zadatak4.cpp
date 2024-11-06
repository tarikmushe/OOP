#include <iostream>

namespace m {
int a = 20;
int b = a + 10;
} // namespace m

int main() {
  // prvi nacin
  // using namespace m;
  // std::cout << a << std::endl;

  // drugi nacin
  // std::cout << m::a;

  // treci nacin
  using m::a; // samo za varijablu a
  std::cout << a;
}
//namespace sadrzi samo definicije varijabli
