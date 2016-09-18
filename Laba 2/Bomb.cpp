#include "Bomb.h"
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

	int Student::counter ;

	Student::Student()
	{
		 cout << "\nОбычный конструктор\n" << endl;;
		 Counter();
	}

    Student::Student(const Student &obj)
    {      
         cout << "\nКонструктор копирования\n";
		 Counter();
    }


	Student::Student(char* NAME, int AGE)
	{
		 age = AGE;
		 strcpy(name, NAME);
	}

		Student::~Student()
	{
		cout << "\nДеструктор\n";
		counter--;
	}

	void Student::setName(char* NAME)
	{
		 strcpy(name, NAME);
	}

	void Student::setGroup(int GROUP)
	{
		 group = GROUP;
		 if (group <= 0)	
		 {
			 cout << "Wrong group, type it again" << endl;
			 cin >> group;
		 }
	}

	void Student::setSurname(char* SURNAME)
	{
		 strcpy(surname, SURNAME);
	}

	void Student::setPatronymic(char* PATRONIMIC)
	{
		 strcpy(patronymic, PATRONIMIC);
	}

	void Student::setId(int ID)
	{
		 id = ID;
		 while (id < 0 || cin.fail())	
		 {
			 cin.clear();
			 cin.sync();

			 cout << "Wrong id, type it again" << endl;
			 cin >> id;
		 }
	}

	void Student::setFaculty(char* FACULTY)
	{
		 strcpy(faculty, FACULTY);
	}

	void Student::setAdress(char* ADRESS)
	{
		 strcpy(adress, ADRESS);
	}

	void Student::setNumber(int NUMBER)
	{
		 number = NUMBER;
		 while (number < 0 || cin.fail()  )	
		 {
			 cin.clear();
			 cin.sync();
			 cout << "Wrong number, type it again" << endl;
			 cin >> number;
		 }
	}

	void Student::setCourse(int COURSE)
	{
		 course = COURSE;
		 while (course < 0 || cin.fail()  )	
		 {
			 cin.clear();
			 cin.sync();
			 cout << "Wrong course, type it again" << endl;
			 cin >> course;
		 }
	}

		void Student::setData()
	{
		cin >> data;	
		if ( !Datacheck() || cin.fail() )	
		{
			cin.clear();
			cin.sync();
			cout << "Wrong data, type it again!" << endl;
			setData();	
		}
	}

	int day, month, year; // birth date

	bool Student::Datacheck() // Magic function 
	{
		 char a[10];
		 //day check
		 a[0] = data[0]; 
		 a[1] = data[1];
		 day = atoi(a);

		 if (day >= 31 || day < 1)
		 {
			return 0;
		 }

		 //month check
		 a[0] = data[3]; 
		 a[1] = data[4];
		 month = atoi(a);

		 if (month >= 12 || month < 1)
		 {
			 return 0;
		 }

		 //year check
		 a[0] = data[6]; 
		 a[1] = data[7];
		 a[2] = data[8];
		 a[3] = data[9];
		 year = atoi(a);

		 if (year > 20000 || year < 1 || data[10])
		 {
			return 0;
		 }

		 if (data[2,5] != '.')
		 {
			return 0;
	 }

		 return 1;
	}

	int day2, month2, year2; // now date

	void Student::Years()
	{
		 int years = year2 - year; 
		 if (years>0)
		 if (month2<month || (month2 == month && day2<day)) years --;
		 cout << years << " years" <<endl;
		 age = years;	
	}

	void Student::setAll(char* NAME,char* SURNAME,char* PATRONIMIC,int ID,char* ADRESS,int NUMBER,char* FACULTY,int COURSE,int GROUP)
	{
		 cout << "Enter now date : " << endl;
		 setData();
		 day2 = day; month2 = month ; year2 = year;
		 cout << "Enter birth date : " << endl;
		 setData();
		 Years();
		 setName(NAME);
		 setSurname(SURNAME);
		 setPatronymic(PATRONIMIC);
		 setId(ID);
		 setAdress(ADRESS);
		 setNumber(NUMBER);
		 setFaculty(FACULTY);
		 setCourse(COURSE);
		 setGroup(GROUP);
	}

	void Student::print()
	{
		 cout << "\n\nName - " << Student::name << endl;
		 cout << "Age - " << Student::age << endl;
		 cout << "Surname - " << Student::surname << endl;
		 cout << "Patronic - " << Student::patronymic << endl;
		 cout << "ID - " << Student::id << endl;
		 cout << "Adress - " << Student::adress << endl;
		 cout << "Number - " << Student::number << endl;
		 cout << "Faculty - " << Student::faculty << endl;
		 cout << "Course - " << Student::course << endl;
		 cout << "Group - " << Student::group << endl;
	}

	void Student::facultyCheck(const char* faculty)
	{
		 if ( !strcmp(getFaculty(),faculty))
		 {
			print();
   		 }
	}

	void Student::groupCheck(int group)
	{
		if (getGroup() == group) 
		{
			print();
		}
	}




	char* Student::getFaculty()
	{
		return faculty;
	}

	int Student::getGroup()
	{
		return group;
	}

	void Student::Counter()
	{
		counter++;
	}



