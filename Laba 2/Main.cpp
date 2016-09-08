/*
Создать класс Student:  id,  Фамилия,  Имя,  Отчество,
Дата  рождения,  Адрес,  Телефон, Факультет, Курс, Группа.
Функции-члены реализуют запись и считывание полей (проверка корректности),
расчет возраста студента
Создать массив объектов. Вывести:
a)  список студентов заданного факультета;
b)  список учебной группы.
*/

#include "Bomb.h"
#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
	 Student a[2];
	 char faculty[30]; 
	 int group ;

	 cout << "Enter the faculty to compare with other: " << endl;
	 cin >> faculty;

	 for (int i = 0 ; i < 2 ; i ++)
	 {
				cout << "--------CREATING A NEW STUDENT--------" << endl;
				a[i].setAll();
	 }

	  cout <<"\n\n\n"<< faculty << "students" << endl;
	  for (int i = 0 ; i < 2 ; i ++)
	  {
				if ( !strcmp(a[i].getFaculty(),faculty))
				{
						a[i].print();
   				}
	  }

	  cout << "Enter the group number and you'll see a student" << endl;
	  cin >> group;
	  for (int i = 0 ; i < 2 ; i ++)
	  {
				if ( a[i].getGroup() == group) 
				{
						a[i].print();
				}
	  }

	  system("pause");
}