#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//inheritance
class Chef {//superclass
public:
	void makeChicken() {
		cout << "The chef makes chicken." << endl;
	}

	void makeSalad() {
		cout << "The chef makes a salad." << endl;
	}

	void makeSpecial() {
		cout << "The chef makes barbecue ribs." << endl;
	}
};

class ItalianChef : public Chef {//subclass
	void makePasta() {
		cout << "The chef is make-a da pasta!" << endl;
	}

	void makeSpecial() {
		cout << "The chef makes chicken parmesan!" << endl;
	}
};

int main() {
	Chef chef;
	chef.makeChicken();

	ItalianChef guido;
	guido.makeChicken();
	guido.makePasta();
}

//getters & setters
/*class Movie {
	string title, director, rating;

public:
	Movie(string aTitle, string aDirector, string aRating) {
		title = aTitle;
		director = aDirector;
		setRating(aRating);
	}

	void setRating(string aRating) {
		if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R") {
			rating = aRating;
		} else {
			rating = "NR";
		}
	}

	string getRating() {
		return rating;
	}
};

int main() {
	Movie  winnie = Movie("Winnie", "Dixie", "Bunions");
	cout << winnie.getRating() << endl;//NR
}*/

//constructors & object functions
/*class Book {
	string title;
	string author;
	int pages;

	public:
	void printBook() {
		cout << title << ", by " << author << ". Length is " << pages << " pages.";
	}

	Book(string aTitle, string aAuthor, int aPages) {
		title = aTitle;
		author = aAuthor;
		pages = aPages;
	}
};

int main() {
	Book book1 = Book("Animorphs", "Applegate", 200);
	book1.printBook();
}*/

//classes and objects
/*class Book {
	public:
		string title;
		string author;
		int pages;
};

int main() {
	string name = "Mike";
	double pi = 3.14;
	char favoriteLetter = 'F';

	Book book1;
	book1.title = "Harry Potter";
	book1.author = "Transphobe";
	book1.pages = 500;

	return 0;
}*/

//pointers
/*int main() {
	int age = 19;
	int* pAge = &age;
	double gpa = 2.7;
	double* pGpa = &gpa;
	string name = "Mike";
	string* pName = &name;

	cout << &age << endl;//long hexadecimal string
	cout << pAge << endl;//same as above
	cout << *pAge << endl;//19

	//* = dereferences
	//& = references

	return 0;
}*/

//comments
//Yeah, no, you really don't need to review that

//2d arrays & nested loops
/*int main() {

	int numberGrid[3][2] = {
		{ 1, 2 },
		{ 3, 4 },
		{ 5, 6 }
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << numberGrid[i][j] << endl;
		}
	}

	return 0;
}*/

//for loops
/*int arrayLength(int arr[]) {
	return sizeof(arr) / sizeof(arr[0]);
}

int main() {

	int nums[] = { 1, 2, 5, 7, 3 };

	for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
		cout << nums[i] << endl;
	}

	return 0;
}*/

//guessing game
/*int main() {
	int secretNum = 7;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;

	while (secretNum != guess && guessCount != guessLimit) {
		cout << "Enter guess: ";
		cin >> guess;
		guessCount++;
	}


	if (secretNum == guess) {
		cout << "You win!";
	} else {
		cout << "Out of guesses!";
	}

	return 0;
}*/

//while loops
/*int main() {
	int index = 1;

	while (index <= 5) {
		cout << index++ << endl;
	}

	do {
		cout << index << endl;
		index++;
	} while (index <= 10);

	return 0;
}*/

//switch statements
/*string numToDay(int num) {
	switch (num) {
		case 0: return "Sunday";
		case 1: return "Monday";
		case 2: return "Tuesday";
		case 3: return "Wednesday";
		case 4: return "Thursday";
		case 5: return "Friday";
		case 6: return "Saturday";
		default: return "Invalid Day Number";
	}
}

int main() {
	numToDay(0);//Sunday
	numToDay(3);//Wednesday
	numToDay('F');//Invalid Day Number

	return 0;
}*/

//building a better calculator
/*int main() {

	int num1, num2;
	char op;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter operator: ";
	cin >> op;
	cout << "Enter second number: ";
	cin >> num2;

	if (op == '+') {
		cout << num1 + num2 << endl;
	} else if (op == '-') {
		cout << num1 - num2 << endl;
	} else if (op == '/') {
		cout << num1 / num2 << endl;
	} else if (op == '*') {
		cout << num1 * num2 << endl;
	} else {
		cout << "Invalid operator." << endl;
	}

	return 0;
}*/

