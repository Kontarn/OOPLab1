#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

class Groups {
public:
	virtual void DataBaseFill() = 0;
	virtual void OutputEngineer() = 0;
};
class Group1 : public Groups {
	string str;
	ifstream fin;
	fstream fs;
	
public:
	Group1(string nameInpFile, string GroupFile){
		fin.exceptions(ifstream::badbit | ifstream::failbit);
		try
		{
			//cout << "Попытк открыть файл 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			//cout << "Успешно" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
		try
		{
			//cout << "Попытк открыть файл 'Group1.txt': " << endl;
			fs.open(GroupFile, fstream::in | fstream::out);
			//cout << "Успешно" << endl;
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
	}
	void DataBaseFill() override {
		string groupNum;
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			groupNum = str.substr(str.size() - 1);
			if (groupNum == "1") {
				fs << str << "\n";
			}
			
		}
	}
	void OutputEngineer() override {
		fs.clear();
		fs.seekg(0);
		string eng = "инженер";
		while (!fs.eof()) {
			str = "";
			getline(fs, str);
			if (str.find(eng) != string::npos) {
				cout << str;
			}
		}
	}
	~Group1() {
		fin.close();
		fs.close();
	}
};
class Group2 :public Groups {
	string str;
	ifstream fin;
	fstream fs;
public:
	Group2(string nameInpFile, string GroupFile) {
		fin.exceptions(ifstream::badbit | ifstream::failbit);
		try
		{
			//cout << "Попытк открыть файл 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			//cout << "Успешно" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
		try
		{
			//cout << "Попытк открыть файл 'Group2.txt': " << endl;
			fs.open(GroupFile, fstream::in | fstream::out);
			//cout << "Успешно" << endl;
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
				fs << str << "\n";
			}

		}
	}
	void OutputEngineer() override{
		fs.clear();
		fs.seekg(0);
		string eng = "инженер";
		while (!fs.eof()) {
			str = "";
			getline(fs, str);
			if (str.find(eng) != string::npos) {
				cout << str;
			}
		}
	}
	~Group2() {
		fin.close();
		fs.close();
	}
};
class Group3 :public Groups {
	string str;
	ifstream fin;
	fstream fs;
public:
	Group3(string nameInpFile, string GroupFile) {
		fin.exceptions(ifstream::badbit | ifstream::failbit);
		try
		{
			//cout << "Попытк открыть файл 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			//cout << "Успешно" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
		try
		{
			//cout << "Попытк открыть файл 'Group3.txt': " << endl;
			fs.open(GroupFile, fstream::in | fstream::out);
			//cout << "Успешно" << endl;
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
				fs << str << "\n";
			}

		}
	}
	void OutputEngineer() {
		fs.clear();
		fs.seekg(0);
		string eng = "инженер";
		while (!fs.eof()) {
			str = "";
			getline(fs, str);
			if (str.find(eng) != string::npos) {
				cout << str;
			}
		}
	}
	~Group3() {
		fin.close();
		fs.close();
	}
};
class Group4 :public Groups {
	string str;
	ifstream fin;
	fstream fs;
public:
	Group4(string nameInpFile, string GroupFile) {
		fin.exceptions(ifstream::badbit | ifstream::failbit);
		try
		{
			//cout << "Попытк открыть файл 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			//cout << "Успешно" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "Ошибка открытия файла" << endl;
		}
		try
		{
			//cout << "Попытк открыть файл 'Group4.txt': " << endl;
			fs.open(GroupFile, fstream::in | fstream::out);
			//cout << "Успешно" << endl;
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
			len = str.substr(str.size() - 1);
			if (len == "4") {
				fs << str << "\n";
			}

		}
	}
	void OutputEngineer() override {
		fs.clear();
		fs.seekg(0);
		string eng = "инженер";
		while (!fs.eof()) {
			str = "";
			getline(fs, str);
			if (str.find(eng) != string::npos) {
				cout << str;
			}
		}
	}
	~Group4() {
		fin.close();
		fs.close();
	}
};

//void OutputEngineer() {
//	ifstream fout;
//	string str;
//	string eng = "инженер";
//	fout.open("Group1.txt");
//	while (!fout.eof()) {
//		str = "";
//		getline(fout, str);
//		if (str.find(eng) != string::npos) {
//			cout << str;
//		}
//	}
//}
int main()
{
	setlocale(LC_ALL, "ru");
	// -------------------Group1---------------------------
	Group1 gr1("InputText.txt", "Group1.txt");
	gr1.DataBaseFill();
	cout << "Вывод всех инженеров в группе: " << endl;
	gr1.OutputEngineer();
	cout << endl;
	// -------------------Group2---------------------------
	cout << endl;
	Group2 gr2("InputText.txt", "Group2.txt");
	gr2.DataBaseFill();
	gr2.OutputEngineer();
	cout << endl;
	// -------------------Group3---------------------------
	cout << endl;
	Group3 gr3("InputText.txt", "Group3.txt");
	gr3.DataBaseFill();
	gr3.OutputEngineer();
	cout << endl;
	// -------------------Group4---------------------------
	cout << endl;
	Group4 gr4("InputText.txt", "Group4.txt");
	gr4.DataBaseFill();
	gr4.OutputEngineer();
	cout << endl;
	
	//gr1.OutputEngineer();
	//string str;
	//string eng = "Инженер";
	//ft.open("Group1.txt");
	//while (!ft.eof()) {
	//	str = "";
	//	getline(ft, str);
	//	if (str.find(eng) != string::npos) {
	//		cout << str;
	//	}
	//}
	//ft.close();
	return 0;
	_CrtDumpMemoryLeaks();
}
