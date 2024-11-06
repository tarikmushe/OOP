#include <iostream>
int main(){
  int a;
  std::cout << "Unesite broj\n";
  std::cin >> a;
  if (a %2 ==0){
    std::cout <<"Broj je paran\n";}
  else{
  std::cout << "Broj je neparan\n";}
  
  if (a%3==0 && a%5==0){
      std::cout<<"Broj je djeljiv i sa 3 i sa 5\n";
  }
  else if (a%3==0){
      std::cout<<"Broj je djeljiv sa 3\n";
  }
  else if (a%5==0){
      std::cout<<"Broj je djeljiv sa 5\n";
  }
  else{
    std::cout<<"Broj nije djeljiv ni sa 3 ni sa 5\n";
  }
}
