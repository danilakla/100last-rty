#pragma once
#include "lib.h"
#include"headofdata.h"

class date
{
public:
	date();
	date(int choice);//for buff
	date(string name, string first, string secname,

		string country, string city, string  adres, string dom,

		string day, string mounth, string yers,

		string faculty, string specialty, string cours, string group);



	name _name;
	adres _adres;
	da _da;
	University _University;


	static vector<date> _date_T;
	static vector<date> _date;
	static vector<date> _date_buff;
	static vector<date>_date_buff_sort;


	static int sortcount;
	static int count1;
	static int count;

	static bool r;
};