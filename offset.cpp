#include <iostream>
struct vector3{
  float x,y,z;
};

int main(){
  int offset = (int)&((vector3*)nullptr)->x;
  std::cout<<offset<<std::endl;
}
