#include <iostream>
class entity{
  public:

  int x,y;
  void move(int xa, int ya){
    x += xa;
    y += ya;
    std::cout<<x<<", "<<y<<std::endl;
  }
};
class player:public entity{
  public:
    player(int a){
      x=a;
      y=a;
    }
  const char* name;
  void printname(){
    std::cout<<name<<std::endl;
  }
};
int main(){
  player player(2);
  player.name="alice";
  player.printname();
  player.move(12, 34);
    std::cout<<sizeof(player)<<std::endl;
    std::cout<<sizeof(entity)<<std::endl;
}
