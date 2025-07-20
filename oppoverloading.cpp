#include <iostream>
#include <ostream>

struct vector2{
  public:
    float x,y;
    vector2(float x, float y):x(x),y(y){};
    vector2 operator+ (const vector2& other){
      return vector2(x+other.x,y+other.y);
    }
    bool operator==(const vector2& other){
      return x==other.x && y==other.y;
    }
};
std::ostream& operator<<(std::ostream& stream , const vector2& other){
  std::cout<<other.x<<", "<<other.y;
  return stream;
}
int main(){
  vector2 position(3.0f,4.0f);
  vector2 velosity(1.5f,2.0f);
  vector2 result = position+velosity;
  std::cout<<result.x<<result.y<<std::endl;
  std::cout<<result<<std::endl;
  std::cout<<(position==velosity);
}
