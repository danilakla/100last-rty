#include "func.h"
#include "menu.h"
void func::creatNewPerson() {
	system("cls");
	cout << "������� ���������� ���������:";
	int f;
	cin >> f;
	if (!f)
	{
		exit();
	}
	system("cls");
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
void func::print()
{
	system("cls");

	for (int i = 0; i < date::_date.size(); i++)
	{
		cout << "���:" << date::_date[i]._name.nam << endl;
		cout << "�������:" << date::_date[i]._name.first << endl;
		cout << "�������:" << date::_date[i]._name.secname << endl;

		cout << "������:" << date::_date[i]._adres.country << endl;
		cout << "�����:" << date::_date[i]._adres.city << endl;
		cout << "�����:" << date::_date[i]._adres.street << endl;
		cout << "����� ����:" << date::_date[i]._adres.ad << endl;

		cout << "���� ��������:" << date::_date[i]._da.day << "." << date::_date[i]._da.mounth << "." << date::_date[i]._da.years << endl;

		cout << "���������:" << date::_date[i]._adres.country << endl;
		cout << "�������������:" << date::_date[i]._adres.city << endl;
		cout << "����:" << date::_date[i]._adres.street << endl;
		cout << "������:" << date::_date[i]._adres.ad << endl;

		cout << "=================================================" << endl;
		cout << "---->:";
		system("pause");
		system("cls");



	}
}
void func::del()
{
	
	print();
	cout << "������� ����� ��������:";
	int idx;
	cin >> idx;
	date::_date.erase(date::_date.begin() + idx - 1);
	cout << endl << "new" << endl;
	system("cls");
	date::count--;
}
void func::addTofile()
{
	cout << "1.������������ ������ � ����" << endl << "2.�������� ������ � �������" << endl;
	cout << "�������� �������:";
	int l;
	cin >> l;

	system("cls");

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


	system("cls");
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


	cout << "� ����� �������� " << k << " ���������"<<endl;
	cout << "������� ���-�� ��������� ��� ������ �� �����:";
	kosl();

	date::_date.clear();
	for (int i = 0; i < date::_date_buff.size(); i++)
	{
		date::_date.push_back(date::_date_buff[i]);
	}

	date::count = date::_date.size();



	date::r = false;

	system("cls");
}
void func::findthedate()
{

	submenu();
	system("cls");
}
void  func::changTheData()
{
	int choice;
	print();
	
	cout << "����� ��������:";
	cin >> choice;
	cout << endl;
	changesubmenu(choice);
	cout << endl;
	cout << "�� ������� �������� ���� ��������";
	system("cls");
}
void func::sortDATE() {
	SORTsubmenu();
	system("cls");
}


//private
void func::findOnNAME()
{
	string name;
	cout << "������� ���" << endl;
	cout << "���:";
	cin >> name;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� �������" << endl;
	cout << "�������:";
	cin >> firstname;
	cout << endl;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� ��������" << endl;
	cout << "��������:";
	cin >> secname;
	cout << endl;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� ������" << endl;
	cout << "������:";
	cin >> country;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� �����" << endl;
	cout << "�����:";
	cin >> city;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� �����" << endl;
	cout << "�����:";
	cin >> street;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� ����� ����" << endl;
	cout << "����� ����:";
	cin >> num;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� ������ ���� �������� (12 01 2004)" << endl;
	cout << "����:";
	cin >> a;
	cout << endl << "�����";
	cin >> b;
	cout << endl << "���";
	cin >> c;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� ���������" << endl;
	cout << "���������:";
	cin >> faculty;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� �������" << endl;
	cout << "�������:";
	cin >> specialty;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� ����" << endl;
	cout << "����:";
	cin >> course;
	cout << "������ ��������� ���������" << endl << endl;
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
	cout << " ������� ������" << endl;
	cout << "������:";
	cin >> group;
	cout << "������ ��������� ���������" << endl << endl;
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

	cout << "������� ��� ��������� ��������(��)" << endl;
	cout << "���:";
	cin >> name;
	cout << endl;

	cout << "�������:";
	cin >> firstname;
	cout << endl;

	cout << "�������:";
	cin >> secname;
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
	cin >> a;
	cout << endl;
	cout << "�����";
	cin >> b;
	cout << endl;

	cout << "���";
	cin >> c;
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
	infMenu();
	cout << "�������� �������:";
	int a=choice();
	system("cls");
	switch (a)
	{
	case 1:
		findOnNAME();
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
	cout << "0.���� �� ���� ����������" << endl;

	cout << "1.����� �� �����" << endl;
	cout << "2.����� �� �������" << endl;
	cout << "3.����� �� ��������" << endl;

	cout << "4.����� �� ������" << endl;
	cout << "5.����� �� ������" << endl;
	cout << "6.����� �� �����" << endl;
	cout << "7.����� �� ������ ����" << endl;

	cout << "8.����� �� ���� ��������" << endl;

	cout << "9.����� �� ����������" << endl;
	cout << "10.����� �� �������" << endl;
	cout << "11.����� �� �����" << endl;
	cout << "12.����� �� ������" << endl;



	cout << "13.exit" << endl;
}
void func::listForSort(int i) {

	cout << "id" << i << endl;
	cout << "���:" << date::_date[i]._name.nam << endl;
	cout << "�������:" << date::_date[i]._name.first << endl;
	cout << "�������:" << date::_date[i]._name.secname << endl;

	cout << "������:" << date::_date[i]._adres.country << endl;
	cout << "�����:" << date::_date[i]._adres.city << endl;
	cout << "�����:" << date::_date[i]._adres.street << endl;
	cout << "����� ����:" << date::_date[i]._adres.ad << endl;

	cout << "���� ��������:" << date::_date[i]._da.day << "." << date::_date[i]._da.mounth << "." << date::_date[i]._da.years << endl;

	cout << "���������:" << date::_date[i]._adres.country << endl;
	cout << "�������������:" << date::_date[i]._adres.city << endl;
	cout << "����:" << date::_date[i]._adres.street << endl;
	cout << "������:" << date::_date[i]._adres.ad << endl;

	cout << "=================================================" << endl;
}









void func::SORTfindOnNAME()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = '�';
	char RUSstartValue2 = '�';




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
	char RUSstartValue = '�';
	char RUSstartValue2 = '�';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.first[0] == (int)ENstartValue || (int)date::_date[i]._name.first[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.first[0] == (int)RUSstartValue || (int)date::_date[i]._name.first[0] == (int)RUSstartValue2)
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
	char RUSstartValue = '�';
	char RUSstartValue2 = '�';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._name.secname[0] == (int)ENstartValue || (int)date::_date[i]._name.secname[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._name.secname[0] == (int)RUSstartValue || (int)date::_date[i]._name.secname[0] == (int)RUSstartValue2)
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
	char RUSstartValue = '�';
	char RUSstartValue2 = '�';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._adres.country[0] == (int)ENstartValue || (int)date::_date[i]._adres.country[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._adres.country[0] == (int)RUSstartValue || (int)date::_date[i]._adres.country[0] == (int)RUSstartValue2)
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
	char RUSstartValue = '�';
	char RUSstartValue2 = '�';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._adres.city[0] == (int)ENstartValue || (int)date::_date[i]._adres.city[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._adres.city[0] == (int)RUSstartValue || (int)date::_date[i]._adres.city[0] == (int)RUSstartValue2)
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
	char RUSstartValue = '�';
	char RUSstartValue2 = '�';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._adres.street[0] == (int)ENstartValue || (int)date::_date[i]._adres.street[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._adres.street[0] == (int)RUSstartValue || (int)date::_date[i]._adres.street[0] == (int)RUSstartValue2)
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
	char startValue = '1';





	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._adres.ad[0] == (int)startValue)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}


		}
		startValue++;

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
	char RUSstartValue = '�';
	char RUSstartValue2 = '�';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._University.faculty[0] == (int)ENstartValue || (int)date::_date[i]._University.faculty[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._University.faculty[0] == (int)RUSstartValue || (int)date::_date[i]._University.faculty[0] == (int)RUSstartValue2)
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
	cout << endl << "�������� ����������";
}
void func::SORTfindOnSpecialty()
{
	cout << "sort date on name" << endl;
	char ENstartValue = 'A';
	char ENstartValue2 = 'a';
	char RUSstartValue = '�';
	char RUSstartValue2 = '�';




	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._University.specialty[0] == (int)ENstartValue || (int)date::_date[i]._University.specialty[0] == (int)ENstartValue2)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}
			if ((int)date::_date[i]._University.specialty[0] == (int)RUSstartValue || (int)date::_date[i]._University.specialty[0] == (int)RUSstartValue2)
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
	char startValue = '1';





	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._University.course[0] == (int)startValue)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}


		}
		startValue++;

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
	char startValue = '1';





	for (size_t k = 0; ; k++)
	{
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			if ((int)date::_date[i]._University.group[0] == (int)startValue)
			{
				date::_date_buff_sort.push_back(date::_date[i]);
			}


		}
		startValue++;
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
	SORTinfMenu();
	cout << "�������� �������:";
	int a = choice();
	system("cls");
	switch (a)
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

	case 8:SORTfindOnFaculty();
		break;
	case 9:SORTfindOnSpecialty();
		break;
	case 10:SORTfindOnCourse();
		break;
	case 11:SORTfindOnGroup();
		break;
	case 12:
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
	cout << "C��������� ��:" << endl;

	cout << "1.�����" << endl;
	cout << "2.�������" << endl;
	cout << "3.��������" << endl;

	cout << "4.������" << endl;
	cout << "5.������" << endl;
	cout << "6.�����" << endl;
	cout << "7.����" << endl;


	cout << "8.����������" << endl;
	cout << "9.�������" << endl;
	cout << "10.�����" << endl;
	cout << "11.������" << endl;



	cout << "12.�����" << endl;
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

