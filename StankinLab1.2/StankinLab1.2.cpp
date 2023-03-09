#include <iostream>
#include <vector>

using namespace std;
class Parent {
    std::string *str;
public:
    Parent(){
        str = new string;
    }
    ~Parent() {
        delete str;
    }
};
class Child : public Parent{
    Child();
    ~Child(){}
};

int main()
{
    vector <Parent> BD1;
}

