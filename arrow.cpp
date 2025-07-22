#include <iostream>

class Entity{
  public:
    int x;
    void print() const {
      std::cout<<"hello"<<std::endl;
    }
};
class scopedptr{
  private:
    Entity* m_obj;
  public:
    scopedptr(Entity* entity):m_obj(entity){};

    ~scopedptr(){
      delete m_obj;
    }
    Entity* operator->(){
      return m_obj;
    }
    const Entity* operator->()const{
      return m_obj;
    }
};
int main(){
  Entity e;
  e.print();
  Entity* ptr = &e;
  // Entity& entity = *ptr;
  // Entity.print();
  // (*ptr).print();
  ptr->print();
  ptr->x=2;
  const scopedptr entity = new Entity();
  entity->print();//(entity.operator->())->print();
}
