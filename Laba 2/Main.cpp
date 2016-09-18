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

using namespace std;\

	/*
	1. все по условию - Сделано
	2. set принимает данные - Сделано
	3. в деструктор строка отработки - Сделано
	4. динамический массив объектов + ввод количества  - Сделано
	5. вынести в отдельный метод вывод списа учебной группы и заданного факультета - Сделано
	*/

	 char name[30];      //	Имя
	 char surname[30];   //	Фамилия
	 char patronymic[30];// Отчество
	 int  id;            //	Айди
	 char adress[30];    //	Адрес
	 int  number;        //	Номер телефона
	 char faculty[30];   //	Факультет
	 int  course;        //	Номер курса
	 int  group;         //	Номер группы
	 void SetMain();

void main()
{
	 setlocale(LC_ALL, "Russian");

	 int n ;
	 cout<<"set n"<<endl;
	 cin >> n ;
	 Student *a;
	 a = new Student[2];
	 char faculty2[30]; 
	 int group2 ;
	 cout << "Enter the faculty to compare with other: " << endl;
	 cin >> faculty2;

	 for (int i = 0 ; i < n ; i ++)
	 {
				cout << "--------CREATING A NEW STUDENT--------" << endl;
				SetMain();
				a[i].setAll(name,surname,patronymic,id,adress,number,faculty,course,group);
	 }

	  cout <<"\n\n\n"<< faculty2 << "students" << endl;
	  for (int i = 0 ; i < n ; i ++)
	  {
		  a[i].facultyCheck(faculty2);
	  }

	  cout << "Enter the group number and you'll see a student" << endl;
	  cin >> group2;
	  for (int i = 0 ; i < n ; i ++)
	  {
		  a[i].groupCheck(group2);
	  }

	  delete [] a;
	  system("pause");
}

void SetMain()
{
      cout <<"Enter name:"<< endl;
	  cin >> name;
	  cout <<"Enter surname:"<< endl;
	  cin >> surname;
	  cout <<"Enter patronymic:"<< endl;
	  cin >> patronymic;
	  cout <<"Enter id:"<< endl;
	  cin >> id;
	  while (id < 0 || cin.fail())	
	  {
		  cin.clear();
		  cin.sync();
		  cout << "Wrong id, type it again" << endl;
		  cin >> id;
	  }
	  cout <<"Enter adress:"<< endl;
	  cin >> adress;
	  cout <<"Enter number:"<< endl;
	  cin >> number;
	  	  while (number > 999999 || number < 0 || cin.fail())	
	  {
		  cin.clear();
		  cin.sync();
		  cout << "Wrong number, type it again" << endl;
		  cin >> number;
	  }
	  cout <<"Enter faculty:"<< endl;
	  cin >> faculty;
	  cout <<"Enter course:"<< endl;
	  cin >> course;
	  	  while (course < 0|| cin.fail())	
	  {
		  cin.clear();
		  cin.sync();
		  cout << "Wrong course, type it again" << endl;
		  cin >> course;
	  }
	  cout <<"Enter group:"<< endl;
	  cin >> group; 
	  	  while (group < 0 || cin.fail())	
	  {
		  cin.clear();
		  cin.sync();
		  cout << "Wrong id, type it again" << endl;
		  cin >> group;
	  }
}

