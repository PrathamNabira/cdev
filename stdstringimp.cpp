#include <cstring>
#include <iostream>
#include <ostream>
class string{
  private:
    char* m_buffer;
    int m_size;
  public:
    string(const char* string){
      m_size = strlen(string);
      m_buffer = new char[m_size+1];
      memcpy(m_buffer, string, m_size);
      m_buffer[m_size]=0;
    }
    string(const string& other):m_size(other.m_size){
      m_buffer = new char[m_size+1];
      memcpy(m_buffer, other.m_buffer, m_size+1);
    }

    // string(const string& other):m_buffer(other.m_buffer),m_size(other.m_size){};//copy constructor


    // string(const string& other){
    //   memcpy(this, &other, sizeof(string));
    // } // copy constructor

    // string(const string& other)= delete;
    ~string(){
      delete[] m_buffer;
    }
    char& operator[](unsigned int index){
      return m_buffer[index];
    }
    friend std::ostream& operator<<(std::ostream& stream, const string& string)
;
};

std::ostream& operator<<(std::ostream& stream, const string& string){
  stream<<string.m_buffer;
  return stream;
}

int main(){
  string String = "pratham";
  string second = String;
  second[3]='a';
  std::cout<<String<<std::endl;
  std::cout<<second<<std::endl;
}
