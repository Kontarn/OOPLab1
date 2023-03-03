#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void DataBaseFill() {
	string str; // Переменная для временного хранения данных InputText.txt
	ifstream fin;
	ofstream fout;
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		cout << "Попытк открыть файл 'InputText.txt': " << endl;
		fin.open("InputText.txt");
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
		cout << "Попытк открыть файл 'MyLittleBD.txt': " << endl;
		fout.open("MyLittleBD.txt");
		cout << "Успешно" << endl;
	}
	catch (const ofstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "Ошибка открытия файла" << endl;
	}

	while (!fin.eof()) {
		str = "";
		getline(fin, str);
		fout << str << "\n";
	}
	fout.close();
	fin.close();
}
int main()
{
	setlocale(LC_ALL, "ru");
	DataBaseFill();
	return 0;
}
