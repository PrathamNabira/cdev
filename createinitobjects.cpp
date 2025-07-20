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
  Entity* heapentity=new Entity("john");
  Entity stackentity("pratham");
  Entity** e=&heapentity;
  std::cout<<heapentity->getname()<<std::endl;
}
