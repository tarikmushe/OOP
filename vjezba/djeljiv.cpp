#include <iostream>
int main () {
  int broj;
  std::cin >> broj;
  if (broj == 0){
    return 0;
  }else if (broj % 3 == 0 && broj % 5 == 0){
    std::cout << "Djeljiv i sa 3 i sa 5\n";
  }else if (broj % 3 == 0){
    std::cout << "Djeljiv sa 3\n";
  }else if (broj % 5 == 0) {
    std::cout << "Djeljiv sa 5\n";
  }else {
    std::cout << "Nije djeljiv ni sa 3 ni sa 5\n";
  }
}
