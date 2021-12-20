#include "func.h"
void func::creatNewPerson() {
	cout << "введите количество студентов:";
	int f;
	cin >> f;
	for (size_t i = 0; i < f; i++)
	{
		string name, firstname, secondname, country, city, street, faculty, specialty;

		string numOfHouse, day, mounth, year, course, group;

		cout << "им€:";
		cin >> name;
		cout << endl;

		cout << "фамили€:";
		cin >> firstname;
		cout << endl;

		cout << "очество:";
		cin >> secondname;
		cout << endl;

		cout << "страна:";
		cin >> country;
		cout << endl;

		cout << "город:";
		cin >> city;
		cout << endl;

		cout << "улица:";
		cin >> street;
		cout << endl;

		cout << "номир дом:";
		cin >> numOfHouse;
		cout << endl;
		cout << "полную дату рождени€(пример 12 04 2001)" << endl;

		cout << "день";
		cin >> day;
		cout << endl;
		cout << "мес€ц";
		cin >> mounth;
		cout << endl;

		cout << "год";
		cin >> year;
		cout << endl;

		cout << "факультет:";
		cin >> faculty;
		cout << endl;

		cout << "специальность:";
		cin >> specialty;
		cout << endl;

		cout << "курс:";
		cin >> course;
		cout << endl;

		cout << "группа:";
		cin >> group;
		cout << endl;

		cout << "человек добавлен в буффер" << endl;
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
