#include <iostream>
#include <ostream>
class entity{
  public:
    int x , y;
    entity(int x , int y){
      this->x=x;
      (*this).y=y;
    }
};

std::ostream& operator<<(std::ostream& stream , entity& e){
  std::cout<<e.x<<", "<<e.y;
  return stream;
}

int main(){
  entity e(1,2);
  std::cout<<e<<std::endl;
}
