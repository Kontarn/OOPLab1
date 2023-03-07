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
			cout << "������ ������� ���� 'InputText.txt': " << endl;
			fin.open(nameInpFile);
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
			cout << "������ ������� ���� 'Group1.txt': " << endl;
			fout.open(GroupFile);
			cout << "�������" << endl;
		}
		catch (const ofstream::failure& ex)
		{
			cout << ex.what() << endl;
			cout << ex.code() << endl;
			cout << "������ �������� �����" << endl;
		}
		//fin.open("InputText.txt");
		//fout.open("Group1.txt");
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
int main()
{
	setlocale(LC_ALL, "ru");
	Group1 gr1("InputText.txt", "Group1.txt");
	gr1.DataBaseFill();
	return 0;
	_CrtDumpMemoryLeaks();
}
