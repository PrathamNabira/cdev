#include <iostream>
extern int s_variable;
extern void function();
int main(){
  function();
  std::cout<<s_variable<<std::endl;
}
