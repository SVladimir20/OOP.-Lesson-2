#include <iostream>
using namespace std;
class Fruit
{
public:
	Fruit(string name, string color) : f_color(color), f_name(name) {}
	Fruit(string color) : f_color(color) {}
	Fruit() {};
	void setName(string name)
	{
		f_name = name;
	}
	void setColor(string color)
	{
		f_color = color;
	}
	string getName() const
	{
		return f_name;
	}
	string getColor() const
	{
		return f_color;
	}

protected:
	string f_name;
	string f_color;
};

class Apple : public Fruit
{
public:
	Apple(string name, string color) : Fruit(name, color) {}
	Apple(string color) : Fruit (color)
	{
		setName("apple");
		setColor(color);
	}
	Apple() {};
};

class Banana : public Fruit
{
public:
	Banana(string name, string color) : Fruit(name, color) {}
	Banana(string color) : Fruit(color) {}
	Banana()
	{
		setName("banana");
		setColor("yellow");
	}
};

class GrannySmith : public Apple
{
public:
	GrannySmith(string name, string color) : Apple(name, color) {}
	GrannySmith(string color) : Apple(color) {}
	GrannySmith()
	{
		setName("Granny Smith apple");
		setColor("green");
	}
};

int main()
{
	Apple a("red");
	Banana b;
	GrannySmith c;
	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
	return 0;
}