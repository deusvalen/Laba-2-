/*
������� ����� Student:  id,  �������,  ���,  ��������,
����  ��������,  �����,  �������, ���������, ����, ������.
�������-����� ��������� ������ � ���������� ����� (�������� ������������),
������ �������� ��������
������� ������ ��������. �������:
a)  ������ ��������� ��������� ����������;
b)  ������ ������� ������.
*/

#include "Bomb.h"
#include <iostream>

using namespace std;\

	/*
	1. ��� �� ������� - �������
	2. set ��������� ������ - �������
	3. � ���������� ������ ��������� - �������
	4. ������������ ������ �������� + ���� ����������  - �������
	5. ������� � ��������� ����� ����� ����� ������� ������ � ��������� ���������� - �������
	*/

	 char name[30];      //	���
	 char surname[30];   //	�������
	 char patronymic[30];// ��������
	 int  id;            //	����
	 char adress[30];    //	�����
	 int  number;        //	����� ��������
	 char faculty[30];   //	���������
	 int  course;        //	����� �����
	 int  group;         //	����� ������
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

