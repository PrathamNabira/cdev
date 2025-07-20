#include <iostream>
class entity{
  public:
    entity(){
      std::cout<<"entity constructed"<<std::endl;
    }
    ~entity(){
      std::cout<<"entity distructed"<<std::endl;
    }
};
class scopedptr{
  private:
    entity* m_ptr;
  public:
    scopedptr(entity* ptr):m_ptr(ptr){};
    ~scopedptr(){
      delete m_ptr;
    }
};
int main(){
  {
    entity* e = new entity();
    scopedptr e1 = new entity();
  }
}
