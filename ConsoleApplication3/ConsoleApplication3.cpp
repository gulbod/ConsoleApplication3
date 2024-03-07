#include "blo.h"
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
	public:
		int id{};
		string fio{};
		string gruppa{};
	private:
		char pol{};
		int year{};
		int stependia{};
		

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student Ivan;
	Ivan.id = { 1 };
	Ivan.fio = { "gorbunov uvan " };
	Ivan.gruppa = { "2ucup-222"};
	<< cout << Ivan.id << " " << Ivan.fio;
 
		Student Ivan{ 1, "Иванов Иван", 2007, 'М', 65, 1.77, 900, "2ОИБАС1122" };
		Student Fedor{ 2, "Петров Фёдор", 2006, 'М', 69, 1.68, 1200, "2ОИБАС1222" };
		Student Anna{ 3, "Иванова Анна", 2005, 'Ж', 58, 1.59, 900, "2ОИБАС1022" };
		Student Lena{ 4, "Смирнова Лена", 2007, 'Ж', 59, 1.61, 1200, "2ОИБАС922" };
		Student Peter{ 5, "Петров Пётр", 2006, 'М', 66, 1.7, 0, "2ОИБАС1122" };
		Student Aleksey{ 6, "Николаев Алексей", 2005, 'М', 68, 1.72, 1200, "2ОИБАС1222" };
		Student Nikolay{ 7, "Романов Николай", 2006, 'М', 71, 1.66, 900, "2ОИБАС1122" };
		Student Timur{ 8, "Гайдар Тимур", 2007, 'М', 70, 1.65, 1200, "2ОИБАС1022" };
		Student Asya{ 9, "Белова Ася", 2009, 'Ж', 52, 1.78, 0, "2ОИБАС1322" };
		Student Sonya{ 10, "Громова Соня", 2008, 'Ж', 53, 1.75, 900, "2ОИБАС922" };
		Student a[10] = { Ivan, Fedor, Anna, Lena, Peter, Aleksey, Nikolay, Timur, Asya, Sonya  };
		
		vector <Student> vect;
		for (int i = 0; i < 10; i++)
		{
			vect.push_back(a[i]);
	}
		void Print()
		{
			cout << setw(3) << left << id << setw(18) << left << fio
				<< setw(7) << left << age << setw(7) << left << pol
				<< setw(7) << left << ves << setw(7) << left << rost <<
				setw(7) << left << stependia << setw(7) << left << gruppa << endl;
		}
		return 0;
	}
