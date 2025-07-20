#include <cstdlib>
#include <iostream>
#include <string>
using  string = std::string;
class Entity {
  private:
    string m_name;
  public:
    Entity():m_name("unknown"){}
    Entity(const string& name):m_name(name){}
    const string& getname(){return m_name;}
};
int main(){
  int a = 2;
  int* b = new int[10];
  Entity* e = new Entity[10];
  Entity* e3= new(b) Entity;
  Entity* e1 = new Entity();
  Entity* e2 = (Entity*)(malloc(sizeof(Entity)));//no consturctor called
  free(e);// no destructor called
  delete e1;
  delete e2;
  delete [] e;
}
