#include <iostream>
using namespace std;
size_t counter{};
enum class ID
{
	id_1 = 1,
	id_2 = 2,
	id_3 = 3,
	id_4 = 4,
	id_5 = 5,
};
class Person
{
public:
	Person(ID id, string n, unsigned char a, string s, unsigned char w) : name(n), age(a), sex(s), weight(w) {}
	void setName(string n)
	{
		name = n;
	}
	void setAge(unsigned char a)
	{
		age = a;
	}
	void setSex(string s)
	{
		sex = s;
	}
	void setWeight(unsigned char w)
	{
		weight = w;
	}
	string getName() const
	{
		return name;
	}
	unsigned char getAge() const
	{
		return age;
	}
	string getSex() const
	{
		return sex;
	}
	unsigned char getWeight() const
	{
		return weight;
	}

protected:
	string name;
	unsigned char age{};
	string sex;
	unsigned char weight{};
};
class Student : public Person
{
public:
	Student(ID id, string n, unsigned char a, string s, unsigned char w, unsigned int y) : Person(id, n, a, s, w), year(y)
	{
		counter++;
	}
	void setYear(unsigned int y)
	{
		year = y;
	}
	unsigned int getYear() const
	{
		return year;
	}

private:
	unsigned int year{};
};
void Print(int choose, Student& s1, Student& s2, Student& s3, Student& s4, Student& s5)
{
	switch (choose)
	{
	case 1:
		cout << endl << "ID: " << static_cast<int>(ID::id_1) << ", имя: " << s1.getName() << ", возраст: "
			<< static_cast<int>(s1.getAge()) << ", пол: " << s1.getSex() << ", вес: "
			<< static_cast<int>(s1.getWeight()) << ", год обучения: " << s1.getYear() << ".";
		break;
	case 2:
		cout << endl << "ID: " << static_cast<int>(ID::id_2) << ", имя: " << s2.getName() << ", возраст: "
			<< static_cast<int>(s2.getAge()) << ", пол: " << s2.getSex() << ", вес: "
			<< static_cast<int>(s2.getWeight()) << ", год обучения: " << s2.getYear() << ".";
		break;
	case 3:
		cout << endl << "ID: " << static_cast<int>(ID::id_3) << ", имя: " << s3.getName() << ", возраст: "
			<< static_cast<int>(s3.getAge()) << ", пол: " << s3.getSex() << ", вес: "
			<< static_cast<int>(s3.getWeight()) << ", год обучения: " << s3.getYear() << ".";
		break;
	case 4:
		cout << endl << "ID: " << static_cast<int>(ID::id_4) << ", имя: " << s4.getName() << ", возраст: "
			<< static_cast<int>(s4.getAge()) << ", пол: " << s4.getSex() << ", вес: "
			<< static_cast<int>(s4.getWeight()) << ", год обучения: " << s4.getYear() << ".";
		break;
	case 5:
		cout << endl << "ID: " << static_cast<int>(ID::id_5) << ", имя: " << s5.getName() << ", возраст: "
			<< static_cast<int>(s5.getAge()) << ", пол: " << s5.getSex() << ", вес: "
			<< static_cast<int>(s5.getWeight()) << ", год обучения: " << s5.getYear() << ".";
		break;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int choose;
	Student s1(ID::id_1, "Первак", 19, "Мужчина", 80, 2020);
	Student s2(ID::id_2, "Вторина", 18, "Женщина", 65, 2021);
	Student s3(ID::id_3, "Третякович", 23, "Мужчина", 100, 2017);
	Student s4(ID::id_4, "Четвертухина", 23, "Женщина", 70, 2017);
	Student s5(ID::id_5, "Пятихатченко", 24, "Мужчина", 90, 2016);
	cout << "Введите ID студента (от 1 до 5): ";
	cin >> choose;
	Print(choose, s1, s2, s3, s4, s5);
	return 0;
}