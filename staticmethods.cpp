#include <iostream>
struct entity{
  int x,y;
  static void print(int x , int y){
    std::cout<<x<<","<<y<<std::endl;
  }
};
int main(){
  int x=2,y=3;
  entity e;
  e.x=23;
  e.y=12;
  entity e1;
  e1.x=11;
  e1.y=88;
  entity::print(x,y);
  entity::print(x,y);
}
