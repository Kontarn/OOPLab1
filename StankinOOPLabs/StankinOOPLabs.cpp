#include <iostream>
#include <fstream>
#include <string>

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
		//fin.open("InputText.txt");
		//fout.open("Group1.txt");
	}
	void DataBaseFill() override {

		while (!fin.eof()) {
			str = "";
			for (int i = 0; i < str.size(); i++) {
				if (str)
			}
			getline(fin, str);
			fout << str << "\n";
		}
	}
	~Group1() {
		fin.close();
		fout.close();
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	Group1 gr1("InputText.txt", "Group1.txt");
	gr1.DataBaseFill();
	return 0;
	_CrtDumpMemoryLeaks();
}
