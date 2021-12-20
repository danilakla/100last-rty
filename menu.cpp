#include "menu.h"
int menu::Menu() {
	infMenu();
	cout << endl;
	switch (choice())
	{
	case 1:

		//func::creatNewPerson();
		system("cls");

		cout << endl << endl << "===================" << endl;


		return Menu();
	case 2:
		system("cls");

		//func::print();
		cout << endl << endl << "===================" << endl;


		return Menu();

	case 3:
		system("cls");

		//func::del();

		cout << endl << endl << "===================" << endl;




		return Menu();
	case 4:
		system("cls");

		//func::addTofile();

		cout << endl << endl << "===================" << endl;




		return Menu();

	case 5:
		system("cls");

		///func::file();

		cout << endl << endl << "===================" << endl;




		return Menu();
	case 6:
		system("cls");

		//func::findthedate();

		cout << endl << endl << "===================" << endl;




		return Menu();
	case 7:
		system("cls");

		//func::sortDATE();

		cout << endl << endl << "===================" << endl;
		return Menu();
	case 8:
		system("cls");

		//func::changTheData();

		cout << endl << endl << "===================" << endl;
		return Menu();
	case 9:
		return 0;

	default:
		break;
	}
}
int  menu::choice() {
	int a;
	cin >> a;
	cout << endl << endl;
	return a;
}
void  menu::infMenu()
{
	cout << "1.добавить студента" << endl;

	cout << "2.список студентов" << endl;

	cout << "3.удалить студента " << endl;

	cout << "4.сохранить данные в файл" << endl;

	cout << "5.получить данные студентов из файла" << endl;

	cout << "6.поиск студента" << endl;

	cout << "7.сортировка" << endl;

	cout << "8.изменения данных студента" << endl;

	cout << "9.выход" << endl;


}

