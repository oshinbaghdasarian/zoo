//
#include <iostream> 
#include <string> 
using namespace std;

struct animal {
	string name;
};

void moves(const animal& a);
void makeSound(const animal& a);

int main() {
	animal fish;
	animal bird;
	animal mammal;

	fish.name = "Fish";
	bird.name = "Bird";
	mammal.name = "Mammal";

	moves(fish);
	makeSound(fish);

	moves(bird);
	makeSound(bird);

	moves(mammal);
	makeSound(mammal);

	return 0;
}

void moves(const animal& a) {
	cout << a.name << " ";
	if (a.name == "Fish")
		cout << "swims in the water." << endl;
	else if (a.name == "Bird")
		cout << "flies in the sky." << endl;
	else if (a.name == "Mammal")
		cout << "walks on the ground." << endl;
}

void makeSound(const animal& a) {
	cout << a.name << " ";
	if (a.name == "Fish")
		cout << "makes underwater sounds." << endl;
	else if (a.name == "Bird")
		cout << "chirps and sings." << endl;
	else if (a.name == "Mammal")
		cout << "makes various animal sounds." << endl;
}
