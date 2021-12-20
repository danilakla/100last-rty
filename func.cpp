#include "func.h"
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
}