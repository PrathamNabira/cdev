#include <iostream>
#include <string>
static int s_level=1;
static int s_speed=2;
int main(){
  std::cout<<"enter the level:";
  std::cin>>s_level;
  s_speed = s_level>5 && s_level<100? s_level>10? 15:10:5;
  // if (s_level>5) s_speed=10;
  // else s_speed=10;
  std::cout<<"my speed is "<<s_speed<<std::endl;
  std::string rank = s_level>10? "master":"beginner";
  std::cout<<"my rank is "<<rank<<std::endl;
}
