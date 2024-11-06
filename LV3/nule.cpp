// program koji otklanja decimalne nule iza tacke
// unos: 5.54000, ispis: 5.54
// unos: 5.50000, ispis: 5  <- bez decimalne tacke
#include <iostream>
#include <string>

int main() {
  std::string broj;
  std::cin >> broj;

  for (int i = broj.size() - 1; i >= 0; i--) {
    if (broj[i] == '0') {
      broj[i] = ' ';
    }
    if (broj[i] != '0'){
      if(broj[i] == '.'){
        broj[i] = ' ';
      }
    }
  }
  std::cout << broj << std::endl;
}
