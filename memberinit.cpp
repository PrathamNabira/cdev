#include <iostream>
#include <string>
class example{
  public:
    example(){
      std::cout<<"example created!"<<std::endl;
    }
    example(int x){
      std::cout<<"example created with "<< x <<'!'<<std::endl;
    }
};

class entity{
  private:
    std::string m_name;
    example m_example;
  public:
    // entity(int a):m_example(example(a)){}
    entity(int a):m_example(a){}
    entity():m_name("unknown"){};
    entity(const std::string& name):m_name(name){
    }
    const std::string& getname(){return m_name;}
};

int main(){
  entity e0(8);
  std::cout<<e0.getname()<<std::endl; 
}
