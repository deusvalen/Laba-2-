#pragma once
#include "string.h"
class Student
{

private:
	char name[30]; //		Имя
	 char surname[30]; //	Фамилия
	 char patronymic[30];// Отчество
	 int age;//				Возраст
	 int id;//				Айди
	 char adress[30];//		Адрес
	 int number;//			Номер телефона
	 char faculty[30];//	Факультет
	 int course;//			Номер курса
	 int group;//			Номер группы
	 char data[9];
	 bool Datacheck();

public:

	 Student();
	 Student(char*, int);

	 //void setAge();
	 void setName();
	 void setSurname();
	 void setPatronymic();
	 void setId();
	 void setAdress();
	 void setNumber();
	 void setFaculty();
	 void setCourse();
	 void setGroup();
	 void setAll();
	 void setData();

	 ~Student(void);
	 void print();
	 char* getName(void);
	 char* getSurname(void); 
	 char* getSatronymic(void);
	 int getAge(void);
	 int getId(void);
	 char* getAdress(void);
	 int getNumber(void);
	 char* getFaculty(void);
	 int getCourse(void);
	 int getGroup(void);
};