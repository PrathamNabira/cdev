#include <array>
#include <iostream>
class entity{
  public:
    static const int arraysize = 5;
    int another[arraysize];
    int* example= new int[5];
    entity(){
      for (int i=0; i<5; i++) example[i] = 2;
    }
};
int main(){
  entity e;
  std::cout<<&e<<std::endl;
  std::array<int, 5>newarray;
  std::cout<<newarray.size()<<std::endl;
  // int example[5];
  // example[0] = 1;
  // example[4] = 5;
  // example[-2] = 5;
  // for (int i=0; i<5; i++) example[i] = 2;
  // int* ptr = example;
  // example[2] = 5;
  // std::cout<<example[2]<<std::endl;
  // *(ptr+2) = 6;
  // std::cout<<example[2]<<std::endl;
  // *(int*)((char*)ptr+8) = 7;
  // std::cout<<example[2]<<std::endl;
  // int* another = new int[5];
  // for (int i=0; i<5; i++) another[i] = 2;
  // std::cout<<another[0]<<std::endl;
  // std::cout<<another[1]<<std::endl;
  // std::cout<<another[2]<<std::endl;
  // std::cout<<another[3]<<std::endl;
  // std::cout<<another[4]<<std::endl;
  // delete[] another;
  // std::cout<<example[0]<<std::endl;
  // std::cout<<example[-2]<<std::endl;
  // std::cout<<example[-4]<<std::endl;
  // std::cout<<example[5]<<std::endl;
  // std::cout<<example<<std::endl;
  // std::cout<<*example<<std::endl;
}
