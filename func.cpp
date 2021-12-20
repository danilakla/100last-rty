#include "func.h"
void func::creatNewPerson() {
	cout << "введите количество студентов:";
	int f;
	cin >> f;
	for (size_t i = 0; i < f; i++)
	{
		string name, firstname, secondname, country, city, street, faculty, specialty;

		string numOfHouse, day, mounth, year, course, group;

		cout << "имя:";
		cin >> name;
		cout << endl;

		cout << "фамилия:";
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
		cout << "полную дату рождения(пример 12 04 2001)" << endl;

		cout << "день";
		cin >> day;
		cout << endl;
		cout << "месяц";
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
void func::print()
{
	for (int i = 0; i < date::_date.size(); i++)
	{
		cout << "имя:" << date::_date[i]._name.nam << endl;
		cout << "фамилия:" << date::_date[i]._name.first << endl;
		cout << "очество:" << date::_date[i]._name.secname << endl;

		cout << "страна:" << date::_date[i]._adres.country << endl;
		cout << "город:" << date::_date[i]._adres.city << endl;
		cout << "улица:" << date::_date[i]._adres.street << endl;
		cout << "номер дома:" << date::_date[i]._adres.ad << endl;

		cout << "дата рождения:" << date::_date[i]._da.day << "." << date::_date[i]._da.mounth << "." << date::_date[i]._da.years << endl;

		cout << "факультет:" << date::_date[i]._adres.country << endl;
		cout << "специальность:" << date::_date[i]._adres.city << endl;
		cout << "курс:" << date::_date[i]._adres.street << endl;
		cout << "группа:" << date::_date[i]._adres.ad << endl;

		cout << "=================================================" << endl;



	}
}//  //
void func::del()
{
	cout << "write the deleting item" << endl;
	int idx;
	cin >> idx;
	date::_date.erase(date::_date.begin() + idx - 1);
	cout << endl << "new" << endl;
	system("cls");
	date::count--;
}//  //
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
void func::findthedate()
{

	submenu();
}
void  func::changTheData()
{
	int choice;
	cin >> choice;
	cout << "what do you want to change:name";
	string name;
	cin >> name;
	date::_date[choice]._name.nam = name;

}
void func::sortDATE() {
	//SORTsubmenu();
}


//private
void func::findOnNAME()
{
	string name;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> name;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._name.nam == name)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnFirstName()
{
	string firstname;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> firstname;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._name.first == firstname)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnsecName()
{
	string  secname;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> secname;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._name.secname == secname)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnCountry()
{
	string country;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> country;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._adres.country == country)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnCity()
{
	string city;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> city;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._adres.city == city)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnStreet()
{
	string street;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> street;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._adres.street == street)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnNumberOFhouse()
{
	string num;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> num;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._adres.ad == num)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnBirthday()
{
	string a;
	string b;
	string c;
	cout << " введите полную дату рождения (12 01 2004)" << endl;
	cout << "день:";
	cin >> a;
	cout << endl << "месяц";
	cin >> b;
	cout << endl << "год";
	cin >> c;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._da.day == a && date::_date[i]._da.mounth == b && date::_date[i]._da.years == c)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnFaculty()
{
	string faculty;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> faculty;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._University.faculty == faculty)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnSpecialty()
{
	string specialty;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> specialty;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._University.specialty == specialty)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnCourse()
{
	string course;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> course;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._University.course == course)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnGroup()
{
	string group;
	cout << " введите имя" << endl;
	cout << "имя:";
	cin >> group;
	cout << "список найденных студентов" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._University.group == group)
		{
			listForSort(i);
		}
	}
	system("pause");
}
void func::findOnAllParm()
{
	string name, firstname, secname, country, city, street, faculty, specialty;

	string numOfHouse, a, b, c, course, group;

	cout << "введите все параметры студента(ов)" << endl;
	cout << "имя:";
	cin >> name;
	cout << endl;

	cout << "фамилия:";
	cin >> firstname;
	cout << endl;

	cout << "очество:";
	cin >> secname;
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
	cout << "полную дату рождения(пример 12 04 2001)" << endl;

	cout << "день";
	cin >> a;
	cout << endl;
	cout << "месяц";
	cin >> b;
	cout << endl;

	cout << "год";
	cin >> c;
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

	cout << "the list found student" << endl << endl;
	for (int i = 0; i < date::_date.size(); i++)
	{
		if (date::_date[i]._name.nam == name && date::_date[i]._name.first == firstname && date::_date[i]._name.secname == secname && date::_date[i]._adres.country == country && date::_date[i]._adres.city == city && date::_date[i]._adres.street == street && date::_date[i]._adres.ad == numOfHouse && date::_date[i]._da.day == a && date::_date[i]._da.mounth == b && date::_date[i]._da.years == c && date::_date[i]._University.faculty == faculty && date::_date[i]._University.specialty == specialty && date::_date[i]._University.course == course && date::_date[i]._University.group == group)////////////////////////////////////////////////////////
		{
			listForSort(i);
		}

	}
	system("pause");

}
void  func::submenu()
{
	cout << endl;
	infMenu();
	switch (choice())
	{
	case 1:findOnNAME();
		break;
	case 2:findOnFirstName();
		break;
	case 3:findOnsecName();
		break;
	case 4:findOnCountry();
		break;
	case 5:findOnCity();
		break;
	case 6:findOnStreet();
		break;
	case 7:findOnNumberOFhouse();
		break;
	case 8:findOnBirthday();
		break;
	case 9:findOnFaculty();
		break;
	case 10:findOnSpecialty();
		break;
	case 11:findOnCourse();
		break;
	case 12:findOnGroup();
		break;
	case 13:
		break;
	case 0:findOnAllParm();
		break;
	default:
		break;
	}
}
int func::choice() {
	int a;
	cin >> a;
	cout << endl << endl;
	return a;
}
void func::infMenu()
{
	cout << "0.найт по всем параметрам" << endl;

	cout << "1.найти по имени" << endl;
	cout << "2.найти по фамилии" << endl;
	cout << "3.найти по отчество" << endl;

	cout << "4.найти по стране" << endl;
	cout << "5.найти по городу" << endl;
	cout << "6.найти по улице" << endl;
	cout << "7.найти по номеру дома" << endl;

	cout << "8.найти по дате рождения" << endl;

	cout << "9.найти по факультету" << endl;
	cout << "10.найти по спецухе" << endl;
	cout << "11.найти по курсу" << endl;
	cout << "12.найти по группе" << endl;



	cout << "13.exit" << endl;
}
void func::listForSort(int i) {

	cout << "id" << i << endl;
	cout << "имя:" << date::_date[i]._name.nam << endl;
	cout << "фамилия:" << date::_date[i]._name.first << endl;
	cout << "очество:" << date::_date[i]._name.secname << endl;

	cout << "страна:" << date::_date[i]._adres.country << endl;
	cout << "город:" << date::_date[i]._adres.city << endl;
	cout << "улица:" << date::_date[i]._adres.street << endl;
	cout << "номер дома:" << date::_date[i]._adres.ad << endl;

	cout << "дата рождения:" << date::_date[i]._da.day << "." << date::_date[i]._da.mounth << "." << date::_date[i]._da.years << endl;

	cout << "факультет:" << date::_date[i]._adres.country << endl;
	cout << "специальность:" << date::_date[i]._adres.city << endl;
	cout << "курс:" << date::_date[i]._adres.street << endl;
	cout << "группа:" << date::_date[i]._adres.ad << endl;

	cout << "=================================================" << endl;
}









