#include <iostream>
#include <ostream>
#include <vector>

struct vertex {
  float x,y,z;
};

std::ostream& operator<<(std::ostream& ostream , vertex& vertex){
  std::cout<<vertex.x<<", "<<vertex.y<<", "<<vertex.z;
  return ostream;
}
void function(const std::vector<vertex>& vertices){
  
}

int main(){
  std::vector<vertex>vertices;
  function(vertices);
  vertices.push_back({1,2,3});
  vertices.push_back({3,4,5});
  for (int i =0 ; i<vertices.size(); i++) {
    std::cout<<vertices[i]<<std::endl;
  }
  vertices.erase(vertices.begin()+1);
  for (vertex& v : vertices) {
    std::cout<<v<<std::endl;
  }
}
