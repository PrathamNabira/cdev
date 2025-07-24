#include <iostream>
#include <ostream>
#include <vector>

struct vertex {
  float x,y,z;
  vertex(float x, float y, float z):x(x),y(y),z(z){};
  vertex(const vertex& vertex):x(vertex.x),y(vertex.y),z(vertex.z){
    std::cout<<"compied"<<std::endl;
  };
};

std::ostream& operator<<(std::ostream& ostream , vertex& vertex){
  std::cout<<vertex.x<<", "<<vertex.y<<", "<<vertex.z;
  return ostream;
}

int main(){
  std::vector<vertex>vertices;
  vertices.reserve(3);
  vertices.emplace_back(1,2,3);
  vertices.emplace_back(4,5,6);
  vertices.emplace_back(7,8,9);
}