int func::exit()
{
	return 0;
}

void func::changesubmenu(int choice)
{
	string name, firstname, secondname, country, city, street, faculty, specialty;

	string numOfHouse, day, mounth, year, course, group;
	cout << endl;
	changeinfMenu();
	switch (changechoice())
	{
	case 1:
		cout<<endl<< "������� ����� ������:";
		cin>> name;
		date::_date[choice]._name.nam = name;

		break;
	case 2:
		cout << endl << "������� ����� ������:";
		cin >> firstname;
		date::_date[choice]._name.first = firstname;

		break;
	case 3: 
		cout << endl << "������� ����� ������:";
		cin >> secondname;
		date::_date[choice]._name.secname = secondname;

		break;
	case 4:
		cout << endl << "������� ����� ������:";
		cin >> country;
		date::_date[choice]._adres.country = country;

		break;
	case 5: 
		cout << endl << "������� ����� ������:";
		cin >> city;
		date::_date[choice]._adres.city = city;

		break;
	case 6: 
		cout << endl << "������� ����� ������:";
		cin >> street;
		date::_date[choice]._adres.street = street;

		break;
	case 7: 
		cout << endl << "������� ����� ������:";
		cin >> numOfHouse;
		date::_date[choice]._adres.ad = numOfHouse;

		break;
	case 8:
		cout << endl << "������� ����� ������:";
		cin >> faculty;
		date::_date[choice]._University.faculty = faculty;

		break;
	case 9: 
		cout << endl << "������� ����� ������:";
		cin >> specialty;
		date::_date[choice]._University.specialty = specialty;

		break;
	case 10:
		cout << endl << "������� ����� ������:";
		cin >> course;
		date::_date[choice]._University.course = course;

		break;
	case 11:
		cout << endl << "������� ����� ������:";
		cin >> group;
		date::_date[choice]._University.group= group;

		break;
	case 12:
		break;
	default:
		break;
	}
}

int func::changechoice()
{
	int a;
	cin >> a;
	cout << endl << endl;
	return a;
	return 0;
}

void func::changeinfMenu()
{
	cout << "�������� ���������� ����" << endl;

	cout << "1.���" << endl;
	cout << "2.�������" << endl;
	cout << "3.��������" << endl;

	cout << "4.������" << endl;
	cout << "5.�����" << endl;
	cout << "6.�����" << endl;
	cout << "7.���" << endl;


	cout << "8.���������" << endl;
	cout << "9.�������" << endl;
	cout << "10.����" << endl;
	cout << "11.������" << endl;



	cout << "12.�����" << endl;
}


