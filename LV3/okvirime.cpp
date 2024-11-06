#include <ostream>
#include <string>
#include <iostream>

int main(){
  std::string ime;
  std::cin >> ime;
  std::string prva (ime.size() + 15, '*');
  std::string druga ("** " + std::string(ime.size() + 9, ' ') + " **");
  std::string srednja ("** Pozdrav " + ime + "! **");

  std::cout << prva << std::endl << druga << std::endl << srednja << std::endl
    << druga << std::endl << prva << std::endl;
  
}
