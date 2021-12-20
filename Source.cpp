#include "lib.h"
#include "menu.h"

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	menu f;
	f.Menu();
}