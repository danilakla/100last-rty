#pragma once
#include "lib.h"
#include "date.h"
class func :protected date
{
public:
	//main manipulate method 
	void creatNewPerson();
	void print();
	void del();
	void addTofile();
	int File();
	void findthedate();
	void  changTheData();
	void sortDATE();
private:

	//find data
	void findOnNAME();
	void findOnFirstName();
	void findOnsecName();
	void findOnCountry();
	void findOnCity();
	void findOnStreet();
	void findOnNumberOFhouse();
	void findOnBirthday();
	void findOnFaculty();
	void findOnSpecialty();
	void findOnCourse();
	void findOnGroup();
	void findOnAllParm();

	void submenu();
	int choice();
	void infMenu();
	void listForSort(int i);

	//sort data

	void SORTfindOnNAME();
	void SORTfindOnFirstName();
	void SORTfindOnsecName();
	void SORTfindOnCountry();
	void SORTfindOnCity();
	void SORTfindOnStreet();
	void SORTfindOnNumberOFhouse();
	void SORTfindOnFaculty();
	void SORTfindOnSpecialty();
	void SORTfindOnCourse();
	void SORTfindOnGroup();

	void SORTsubmenu();
	int SORTchoice();
	void SORTinfMenu();

	//kost;
	void kosl(int k);
	int exit();

	//change the field of value
	
	void changesubmenu(int choice);
	int changechoice();
	void changeinfMenu();


	func stop(string value);

};