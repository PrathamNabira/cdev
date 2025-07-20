#include <cstring>
#include <iostream>
#include <string>
void printstring(const std::string& f_string){
  std::cout<<"function call - "<<f_string<<std::endl;
}
int main(){
  const char* name = "Pratham123";
  std::cout<<name<<std::endl;
  char name2[8]={'P','r','a','t','h','a','m','\0'};
  std::cout<<name2<<std::endl;
  char name21[8]={'P','r','a','t','h','a','m',0};
  std::cout<<name21<<std::endl;
  char name3[7]={'P','r','a','t','h','a','m'};
  std::cout<<name3<<std::endl;
  std::cout<<"name call for 3rd letter:"<<name[3]<<std::endl;
  std::string name4 = std::string("Pratham")+" ashwin";
  name4 += " nabira";
  bool contains = name4.find("am")!=std::string::npos;
  std::cout<<contains<<std::endl;
  std::cout<<name4<<std::endl;
  std::cout<<strlen(name)<<std::endl;
  char* newname=new char[strlen(name)+1]();
  std::strcpy(newname,name);
  std::cout<<newname<<std::endl;
  newname[3]='p';
  std::cout<<newname<<std::endl;
  printstring(name);
  printstring(name2);
  printstring(name21);
  printstring(name3);
  printstring(name4);
  printstring(newname);
}
// #include <cstring>
// #include <iostream>
// #include <string>
// int main(){
//   const char* name = "Pratham";
//   std::cout<<name<<std::endl;
//   char name2[8]={'P','r','a','t','h','a','m','\0'};
//   std::cout<<name2<<std::endl;
//   char name21[8]={'P','r','a','t','h','a','m',0};
//   std::cout<<name21<<std::endl;
//   char name3[7]={'P','r','a','t','h','a','m'};
//   std::cout<<name3<<std::endl;
//   std::cout<<name[3]<<std::endl;
//   std::string name4 = std::string("Pratham")+" ashwin";
//   name4 += " nabira";
//   std::cout<<name4<<std::endl;
//   std::cout<<strlen(name)<<std::endl;
//   char* newname;
//   std::strcpy(newname,name);
//   std::cout<<newname<<std::endl;
//   newname[3]='p';
//   std::cout<<newname<<std::endl;
//
//   bool contains = name4.find("am")!=std::string::npos;
//   std::cout<<contains<<std::endl;
// }this code works fine
