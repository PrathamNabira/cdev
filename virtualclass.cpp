#include <iostream>
#include <string>
class printable{
  public:
  virtual std::string printclassname()=0;
};
class entity:public printable{
  public:
    virtual std::string getname()=0;
    std::string printclassname()override{
      return "entity";
    }
};
class player : public entity{
  private:
    std::string m_playername;
  public:
    player(const std::string& playername):m_playername(playername){}
    std::string getname()override{return m_playername;}
    std::string printclassname()override{
      return "player";
    }
};
class A:public printable{
    std::string printclassname()override{
      return "A";
    }
};
void printname(entity* entity) {
  std::cout<<entity->getname()<<std::endl;
}
void print(printable* printable){
  std::cout<<printable->printclassname()<<std::endl;
}
int main(){
  entity* e = new player("grayson");
  printname(e);
  player* p = new player("john");
  printname(p);
  print(e);
  print(p);
  print(new A());
  // entity* e = new entity();
  // std::cout<<e->getname()<<std::endl;
  // player* p = new player("john");
  // std::cout<<p->getname()<<std::endl;
  // entity* entity = p;
  // std::cout<<entity->getname()<<std::endl;
  //------------------------------------------------
  // entity e;
  // std::cout<<e.getname()<<std::endl;
  // player p("victorvaughnn");
  // std::cout<<p.getname()<<std::endl;
}
