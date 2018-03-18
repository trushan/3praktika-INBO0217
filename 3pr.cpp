#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale>

using namespace std;

class Book
{
	private:
	string name, author, genre;
	int year, price, pages;
	
	public:
	void set()
	{
		cout << "Enter name of the book >> ";
		cin >> name;
		cout << "Enter author of the book >> ";
		cin >> author;
		cout << "Enter genre of the book >> ";
		cin >> genre;
		cout << "Enter year of issue >> ";
		cin >> year;
		cout << "Enter price of the book >> ";
		cin >> price;
		cout << "Enter quantity of pages of the book >> ";
		cin >> pages;
	}
	
	void show()
	{
		cout << "Name of the book is " << name << endl;
		cout << "Author of the book is " << author << endl;
		cout << "Genre of the book is " << genre << endl;
		cout << "Year of issue is " << year << endl;
		cout << "Price of the book is " << price << endl;
		cout << "Quantity of pages of the book is " << pages << endl;
	}
};

int main()
{
	Book b1;
	
	b1.set();
	
	b1.show();
	
	return 0;
}