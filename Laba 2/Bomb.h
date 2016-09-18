#pragma once
#include "string.h"
#include <Windows.h>

class Student
{
public:
		 Student();
		 Student(char*, int);
		 Student(const Student &obj);
		 void setName(char* NAME);
		 void setSurname(char* SURNAME);
		 void setPatronymic(char* PATRONIMIC);
		 void setId(int ID);
		 void setAdress(char* ADRESS);
		 void setNumber(int NUMBER);
		 void setFaculty(char* FACULTY);
		 void setCourse(int COURSE);
		 void setGroup(int GROUP);
		 void setAll(char* NAME,char* SURNAME,char* PATRONIMIC,
			         int ID,char* ADRESS,int NUMBER,
					 char* FACULTY,int COURSE,int GROUP);
		 void setData();

		 ~Student(void);
		 void print();
		 char* getFaculty(void);
		 int getGroup(void);
		 void facultyCheck(const char* faculty);
		 void groupCheck(int group);
		 static int counter;
		 static void Counter();
		 static const int payment = 100500;


private:
		 char name[30];      //	���
		 char surname[30];   //	�������
		 char patronymic[30];// ��������
		 int  age;           //	�������
		 int  id;            //	����
		 char adress[30];    //	�����
		 int  number;        //	����� ��������
		 char faculty[30];   //	���������
		 int  course;        //	����� �����
		 int  group;         //	����� ������
		 char data[9];
		 bool Datacheck();
		 void Years();
};

