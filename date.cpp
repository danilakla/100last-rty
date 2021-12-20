#include "date.h"
date::date()
{

}///gblhc
date::date(string name, string first, string secname, string country, string city, string  adres, string dom, string day, string mounth, string yers, string faculty, string specialty, string cours, string group) {

	_date.push_back(*this);
	this->date::_date[count]._name.nam = name;
	this->date::_date[count]._name.first = first;
	this->date::_date[count]._name.secname = secname;

	this->date::_date[count]._adres.country = country;
	this->date::_date[count]._adres.city = city;
	this->date::_date[count]._adres.street = adres;
	this->date::_date[count]._adres.ad = dom;

	this->date::_date[count]._da.day = day;
	this->date::_date[count]._da.mounth = mounth;
	this->date::_date[count]._da.years = yers;

	this->date::_date[count]._University.faculty = faculty;
	this->date::_date[count]._University.specialty = specialty;
	this->date::_date[count]._University.course = cours;
	this->date::_date[count]._University.group = group;

	date::count++;

}
date::date(int choice) {
	_date_buff.push_back(*this);//mistake

	date::count1++;

}

vector<date>date::_date;
vector<date>date::_date_buff;
vector<date>date::_date_buff_sort;


int date::sortcount = 0;
int date::count = 0;
int date::count1 = 0;

bool date::r = true;

