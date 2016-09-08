#include "Bomb.h"
#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
 Student a1, a2;
 Student a3("Valik",18);//с помощью конструктора с параметрами
 a1.setAll();
 char* q = a1.getName();
 int w = a1.getAge();
 a1.print();
 system("pause");
}