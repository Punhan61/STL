#include<iostream>
#include<fstream>
#include<map>
#include<list>

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

const std::map<int, std::string> crime =
{
	{0,"Проезд на красный"},
	{1,"Превышение скорости"},
	{2,"Парковка в неположеном месте"},
	{3,"Езда по встречной полосе"},
	{4,"Оскорбление офицера"},
	{5,"Езда в не трезвом состоянии"},
};

void main()
{
	setlocale(LC_ALL, "");
	std::map<std::string, std::list<int>> base =
	{

	};
}