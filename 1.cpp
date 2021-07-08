#include <iostream>
using namespace std;
size_t id{};
class Person
{
public:
	Person(string n, unsigned char a, string s, unsigned char w) : name(n), age(a), sex(s), weight(w)
	{
		id++;
	}
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
	Student(string n, unsigned char a, string s, unsigned char w, unsigned int y) : Person(n, a, s, w), year(y)
	{
		static size_t counter{};
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
		cout << endl << "ID: " << id << ", ���: " << s1.getName() << ", �������: "
			<< static_cast<int>(s1.getAge()) << ", ���: " << s1.getSex() << ", ���: "
			<< static_cast<int>(s1.getWeight()) << ", ��� ��������: " << s1.getYear() << ".";
		break;
	case 2:
		cout << endl << "ID: " << id << ", ���: " << s2.getName() << ", �������: "
			<< static_cast<int>(s2.getAge()) << ", ���: " << s2.getSex() << ", ���: "
			<< static_cast<int>(s2.getWeight()) << ", ��� ��������: " << s2.getYear() << ".";
		break;
	case 3:
		cout << endl << "ID: " << id << ", ���: " << s3.getName() << ", �������: "
			<< static_cast<int>(s3.getAge()) << ", ���: " << s3.getSex() << ", ���: "
			<< static_cast<int>(s3.getWeight()) << ", ��� ��������: " << s3.getYear() << ".";
		break;
	case 4:
		cout << endl << "ID: " << id << ", ���: " << s4.getName() << ", �������: "
			<< static_cast<int>(s4.getAge()) << ", ���: " << s4.getSex() << ", ���: "
			<< static_cast<int>(s4.getWeight()) << ", ��� ��������: " << s4.getYear() << ".";
		break;
	case 5:
		cout << endl << "ID: " << id << ", ���: " << s5.getName() << ", �������: "
			<< static_cast<int>(s5.getAge()) << ", ���: " << s5.getSex() << ", ���: "
			<< static_cast<int>(s5.getWeight()) << ", ��� ��������: " << s5.getYear() << ".";
		break;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int choose;
	Student s1("������", 19, "�������", 80, 2020);
	Student s2("�������", 18, "�������", 65, 2021);
	Student s3("����������", 23, "�������", 100, 2017);
	Student s4("������������", 23, "�������", 70, 2017);
	Student s5("������������", 24, "�������", 90, 2016);
	cout << "������� ID �������� (�� 1 �� 5): ";
	cin >> choose;
	Print(choose, s1, s2, s3, s4, s5);
	return 0;
}