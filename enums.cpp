#include <iostream>
enum example:char{
  A,B,C
};

int main(){
  example value = A;
  if (value == A) {
    std::cout<<A<<std::endl;
  }
}
