#include <iostream>
int a = 20;
int main(){
  {
  int a = 5;
  }
  int a = 10;
  std::cout<< a <<std::endl; //ispisuje se 10
  }
