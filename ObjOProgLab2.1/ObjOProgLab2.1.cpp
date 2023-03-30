// OOPLab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Lib362{
    std::string nameBook;   // Название книги
    int yearOfRelease;      // Дата выхода книги
    int numberOfPages;      // Количество страниц
    string typeBook;        // Тип книги
    
    string InpText; // Переменная для временного хранения строк из файла
    ifstream fin;
    ofstream fout;
    string InputFileBD;
public:
    string Library362 = "Lib362.txt";
    Lib362(/*string InputFileBD*/) {
        fout.open(Library362, fstream::out | fstream::ate/*, fstream::out | fstream::app*/);
        /*fout.exceptions(ofstream::badbit | ofstream::failbit);
        try {
            fout.open(Library362);
        }
        catch (const ofstream::failure& ex) {
            cout << ex.what() << endl;
            cout << ex.code() << endl;
            cout << "Ошибка открытия файла Lib362.txt" << endl;
        }*/
    }
    string GetLib362() {
        return Library362;
    }
    void delBeforeStr() {

    }
    void SetInpText(string InpText) {
        this->InpText = InpText;
        string TInpText;
        int pos = 0;
        // Получаем тип книги
        pos = InpText.find(";", pos);
        TInpText = InpText;
        TInpText.erase(pos);
        typeBook = TInpText;
        // Получаем название книги
        TInpText = this->InpText.erase(0, pos + 2);
        pos = TInpText.find(",", pos);
        TInpText = this->InpText.erase(pos);
        nameBook = TInpText;
        // Получаем год выпуска
        pos = 0;
        pos = InpText.find(",", pos);
        TInpText = InpText;
        TInpText = TInpText.erase(0, pos + 2);
        pos = TInpText.rfind(",", pos);
        TInpText = TInpText.erase(pos);
        yearOfRelease = stoi(TInpText);
        // Получаем количество страниц
        pos = 0;
        pos = InpText.rfind(",");
        TInpText = InpText;
        TInpText = TInpText.erase(0, pos + 2);
        numberOfPages = stoi(TInpText);
        
        fout << typeBook << " " << nameBook << " " << yearOfRelease << " " << numberOfPages << endl;
        
    }
    ~Lib362() {
        fout.close();
    }
};
class Lib112 {
    std::string nameBook;   // Название книги
    int yearOfRelease;      // Дата выхода книги
    int numberOfPages;      // Количество страниц
    string typeBook;        // Тип книги
    
    string InpText;
    ofstream fout;

public:
    string Library112 = "Lib112.txt";
    Lib112() {
        fout.open(Library112, fstream::out | fstream::ate/*, fstream::out | fstream::app*/);
    }
    string GetLib112() {
        return Library112;
    }
    void SetInpText(string InpText) {
        this->InpText = InpText;
        string TInpText;
        int pos = 0;
        // Получаем тип книги
        pos = InpText.find(";", pos);
        TInpText = InpText;
        TInpText.erase(pos);
        typeBook = TInpText;
        // Получаем название книги
        TInpText = this->InpText.erase(0, pos + 2);
        pos = TInpText.find(",", pos);
        TInpText = this->InpText.erase(pos);
        nameBook = TInpText;
        // Получаем год выпуска
        pos = 0;
        pos = InpText.find(",", pos);
        TInpText = InpText;
        TInpText = TInpText.erase(0, pos + 2);
        pos = TInpText.rfind(",", pos);
        TInpText = TInpText.erase(pos);
        yearOfRelease = stoi(TInpText);
        // Получаем количество страниц
        pos = 0;
        pos = InpText.rfind(",");
        TInpText = InpText;
        TInpText = TInpText.erase(0, pos + 2);
        numberOfPages = stoi(TInpText);
        
        fout << typeBook << " " << nameBook << " " << yearOfRelease << " " << numberOfPages << endl;
        
    }

    ~Lib112() {
        fout.close();
    }
};
void fillDBLibs(string InputFileBD, string OutLib362, string OutLib112) {
    Lib362 lb362;
    Lib112 lb112;
    int randNum;
    string InpText;
    ifstream fin;
    fin.open(InputFileBD);
    while (!fin.eof()) {
        srand(time(0));
        randNum = rand() % 3;
        switch (randNum) {
        case 0:
            InpText = "";
            getline(fin, InpText);
            //lb362.SetInpText(InpText);
            //lb112.SetParametrs(InpText);
            lb112.SetInpText(InpText);
            //fout112 << InpText << endl;
            break;
        case 1:
            InpText = "";
            getline(fin, InpText);
            lb362.SetInpText(InpText);
            //fout362 << InpText << endl;
            break;
        case 2:
            InpText = "";
            getline(fin, InpText);
            lb112.SetInpText(InpText);
            lb362.SetInpText(InpText);
            break;
        default:
            break;
        }
    }
    fin.close();
   
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
    Lib112 lb112;
    Lib362 lb362;
    
    fillDBLibs(InputDataBase, lb112.GetLib112() , lb362.GetLib362());
    PrintDB(InputDataBase, lb112.GetLib112(), lb362.GetLib362());
  
    
    return 0;
}


