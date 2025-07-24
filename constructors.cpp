#include <iostream>
class entity{
  public:
    int x , y;
    entity(int a , int b):x(a),y(b){
      std::cout<<"constructor was created"<<std::endl;
    }
    ~entity(){
      std::cout<<"distructor was created"<<std::endl;
    }
    void print(){
      std::cout<<x<<", "<<y<<std::endl;
    }
};

void function(){
  entity e(2,5);
  e.print();
}

int main(){
  function();
}
