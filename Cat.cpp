#include <iostream>
#include <string>
using namespace std;
class Cat
{
	string name, colour, gender;
	int age;
public:
	void Setname(string newname){name = newname;}
	void Setcolour(string newcolour){colour = newcolour;}
	void Setgender(string newgender){gender = newgender;}
	string getname(){return name;}
	string getcolour(){return colour;}
	string getgender(){return gender;}
	void showinfo()
	{
		cout << "Cat " << name << " is " << colour << " and is " << gender << " and has age " << age << endl;
	}
	Cat() : gender("male"), name("Barsik"), colour("Stray"), age(2){}
	Cat(string newname, string newcolour, string newgender, int newage) :
		name(newname), colour(newcolour), gender(newgender), age(newage){}
	Cat(const Cat& obj) : name(obj.name), colour(obj.colour), gender(obj.gender), age(obj.age) {}
	~Cat() {cout << "Cat" << name << " is deleted" << endl;}
};
void main()
{
	Cat tom;
	tom.showinfo();
	Cat matros("Martin", "Gray", "Male",1);
	matros.showinfo();
	Cat matros2 = matros;
	matros2.showinfo();
	Cat* pcat = new Cat;
	delete pcat;
}