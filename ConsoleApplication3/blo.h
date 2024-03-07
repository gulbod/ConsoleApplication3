#include <iostream>
#include <string>
using namespace std;

struct Student
{
	int id{}; string fio; int god{}; char pol{};
	int ves{}; float rost{}; int stependia{}; string gruppa[14];
};

void Show(Student a)
{

	cout << "Id = " << a.id << endl;
	cout << "fio = " << a.fio << endl;
	cout << "god = " << a.god << endl;
	cout << "pol = " << a.pol << endl;
	cout << "ves = " << a.ves << endl;
	cout << "rost = " << a.rost << endl;
	cout << "ctependia = " << a.stependia << endl;
	cout << "gruppa = " << a.fio << "\t" << a.gruppa << endl;
	cout << "gender" << a.m << endl;

}
