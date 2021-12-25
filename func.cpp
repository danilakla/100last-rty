#include "func.h"
#include "menu.h"
void func::creatNewPerson() {
	system("cls");
	cout << "введите количество студентов:";
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

		cout << "имя:";
		cin >> name;
		if ((int)name[0] <48 || (int)name[0] > 57)
		{
			cout << endl;

			cout << "фамилия:";
			cin >> firstname;
			if ((int)firstname[0] < 48 || (int)firstname[0] > 57)
			{
				cout << endl;

				cout << "отчество:";
				cin >> secondname;
				if ((int)secondname[0] < 48 || (int)secondname[0] > 57)
				{
					cout << endl;

					cout << "страна:";
					cin >> country;
					if ((int)country[0] < 48 || (int)country[0] > 57)
					{
						cout << endl;

						cout << "город:";
						cin >> city;
						if ((int)city[0] < 48 || (int)city[0] > 57)
						{
							cout << endl;

							cout << "улица:";
							cin >> street;
							if ((int)street[0] < 48 || (int)street[0] > 57)
							{
								cout << endl;

								cout << "номер дома:";
								cin >> numOfHouse;
								if ((int)numOfHouse[0]>= 48 && (int)numOfHouse[0] <= 57)
								{
									cout << endl;
									cout << "полную дату рождения(пример 12 04 2001)" << endl;

									cout << "день:";
									cin >> day;
									if ((int)day[0] >= 48 && (int)day[0] <= 57)
									{
										cout << endl;
										cout << "месяц:";
										cin >> mounth;
										if ((int)mounth[0] >= 48 && (int)mounth[0] <= 57)
										{

											cout << endl;

											cout << "год:";
											cin >> year;
											if ((int)year[0] >= 48 && (int)year[0] <= 57)
											{

												cout << endl;

												cout << "факультет:";
												cin >> faculty;
												if ((int)faculty[0] < 48 || (int)faculty[0] > 57)
												{

													cout << endl;

													cout << "специальность:";
													cin >> specialty;
													if ((int)specialty[0] < 48 || (int)specialty[0] > 57)
													{
														cout << endl;

														cout << "курс:";
														cin >> course;
														if ((int)course[0] >= 48 && (int)course[0] <= 57)
														{
															cout << endl;

															cout << "группа:";
															cin >> group;
															if ((int)group[0] >= 48 && (int)group[0] <= 57)
															{
																cout << endl;

																cout << "человек добавлен в буффер" << endl;
																system("cls");
															}
															else
															{

																cout << "данные введены некорректно, попробуйте еще раз" << endl;
																system("pause");
															}

														}
														else
														{

															cout << "данные введены некорректно, попробуйте еще раз" << endl;
															system("pause");
														}

													}
													else
													{

														cout << "данные введены некорректно, попробуйте еще раз" << endl;
														system("pause");
													}
												}
												else
												{

													cout << "данные введены некорректно, попробуйте еще раз" << endl;
													system("pause");
												}
											}
											else
											{

												cout << "данные введены некорректно, попробуйте еще раз" << endl;
												system("pause");
											}
										}
										else
										{

											cout << "данные введены некорректно, попробуйте еще раз" << endl;
											system("pause");
										}
									}
									else
									{

										cout << "данные введены некорректно, попробуйте еще раз" << endl;
										system("pause");
									}
								}
								else
								{

									cout << "данные введены некорректно, попробуйте еще раз" << endl;
									system("pause");
								}

							}
							else
							{

								cout << "данные введены некорректно, попробуйте еще раз" << endl;
								system("pause");
							}



						}



					}
					else
					{

						cout << "данные введены некорректно, попробуйте еще раз" << endl;
						system("pause");
					}


				}
				else
				{

					cout << "данные введены некорректно, попробуйте еще раз" << endl;
					system("pause");
				}
				
			}
			else
			{

				cout << "данные введены некорректно, попробуйте еще раз" << endl;
				system("pause");
			}
			

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
		}

		





		date k(name, firstname, secondname, country, city, street, numOfHouse, day, mounth, year, faculty, specialty, course, group);
	
	}
	system("cls");
}// //
void func::print()
{
	system("cls");

	for (int i = 0; i < date::_date.size(); i++)
	{
		cout << "id студента:"<<i<<endl;
		cout << "имя:" << date::_date[i]._name.nam << endl;
		cout << "фамилия:" << date::_date[i]._name.first << endl;	
		cout << "отчество:" << date::_date[i]._name.secname << endl;

		cout << "страна:" << date::_date[i]._adres.country << endl;
		cout << "город:" << date::_date[i]._adres.city << endl;
		cout << "улица:" << date::_date[i]._adres.street << endl;
		cout << "номер дома:" << date::_date[i]._adres.ad << endl;

		cout << "дата рождения:" << date::_date[i]._da.day << "." << date::_date[i]._da.mounth << "." << date::_date[i]._da.years << endl;

		cout << "факультет:" << date::_date[i]._University.faculty << endl;
		cout << "специальность:" << date::_date[i]._University.specialty << endl;
		cout << "курс:" << date::_date[i]._University.course << endl;
		cout << "группа:" << date::_date[i]._University.group << endl;

		cout << "=================================================" << endl;
		cout << "---->:";
		system("pause");
		system("cls");



	}
}
void func::del()
{
	
	print();
	cout << "введите номер студента:";
	int idx;
	cin >> idx;
	if (!idx|| idx<0 || idx>date::_date.size())
	{
		cout << "данные не созданы либо не найдены" << endl;
		system("pause");
		system("cls");
		exit();
	}

	else
	{
		date::_date.erase(date::_date.begin() + idx - 1);
		cout << endl << "new" << endl;
		system("cls");
		date::count--;
	}


}
void func::addTofile()
{
	cout << "1.перезаписать данные в файл" << endl << "2.добавить данные к существ" << endl;
	cout << "выбирите вариант:";
	int l;
	cin >> l;
	if (!l)
	{
		exit();
	}
	system("cls");

	if (l == 1)
	{
		fstream file("class.txt", ios::out);

		for (size_t i = 0; i < date::_date.size(); i++)
		{
			file.write((char*)&date::_date[i], sizeof(date));
		}

	}
	else if(l==2)
	{
		fstream file("class.txt", ios::in | ios::out | ios::app);
		for (size_t i = 0; i < date::_date.size(); i++)
		{
			file.write((char*)&date::_date[i], sizeof(date));
		}
	}
	else
	{
		exit();
	}


	system("cls");
}  //
int func::File()
{
	if (date::r == false)
	{
		cout << "Вы уже получили данные из файла";
		cout << endl;
		system("pause");
		system("cls");
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


	cout << "в файле находить " << k << " студентво"<<endl;
	cout << "введите кол-во студентво для вывода из файла:";
	kosl(k);

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
	if (date::_date.size()==0)
	{
		cout << "отсутствуют данные для изменения"<<endl;
		system("pause");
	}
	else
	{
		cout << "номер студента:";
		cin >> choice;
		system("cls");
		if (choice<1||choice>date::_date.size())
		{

		}
		else
		{
			cout << endl;
			changesubmenu(choice - 1);
			cout << endl;
			cout << "вы успешно обновили поле студента";
			system("cls");
		}


	}

}
void func::sortDATE() {
	SORTsubmenu();
	system("cls");
}


//private
void func::findOnNAME()
{
	string name;
	cout << "введите имя" << endl;
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
	cout << " введите фамилию" << endl;
	cout << "фамилия:";
	cin >> firstname;
	cout << endl;
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
	cout << " введите отчество" << endl;
	cout << "отчество:";
	cin >> secname;
	cout << endl;
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
	cout << " введите страну" << endl;
	cout << "страна:";
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
	cout << " введите город" << endl;
	cout << "город:";
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
	cout << " введите улицу" << endl;
	cout << "улица:";
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
	cout << " введите номер дома" << endl;
	cout << "номер дома:";
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
	cout << " введите факультет" << endl;
	cout << "факультет:";
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
	cout << " введите спецуху" << endl;
	cout << "спецуха:";
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
	cout << " введите курс" << endl;
	cout << "курс:";
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
	cout << " введите группу" << endl;
	cout << "группу:";
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
	infMenu();
	cout << "выберите вариант:";
	int a=choice();
	if (!a)
	{
		exit();
	}
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



	cout << "13.выход" << endl;
}
void func::listForSort(int i) {

	cout << "id" << i << endl;
	cout << "имя:" << date::_date[i]._name.nam << endl;
	cout << "фамилия:" << date::_date[i]._name.first << endl;
	cout << "отчество:" << date::_date[i]._name.secname << endl;

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
	date::_date_buff_sort.clear();
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
	date::_date_buff_sort.clear();

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
	date::_date_buff_sort.clear();

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
	date::_date_buff_sort.clear();

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
	date::_date_buff_sort.clear();

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
	date::_date_buff_sort.clear();

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
	date::_date_buff_sort.clear();

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
	date::_date_buff_sort.clear();

	cout << endl << "успешная сортировка";
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
	date::_date_buff_sort.clear();

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
	date::_date_buff_sort.clear();

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
	date::_date_buff_sort.clear();

	cout << endl << "successful sorting";
}


void func::SORTsubmenu()
{
	SORTinfMenu();
	cout << "выберите вариант:";
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
	cout << "Cортиврока по:" << endl;

	cout << "1.имени" << endl;
	cout << "2.фамилии" << endl;
	cout << "3.отчество" << endl;

	cout << "4.стране" << endl;
	cout << "5.городу" << endl;
	cout << "6.улице" << endl;
	cout << "7.дома" << endl;


	cout << "8.факультету" << endl;
	cout << "9.спецухе" << endl;
	cout << "10.курсу" << endl;
	cout << "11.группе" << endl;



	cout << "12.выход" << endl;
}

void func::kosl(int k)
{
	fstream file("class.txt", ios::in);
	int f;
	cin >> f;
	if (!f ||f<0 ||f>k)
	{
		system("cls");
		cout << "может получеться в след. раз"<<endl;
		cout << "restart the program that get the data fome the file(good luck)"<<endl;
		system("pause");
		
	}
	else
	{
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
	cout << endl;
	cout << "выберете вариант:";
	int a = changechoice();
	system("cls");
	switch (a)
	{
	case 1:
		cout<<endl<< "вводите новые данные:";
		cin>> name;
		if ((int)name[0] < 48 || (int)name[0] > 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._name.nam = name;

		break;
	case 2:
		cout << endl << "вводите новые данные:";
		cin >> firstname;
		if ((int)firstname[0] < 48 || (int)firstname[0] > 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._name.first = firstname;

		break;
	case 3: 
		cout << endl << "вводите новые данные:";
		cin >> secondname;
		if ((int)secondname[0] < 48 || (int)secondname[0] > 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._name.secname = secondname;

		break;
	case 4:
		cout << endl << "вводите новые данные:";
		cin >> country;
		if ((int)country[0] < 48 || (int)country[0] > 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._adres.country = country;

		break;
	case 5: 
		cout << endl << "вводите новые данные:";
		cin >> city;
		if ((int)city[0] < 48 || (int)city[0] > 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._adres.city = city;

		break;
	case 6: 
		cout << endl << "вводите новые данные:";
		cin >> street;
		if ((int)street[0] < 48 || (int)street[0] > 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._adres.street = street;

		break;
	case 7: 
		cout << endl << "вводите новые данные:";
		cin >> numOfHouse;
		if ((int)numOfHouse[0] >= 48 && (int)numOfHouse[0] <= 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._adres.ad = numOfHouse;

		break;
	case 8:
		cout << endl << "вводите новые данные:";
		cin >> faculty;
		if ((int)faculty[0] < 48 || (int)faculty[0] > 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._University.faculty = faculty;

		break;
	case 9: 
		cout << endl << "вводите новые данные:";
		cin >> specialty;
		if ((int)specialty[0] < 48 || (int)specialty[0] > 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._University.specialty = specialty;

		break;
	case 10:
		cout << endl << "вводите новые данные:";
		cin >> course;
		if ((int)course[0] >= 48 && (int)course[0] <= 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
		date::_date[choice]._University.course = course;

		break;
	case 11:
		cout << endl << "вводите новые данные:";
		cin >> group;
		if ((int)group[0] >= 48 && (int)group[0] <= 57)
		{

		}
		else
		{

			cout << "данные введены некорректно, попробуйте еще раз" << endl;
			system("pause");
			break;
		}
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
	cout << "выбирите изменяймое поле" << endl;

	cout << "1.имя" << endl;
	cout << "2.фамилия" << endl;
	cout << "3.отчество" << endl;

	cout << "4.страна" << endl;
	cout << "5.город" << endl;
	cout << "6.улица" << endl;
	cout << "7.дом" << endl;


	cout << "8.факультет" << endl;
	cout << "9.спецуха" << endl;
	cout << "10.курс" << endl;
	cout << "11.группа" << endl;



	cout << "12.выход" << endl;
}




