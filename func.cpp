#include "func.h"
void func::creatNewPerson() {
	cout << "������� ���������� ���������:";
	int f;
	cin >> f;
	for (size_t i = 0; i < f; i++)
	{
		string name, firstname, secondname, country, city, street, faculty, specialty;

		string numOfHouse, day, mounth, year, course, group;

		cout << "���:";
		cin >> name;
		cout << endl;

		cout << "�������:";
		cin >> firstname;
		cout << endl;

		cout << "�������:";
		cin >> secondname;
		cout << endl;

		cout << "������:";
		cin >> country;
		cout << endl;

		cout << "�����:";
		cin >> city;
		cout << endl;

		cout << "�����:";
		cin >> street;
		cout << endl;

		cout << "����� ���:";
		cin >> numOfHouse;
		cout << endl;
		cout << "������ ���� ��������(������ 12 04 2001)" << endl;

		cout << "����";
		cin >> day;
		cout << endl;
		cout << "�����";
		cin >> mounth;
		cout << endl;

		cout << "���";
		cin >> year;
		cout << endl;

		cout << "���������:";
		cin >> faculty;
		cout << endl;

		cout << "�������������:";
		cin >> specialty;
		cout << endl;

		cout << "����:";
		cin >> course;
		cout << endl;

		cout << "������:";
		cin >> group;
		cout << endl;

		cout << "������� �������� � ������" << endl;
		system("cls");





		date k(name, firstname, secondname, country, city, street, numOfHouse, day, mounth, year, faculty, specialty, course, group);
	}
	system("cls");
}// //
void func::addTofile()
{
	cout << "1.overwrite data" << endl << "2.save all data";
	int l;
	cin >> l;



	if (l == 1)
	{
		fstream file("class.txt", ios::out);

		for (size_t i = 0; i < date::_date.size(); i++)
		{
			file.write((char*)&date::_date[i], sizeof(date));
		}

	}
	else
	{
		fstream file("class.txt", ios::in | ios::out | ios::app);
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			file.write((char*)&date::_date[i], sizeof(date));
		}
	}



}  //

int func::file()
{
	if (date::r == false)
	{
		return 0;
	}
	int k = 0;
	int h = 1000;
	for (int i = 0; i < h; i++)
	{
		date b;
	}
	fstream file("class.txt", ios::in);
	while (file.read((char*)&date::_date_T[k], sizeof(date)))
	{
		k++;
	}


	cout << "write nubers of data from 1 to " << k << endl;
	kosl();
	date::_date.clear();
	for (int i = 0; i < date::_date_buff.size(); i++)
	{
		date::_date.push_back(date::_date_buff[i]);
	}

	date::count = date::_date.size();



	date::r = false;


}
