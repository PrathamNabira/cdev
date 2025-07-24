#include <iostream>
class log{
  public:
    enum level:unsigned char{
      en_error=0,en_warning,en_info
    };
  private:
    level m_loglevel=en_info;
  public:
    void setlevel(level level){
       m_loglevel = level;
    }
    void error(const char* message){
      if (m_loglevel>=en_error) {
      std::cout<<"[error:]"<<message<<std::endl;
      }
    }
    void warn(const char* message){
      if (m_loglevel>=en_warning) {
      std::cout<<"[warning:]"<<message<<std::endl;
      }
    }
    void info(const char* message){
      if (m_loglevel>=en_info) {
      std::cout<<"[info:]"<<message<<std::endl;
      }
    }
};

int main(){
  log log;
  log.setlevel(log::en_info);
  log.error("hello!");
  log.warn("hello!");
  log.info("hello!");
}
