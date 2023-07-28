//На основе кода паттерна Singleton(см.слайд №15 презентации по Паттернам проектирования) 
//создать класс Twotone, позволяющий создавать только 2 объекта этого класса.
#include<iostream>
using namespace std;

class Twotone
{
private:
	static Twotone* f;
	static Twotone* t;
	int k;
	Twotone(int i) {
		k = i;
	}
	public:
		static Twotone* getReference1() {
			return f;
		}
		static Twotone* getReference2() {
			return t;
		}
		int getValue() {
			return k;
		}
		void setValue(int i) {
			k = i;
		}
};
Twotone* Twotone::f = new Twotone(5);
Twotone* Twotone::t = new Twotone(8);

int main() {
	Twotone* M = Twotone::getReference1();
	Twotone* R = Twotone::getReference2();

	cout << M->getValue() << endl << R->getValue() << endl << endl;
	cout << M->getValue() + R->getValue();
}