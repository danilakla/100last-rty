#include "func.h"
void func::print()
{
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



	}
}