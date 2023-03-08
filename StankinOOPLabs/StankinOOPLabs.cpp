#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Groups {
public:
	virtual void DataBaseFill() = 0;
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
			fin.open(nameInpFile); // �������� ������� ���� 'InputText.txt'
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
		}
		try
		{
			fs.open(GroupFile, fstream::in | fstream::out); // ������� ������� ���� 'Group1.txt'
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
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
			fin.open(nameInpFile); // ������� ������� ���� 'InputText.txt'
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
		}
		try
		{
			fs.open(GroupFile, fstream::in | fstream::out); // ������� ������� ���� 'Group2.txt'
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
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
			//cout << "������ ������� ���� 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			//cout << "�������" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
		}
		try
		{
			//cout << "������ ������� ���� 'Group3.txt': " << endl;
			fs.open(GroupFile, fstream::in | fstream::out);
			//cout << "�������" << endl;
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
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
			//cout << "������ ������� ���� 'InputText.txt': " << endl;
			fin.open(nameInpFile);
			//cout << "�������" << endl;
		}
		catch (const ifstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
		}
		try
		{
			//cout << "������ ������� ���� 'Group4.txt': " << endl;
			fs.open(GroupFile, fstream::in | fstream::out);
			//cout << "�������" << endl;
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
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
	~Group4() {

		fin.close();
		fs.close();
	}
};

// ������� ��� ������ ���� ���������
void OutputEngineer(vector <string> grMass) {
	ifstream fin;
	string str;
	cout << "����� ���� ��������� ���������: " << endl;
	for (int i = 0; i < grMass.size(); i++) {
		fin.open(grMass[i], fstream::in | fstream::out);
		string eng = "�������";
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			if (str.find(eng) != string::npos) {
				cout << str << endl;
			}
		}
		fin.close();
	}
}
void OutputNot�hairman() { // ����� �������������

}
int main()
{
	setlocale(LC_ALL, "ru");
	vector <string> grMass = { "Group1.txt", "Group2.txt", "Group3.txt", "Group4.txt" };
	// ------------���������� ���� ������------------------
	// -------------------Group1---------------------------
	Group1 gr1("InputText.txt", grMass[0]);
	gr1.DataBaseFill();
	// -------------------Group2---------------------------
	Group2 gr2("InputText.txt", grMass[1]);
	gr2.DataBaseFill();
	// -------------------Group3---------------------------
	Group3 gr3("InputText.txt", grMass[2]);
	gr3.DataBaseFill();
	// -------------------Group4---------------------------
	Group4 gr4("InputText.txt", grMass[3]);
	gr4.DataBaseFill();
	// --------------����� ���� ���������------------------
	OutputEngineer(grMass);
	return 0;
	_CrtDumpMemoryLeaks();
}
