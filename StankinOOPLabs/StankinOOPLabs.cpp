#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void DataBaseFill() {
	string str; // ���������� ��� ���������� �������� ������ InputText.txt
	ifstream fin;
	ofstream fout;
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		cout << "������ ������� ���� 'InputText.txt': " << endl;
		fin.open("InputText.txt");
		cout << "�������" << endl;
	}
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "������ �������� �����" << endl;
	}
	try
	{
		cout << "������ ������� ���� 'MyLittleBD.txt': " << endl;
		fout.open("MyLittleBD.txt");
		cout << "�������" << endl;
	}
	catch (const ofstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "������ �������� �����" << endl;
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
