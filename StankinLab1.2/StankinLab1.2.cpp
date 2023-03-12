#include <iostream>
#include <vector>
using namespace std;
class Parent {
public:
    string* str;
    Parent(){
        this->str = new string();
    }
    Parent(const Parent &other) {
        this->str = other.str;
    }
    virtual ~Parent() {
        delete str;
    }
    virtual Parent* Copy() {
        return new Parent(*this);
    }
};
class Child : public Parent{
public:
    Child() {}
    ~Child() override{}  
};
int main()
{
    setlocale(LC_ALL, "ru");
    vector<Parent*>* BD1 = new vector<Parent*>;
    vector<Parent*>* BD2 = new vector<Parent*>;
    cout << "Вывод вектора BD1: " << endl;
    for (int i = 0; i < 4; i++) {
        BD1->push_back((i % 2 == 0) ? new Parent() : new Child());
    }
    for (vector <Parent*> :: iterator it = BD1->begin(); it != BD1->end(); ++it) {
        cout << *it << endl;
    }
    cout << "Вывод вектора BD2: " << endl;
    for (int i = 0; i < BD1->size(); i++) {
        Parent *p = (*BD1)[i]->Copy();
        BD2->push_back(p);
    }
    for (auto it = BD2->begin(); it != BD2->end(); ++it) {
        cout << *it << endl;
    }
    delete BD2;
    BD1->~vector();
    return 0;
    _CrtDumpMemoryLeaks();
}