//if statements cont'd
/*int getMax(int num1, int num2, int num3) {//I'm only including this because the tutorial includes it. I know fmax exists.
	int result1 = num1 > num2 ? num1 : num2;//return the larger of numbers 1 and 2
	return result1 > num3 ? result1 : num3;//return the larger of round 1's winner and 3
}

int main() {
	cout << getMax(10, 50, 200);

	return 0;
}*/

//if statements
/*int main() {
	bool isMale = true;
	bool isTall = true;

	if (isMale && isTall) {
		cout << "You are a tall male." << endl;
	} else if (isMale && !isTall) {
		cout << "You are a short male." << endl;
	} else {
		cout << "You are not male." << endl;
	}

	return 0;
}*/

//return statement
/*double cube(double number) {
	return pow(number, 3);
}

int main() {
	cout << cube(5);//125

	return 0;
}*/

//functions
/*void sayHi(string name, int age);//dependant functions need to be before main or have stub before them

int main() {

	cout << "Top" << endl;
	sayHi("Mike", 60); 
	sayHi("Tom", 45);
	sayHi("Steve", 19);
	cout << "Bottom" << endl;

	return 0;
}

void sayHi(string name, int age) {//dependant functions need to be before main or have stub before them
	cout << "Hello, " << name << ". You are " << age << "." << endl;
}*/

//arrays //just use lists?
/*int main() {
	
	int luckyNums[] = { 4, 8, 15, 16, 23, 42 };

	cout << luckyNums[2] << endl;//15

	return 0;
}*/

//building a madlibs
/*int main() {
	string color, pluralNoun, celebrity;

	cout << "Enter a color: ";
	getline(cin, color);

	cout << "Enter a plural noun: ";
	getline(cin, pluralNoun);

	cout << "Enter a celebrity: ";
	getline(cin, celebrity);

	cout << "Roses are " << color << ".";
	cout << pluralNoun << " are blue.";
	cout << "I love " << celebrity << ".";

	return 0;
}*/

//building a calculator
/*int main() {
	int num1, num2;
	cout << "Enter your first number: ";
	cin >> num1;
	cout << "Enter your second number: ";
	cin >> num2;

	cout << "Your sum is " << num1 + num2 << "." << endl;

	return 0;
}*/

//getting user input
/*int main() {
	int age;
	cout << "Enter your age: ";
	cin >> age;

	cout << "You are " << age << " years old." << endl;

	string name;
	cout << "Enter your name: ";
	while (name.length() == 0) {//necessary because otherwise this getline will read the enter from the previous input as a newline.
		getline(cin, name);
	}

	cout << "Hello, " << name << "." << endl;

	return 0;
}*/

//working with numbers
/*int main() {
	int wnum = 5;
	double dnum = 5.5;

	cout << 5 + 7 << endl;//12
	cout << 5 - 7 << endl;//-2
	cout << 5 * 7 << endl;//35
	cout << 5.0 / 7 << endl;//0.714~
	cout << 5 % 7 << endl;//5

	wnum++;//6
	wnum *= 3;//18

	cout << pow(2, 5) << endl;//32
	cout << sqrt(36) << endl;//6
	cout << round(4.6) << endl;//5
	cout << ceil(4.1) << endl;//5
	cout << floor(4.9) << endl;//4
	cout << fmax(3, 10) << endl;//10
	cout << fmin(3, 10) << endl;//3

	return 0;
}*/

//working with strings
/*int main() {
	string phrase = "Cow Academy";
	phrase[0] = 'B';

	cout << (phrase.find("sdg") == -1) << endl;//1
	cout << phrase.substr(4, 3) << endl;//Aca

	return 0;
}*/

//data types
/*int main() {
	char grade = 'A';
	string phrase = "Cow Academy";
	int age = 50;
	double gpa = 3.9;
	bool isMale = true;

	return 0;
}*/

//variables
/*int main() {
	string characterName = "John";
	int characterAge = 35;

    cout << "There once was a man named " << characterName << "." << endl;
	cout << "He was " << characterAge << " years old." << endl;
	cout << "He liked the name " << characterName << "." << endl;
	cout << "But did not like being " << characterAge << "." << endl;
}*/