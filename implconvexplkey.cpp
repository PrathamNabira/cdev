#include <iostream>
#include <string>
class Entity{
  private:
    std::string m_name;
    int m_age;
  public:
    Entity(const std::string& name):m_name(name),m_age(-1){};
    explicit Entity(const int age):m_name("unknown"),m_age(age){};
};
void entityprint(const Entity& entity){}
int main(){
  // entityprint(20);
  entityprint(std::string("Pratham"));
  // Entity a=22;
  // Entity a(22);
  // Entity a = (Entity)22;
  Entity a = Entity(22);
  Entity b= std::string("Pratham");
}
