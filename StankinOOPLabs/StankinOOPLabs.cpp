#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

class Groups {
public:
	virtual void DataBaseFill() = 0;
};
class Group1 : public Groups {
	string str;
	ifstream fin;
	ofstream fout;
	
public:
	Group1(string nameInpFile, string GroupFile){
		fin.exceptions(ifstream::badbit | ifstream::failbit);
		try
		{
			cout << "Попытк открыть файл 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			cout << "Успешно" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
		try
		{
			cout << "Попытк открыть файл 'Group1.txt': " << endl;
			fout.open(GroupFile);
			cout << "Успешно" << endl;
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
	}
	void DataBaseFill() override {
		string len;
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			//len = str.size() - 1;
			len = str.substr(str.size() - 1);
			if (len == "1") {
				fout << str << "\n";
			}
			
		}
	}
	~Group1() {
		fin.close();
		fout.close();
	}
};
class Group2 :public Groups {
	string str;
	ifstream fin;
	ofstream fout;
public:
	Group2(string nameInpFile, string GroupFile) {
		fin.exceptions(ifstream::badbit | ifstream::failbit);
		try
		{
			cout << "Попытк открыть файл 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			cout << "Успешно" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
		try
		{
			cout << "Попытк открыть файл 'Group2.txt': " << endl;
			fout.open(GroupFile);
			cout << "Успешно" << endl;
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
	}
	void DataBaseFill() override {
		string len;
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			//len = str.size() - 1;
			len = str.substr(str.size() - 1);
			if (len == "2") {
				fout << str << "\n";
			}

		}
	}
	~Group2() {
		fin.close();
		fout.close();
	}
};
class Group3 :public Groups {
	string str;
	ifstream fin;
	ofstream fout;
public:
	Group3(string nameInpFile, string GroupFile) {
		fin.exceptions(ifstream::badbit | ifstream::failbit);
		try
		{
			cout << "Попытк открыть файл 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			cout << "Успешно" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
		try
		{
			cout << "Попытк открыть файл 'Group3.txt': " << endl;
			fout.open(GroupFile);
			cout << "Успешно" << endl;
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
	}
	void DataBaseFill() override {
		string len;
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			//len = str.size() - 1;
			len = str.substr(str.size() - 1);
			if (len == "3") {
				fout << str << "\n";
			}

		}
	}
	~Group3() {
		fin.close();
		fout.close();
	}
};
class Group4 :public Groups {
	string str;
	ifstream fin;
	ofstream fout;
public:
	Group4(string nameInpFile, string GroupFile) {
		fin.exceptions(ifstream::badbit | ifstream::failbit);
		try
		{
			cout << "Попытк открыть файл 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			cout << "Успешно" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
		try
		{
			cout << "Попытк открыть файл 'Group4.txt': " << endl;
			fout.open(GroupFile);
			cout << "Успешно" << endl;
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
	}
	void DataBaseFill() override {
		string len;
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			//len = str.size() - 1;
			len = str.substr(str.size() - 1);
			if (len == "4") {
				fout << str << "\n";
			}

		}
	}
	~Group4() {
		fin.close();
		fout.close();
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	Group1 gr1("InputText.txt", "Group1.txt");
	gr1.DataBaseFill();
	Group2 gr2("InputText.txt", "Group2.txt");
	gr2.DataBaseFill();
	Group3 gr3("InputText.txt", "Group3.txt");
	gr3.DataBaseFill();
	Group4 gr4("InputText.txt", "Group4.txt");
	gr4.DataBaseFill();
	return 0;
	_CrtDumpMemoryLeaks();
}
