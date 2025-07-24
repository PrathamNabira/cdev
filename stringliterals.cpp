#include <cstring>
#include <iostream>
int main(){
  const char* name = "jo\0hn";
std::cout<<strlen(name)<<std::endl;
const char* name0 = "pratham";
const wchar_t* name1= L"pratham";
const char16_t* name2= u"pratham";
const char32_t* name3= U"pratham";
}

