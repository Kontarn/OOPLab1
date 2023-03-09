#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

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
/*� ������� ����������� ���� �������� ������ � ���� �� �������������.*/
void OutputNot�hairman(vector <string> grMass) { // ����� �������������
	ifstream fin;
	string str;
	int findStr, findStrLast;
	int VarYear;
	string tempVarYear = "";
	map <string, int> ChMan;
	vector <string> ChManFinish;
	//vector <string> sortChairman;
	// 
	//cout << ChMan.size();
	// ��������� ������ ����� ������, ������� �������� ��������������
	cout << "����� ���� ��������� �������������: " << endl;
	for (int i = 0; i < grMass.size(); i++) {
		fin.open(grMass[i], fstream::in | fstream::out);
		string eng = "������������";
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			if (str.find(eng) != string::npos) {
				ChMan.emplace(str, 0);
				//sortChairman.push_back(str);
				//cout << str << endl;
			}
		}
		fin.close();
	}
	//cout << ChMan.size();
	// int i = 0; i < sortChairman.size(); i++
	// ��������� �������� ������� ����� �������� �������������
	for (map <string, int> ::iterator it = ChMan.begin(); it != ChMan.end(); ++it) {
		findStr = it->first.find_first_of(",", 0);
		if (findStr != string::npos) {
			findStr--;
			findStrLast = findStr;
			while (findStr != (findStrLast-4)) {
				tempVarYear += it->first[findStr];
				findStr--;
			}
			reverse(tempVarYear.begin(), tempVarYear.end());
			ChMan[it->first] = stoi(tempVarYear);
		}
		tempVarYear = "";
	}
	auto it = ChMan.begin();
	VarYear = it->second;
	string VarYearKey;
	while (ChMan.size() != 0) {
		for (auto it = ChMan.begin(); it != ChMan.end(); ++it) {
			if (it->second >= VarYear) {
				VarYear = it->second;
				VarYearKey = it->first;
			}
		}
		ChManFinish.push_back(VarYearKey);
		ChMan.erase(VarYearKey);
		VarYear = 0;
	}
	// ����� ������� � �������� �������
	for (auto it = ChManFinish.rbegin(); it != ChManFinish.rend(); ++it) {
		cout << *it << endl;
	}
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
	// -------����� ������������� �������� �������---------
	OutputNot�hairman(grMass);
	return 0;
	_CrtDumpMemoryLeaks();
}
