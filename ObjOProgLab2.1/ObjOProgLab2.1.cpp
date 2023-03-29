// OOPLab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <map>
using namespace std;


class Literature {
public:
    Literature(){}
    ~Literature(){}
};
class Book : public Literature {
    
public:
    std::string* nameBook; // Название книги
    int* yearOfRelease; // Дата выхода книги
    int* numberOfPages; // Количество страниц

    Book(/*string namebook, int yearOfRelease, int numberOfPages*/) :         
        nameBook(new std::string),
        yearOfRelease(new int),        
        numberOfPages(new int) 
    {
        /*this->nameBook = namebook;
        this->yearOfRelease = yearOfRelease;
        this->numberOfPages = numberOfPages;*/

    }

    /*void fillDBLib362() override {

    }*/
    virtual ~Book(){
        delete yearOfRelease, nameBook, numberOfPages;
    }
};
class Brochures : public Literature{
public:
    int* yearOfRelease; // Дата выхода книги
    std::string* nameBook; // Название книги
    int* numberOfPages; // Количество страниц
    Brochures() : yearOfRelease(new int),
        nameBook(new std::string),
        numberOfPages(new int) {
    }
    virtual ~Brochures() {
        delete yearOfRelease, nameBook, numberOfPages;
    }
};
class Newspapers : public Literature {
public:
    int* yearOfRelease; // Дата выхода книги
    std::string* nameBook; // Название книги
    int* numberOfPages; // Количество страниц
    Newspapers() : yearOfRelease(new int),
        nameBook(new std::string),
        numberOfPages(new int) {
    }
    virtual ~Newspapers() {
        delete yearOfRelease, nameBook, numberOfPages;
    }
};
class Magazines : public Literature {
public:
    int* yearOfRelease; // Дата выхода книги
    std::string* nameBook; // Название книги
    int* numberOfPages; // Количество страниц
    Magazines() : yearOfRelease(new int),
        nameBook(new std::string),
        numberOfPages(new int) {
    }
    virtual ~Magazines() {
        delete yearOfRelease, nameBook, numberOfPages;
    }
};
class Lib362 {
public:
    vector<Literature*> lb362;
    map <string, vector<Literature>> mlb362;
    //virtual void fillDBLib362() = 0;
};
class Lib112 {
public:
    vector<Literature*> lb112;
    map <string, Literature* []> mlb362;
};
void fillDBLibs(Lib362 &db362, Lib112 &db112) {
    srand(time(NULL));
    int randNum;
    int randCBook;
    for (int i = 0; i < 10; i++) {
        
        randNum = rand() % 3;
        randCBook = rand() % 4;
        switch (randNum)
        {
        case 0:
            switch (randCBook)
            {
            case 0:
                /*Book bk("Book1", 1911, 2);*/
                db362.lb362.push_back(new Book);
                
                break;
            case 1:
                db362.lb362.push_back(new Brochures);
                break;
            case 2:
                db362.lb362.push_back(new Newspapers);
                break;
            case 3:
                db362.lb362.push_back(new Magazines);
                break;
            default:
                break;
            }
            break;
        case 1:
            switch (randCBook)
            {
            case 0:
                db112.lb112.push_back(new Book);
                break;
            case 1:
                db112.lb112.push_back(new Brochures);
                break;
            case 2:
                db112.lb112.push_back(new Newspapers);
                break;
            case 3:
                db112.lb112.push_back(new Magazines);
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (randCBook)
            {
            case 0:
                db112.lb112.push_back(new Book);
                db362.lb362.push_back(new Book);
                break;
            case 1:
                db112.lb112.push_back(new Brochures);
                db362.lb362.push_back(new Brochures);
                break;
            case 2:
                db112.lb112.push_back(new Newspapers);
                db362.lb362.push_back(new Newspapers);
                break;
            case 3:
                db112.lb112.push_back(new Magazines);
                db362.lb362.push_back(new Magazines);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }
    
}
void PrintDB(Lib362 db362, Lib112 db112) {
    cout << "Lib362" << endl;
    for (int i = 0; i < db362.lb362.size(); i++) {
        cout << db362.lb362[i] << endl;
    }
    cout << "\nLib112" << endl;
    for (int i = 0; i < db112.lb112.size(); i++) {
        cout << db112.lb112[i] << endl;
    }
}

int main()
{
    Lib362 db362;
    Lib112 db112;
    fillDBLibs(db362, db112);
    PrintDB(db362, db112);
    db112.lb112[0];
    //fillDBLib362(Bk.nameBook, Bk.nameBook , Bk.numberOfPages);
    //map <T, vector <int>> lib362;
    
    return 0;
}


