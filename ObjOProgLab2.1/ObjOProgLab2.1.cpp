// OOPLab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Literature {
public:
    Literature(){}
    ~Literature(){}
};
//class Book : public Literature {
//    
//public:
//    std::string* nameBook; // Название книги
//    int* yearOfRelease; // Дата выхода книги
//    int* numberOfPages; // Количество страниц
//
//    Book(/*string namebook, int yearOfRelease, int numberOfPages*/) :         
//        nameBook(new std::string),
//        yearOfRelease(new int),        
//        numberOfPages(new int) 
//    {
//        /*this->nameBook = namebook;
//        this->yearOfRelease = yearOfRelease;
//        this->numberOfPages = numberOfPages;*/
//
//    }
//
//    /*void fillDBLib362() override {
//
//    }*/
//    virtual ~Book(){
//        delete yearOfRelease, nameBook, numberOfPages;
//    }
//};
//class Brochures : public Literature{
//public:
//    int* yearOfRelease; // Дата выхода книги
//    std::string* nameBook; // Название книги
//    int* numberOfPages; // Количество страниц
//    Brochures() : yearOfRelease(new int),
//        nameBook(new std::string),
//        numberOfPages(new int) {
//    }
//    virtual ~Brochures() {
//        delete yearOfRelease, nameBook, numberOfPages;
//    }
//};
//class Newspapers : public Literature {
//public:
//    int* yearOfRelease; // Дата выхода книги
//    std::string* nameBook; // Название книги
//    int* numberOfPages; // Количество страниц
//    Newspapers() : yearOfRelease(new int),
//        nameBook(new std::string),
//        numberOfPages(new int) {
//    }
//    virtual ~Newspapers() {
//        delete yearOfRelease, nameBook, numberOfPages;
//    }
//};
//class Magazines : public Literature {
//public:
//    int* yearOfRelease; // Дата выхода книги
//    std::string* nameBook; // Название книги
//    int* numberOfPages; // Количество страниц
//    Magazines() : yearOfRelease(new int),
//        nameBook(new std::string),
//        numberOfPages(new int) {
//    }
//    virtual ~Magazines() {
//        delete yearOfRelease, nameBook, numberOfPages;
//    }
//};
class Lib362{
    std::string nameBook; // Название книги
    int yearOfRelease; // Дата выхода книги
    int numberOfPages; // Количество страниц
    string Library362 = "Lib362.txt";
    string InpText; // Переменная для временного хранения строк из файла
    ifstream fin;
    ofstream fout;
public:
    Lib362(string InputFileBD) {
        fout.exceptions(ofstream::badbit | ofstream::failbit);
        try {
            fout.open("Lib362.txt");
        }
        catch (const ofstream::failure& ex) {
            cout << ex.what() << endl;
            cout << ex.code() << endl;
            cout << "Ошибка открытия файла Lib362.txt" << endl;
        }
        fin.exceptions(ifstream::badbit | ifstream::failbit);
        try {
            fin.open(InputFileBD);
        }
        catch (const ifstream::failure& ex) {
            cout << ex.what() << endl;
            cout << ex.code() << endl;
            cout << "Ошибка открытия файла BD.txt" << endl;
        }
    }
    ~Lib362() {
        fin.close();
    }
};
class Lib112 {
    std::string nameBook; // Название книги
    int yearOfRelease; // Дата выхода книги
    int numberOfPages; // Количество страниц
    fstream fs;
public:
    Lib112(string InputFileBD) {
        fs.exceptions(fstream::badbit | fstream::failbit);
        try {
            fs.open("Lib112.txt", fstream::in | fstream::out);
        }
        catch (const fstream::failure& ex) {
            cout << ex.code() << endl;
            cout << ex.what() << endl;
            cout << "Ошибка открытия файла Lib112.txt" << endl;
        }
    }
};
void fillDBLibs(string InputFileBD, string &OutLib362, string &OutLib112) {
    
    int randNum;
    string InpText;
    ofstream fout112;
    ofstream fout362;
    ifstream fin;
    fin.open(InputFileBD);
    fout112.open(OutLib362);
    fout362.open(OutLib112);
    while (!fin.eof()) {
        srand(time(0));
        randNum = rand() % 3;
        switch (randNum) {
        case 0:
            InpText = "";
            getline(fin, InpText);
            fout112 << InpText << endl;
            break;
        case 1:
            InpText = "";
            getline(fin, InpText);
            fout362 << InpText << endl;
            break;
        case 2:
            InpText = "";
            getline(fin, InpText);
            fout112 << InpText << endl;
            fout362 << InpText << endl;
            break;
        default:
            break;
        }
    }
    fin.close();
    fout112.close();
    fout362.close();
    //int randCBook;
    //for (int i = 0; i < 10; i++) {
    //    
    //    randNum = rand() % 3;
    //    randCBook = rand() % 4;
    //    switch (randNum)
    //    {
    //    case 0:
    //        switch (randCBook)
    //        {
    //        case 0:
    //            /*Book bk("Book1", 1911, 2);*/
    //            db362.lb362.push_back(new Book);
    //            
    //            break;
    //        case 1:
    //            db362.lb362.push_back(new Brochures);
    //            break;
    //        case 2:
    //            db362.lb362.push_back(new Newspapers);
    //            break;
    //        case 3:
    //            db362.lb362.push_back(new Magazines);
    //            break;
    //        default:
    //            break;
    //        }
    //        break;
    //    case 1:
    //        switch (randCBook)
    //        {
    //        case 0:
    //            db112.lb112.push_back(new Book);
    //            break;
    //        case 1:
    //            db112.lb112.push_back(new Brochures);
    //            break;
    //        case 2:
    //            db112.lb112.push_back(new Newspapers);
    //            break;
    //        case 3:
    //            db112.lb112.push_back(new Magazines);
    //            break;
    //        default:
    //            break;
    //        }
    //        break;
    //    case 2:
    //        switch (randCBook)
    //        {
    //        case 0:
    //            db112.lb112.push_back(new Book);
    //            db362.lb362.push_back(new Book);
    //            break;
    //        case 1:
    //            db112.lb112.push_back(new Brochures);
    //            db362.lb362.push_back(new Brochures);
    //            break;
    //        case 2:
    //            db112.lb112.push_back(new Newspapers);
    //            db362.lb362.push_back(new Newspapers);
    //            break;
    //        case 3:
    //            db112.lb112.push_back(new Magazines);
    //            db362.lb362.push_back(new Magazines);
    //            break;
    //        default:
    //            break;
    //        }
    //        break;
    //    default:
    //        break;
    //    }
    //}
    
}
void PrintDB(string InputFileBD, string OutLib112, string OutLib362) {
    setlocale(LC_ALL, "ru");
    ifstream fin112;
    ifstream fin362;
    string InpText;
    fin112.open(OutLib112);
    fin362.open(OutLib362);
    cout << "Lib112" << endl;
    while (!fin112.eof()) {
        InpText = "";
        getline(fin112, InpText);
        cout << InpText << endl;
    }
    cout << "\nLib362" << endl;
    while (!fin362.eof()) {
        InpText = "";
        getline(fin362, InpText);
        cout << InpText << endl;
    }
}

int main()
{
    string InputDataBase = "BD.txt";
    string Library112 = "Lib112.txt";
    
    fillDBLibs(InputDataBase, Library112, Library362);
    PrintDB(InputDataBase, Library112, Library362);
  
    //fillDBLib362(Bk.nameBook, Bk.nameBook , Bk.numberOfPages);
    //map <T, vector <int>> lib362;
    
    return 0;
}


