#include <iostream> 
 
class Abstract 
{ 
  public: 
    virtual void pure_virtual() = 0; 
}; 
 
void Abstract::pure_virtual() // <<<<< 
{ 
  std::cout << "I am Abstract::pure_virtual()\n"; 
} 
  
class Concrete : public Abstract 
{ 
  public: 
    void pure_virtual() override {} 
}; 
 
int main() 
{ 
  Concrete c; 
  c.Abstract::pure_virtual(); 
} 

