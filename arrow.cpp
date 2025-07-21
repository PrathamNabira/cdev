#include <iostream>

class entity{
  public:
    int x;
    void print(){
      std::cout<<"hello"<<std::endl;
    }
};
class scopedptr{
  private:
    entity* m_obj;
  public:
    scopedptr(entity* entity):m_obj(entity){};

    ~scopedptr(){
      delete m_obj;
    }
};
int main(){
  entity e;
  e.print();
  entity* ptr = &e;
  // entity& entity = *ptr;
  // entity.print();
  // (*ptr).print();
  ptr->print();
  ptr->x=2;
}