void func::SORTfindOnNAME()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnFirstName()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnsecName()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnCountry()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnCity()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnStreet()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnNumberOFhouse()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnBirthday()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnFaculty()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnSpecialty()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnCourse()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}
void func::SORTfindOnGroup()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = 'А';
	char RUSstartValue2 = 'а';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.nam[0] == (int)ENstartValue || (int)date::_date[i]._name.nam[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.nam[0] == (int)RUSstartValue || (int)date::_date[i]._name.nam[0] == (int)RUSstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}

		}
		ENstartValue++;
		ENstartValue2++;
		RUSstartValue++;
		RUSstartValue2++;
		if (date::_date_buff_sort.size() == date::_date.size())
		{
			break;
		}

	}
	date::_date.clear();
	for (int i = 0; i < date::_date_buff_sort.size(); i++)
	{
		date::_date.push_back(date::_date_buff_sort[i]);

	}
	cout << endl << "successful sorting";
}


void func::SORTsubmenu()
{
	cout << endl;
	SORTinfMenu();
	switch (SORTchoice())
	{
	case 1:SORTfindOnNAME();

		break;
	case 2:SORTfindOnFirstName();
		break;
	case 3:SORTfindOnsecName();
		break;
	case 4:SORTfindOnCountry();
		break;
	case 5:SORTfindOnCity();
		break;
	case 6:SORTfindOnStreet();
		break;
	case 7:SORTfindOnNumberOFhouse();
		break;
	case 8:SORTfindOnBirthday();
		break;
	case 9:SORTfindOnFaculty();
		break;
	case 10:SORTfindOnSpecialty();
		break;
	case 11:SORTfindOnCourse();
		break;
	case 12:SORTfindOnGroup();
		break;
	case 13:
		break;
	default:
		break;
	}
}
int func::SORTchoice()
{
	int a;
	cin >> a;
	cout << endl << endl;
	return a;
}
void func::SORTinfMenu()
{
	cout << "0.Cортиврока по:" << endl;

	cout << "1.имени" << endl;
	cout << "2.фамилии" << endl;
	cout << "3.отчество" << endl;

	cout << "4.стране" << endl;
	cout << "5.городу" << endl;
	cout << "6.улице" << endl;
	cout << "7.дома" << endl;

	cout << "8.рождения" << endl;

	cout << "9.факультету" << endl;
	cout << "10.спецухе" << endl;
	cout << "11.курсу" << endl;
	cout << "12.группе" << endl;



	cout << "13.exit" << endl;
}

void func::kosl()
{
	fstream file("class.txt", ios::in);
	int f;
	cin >> f;
	for (size_t i = 0; i < f; i++)
	{
		date h(f);
	}

	int pl = 0;
	while (file.read((char*)&date::_date_buff[pl], sizeof(date)))
	{
		pl++;
		if (pl == f)
		{
			break;
		}
	}
}


