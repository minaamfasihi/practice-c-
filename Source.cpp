#include <iostream>
#include "mVector.h"
using namespace std;

int main()
{
	mVector<int> vec(5);
	cout << (vec.isEmpty() ? "Empty" : "Non-empty") << endl;
	vec.insert(3, 0);
	vec.pushBack(4);
	vec.pushBack(6);
	vec.pushBack(9);
	vec.prepend(898);
	vec.print();
	cout << (vec.isEmpty() ? "Empty" : "Non-empty") << endl;
	vec.pushBack(10);
	cout << "Pop: " << vec.pop() << endl;
	vec.pushBack(11);
	vec.print();
	vec.prepend(989);
	vec.print();
	vec.deleteAndShift(6);
	vec.print();
	vec.deleteAndShift(5);
	vec.print();
	vec.deleteAndShift(1);
	cout << "After deleting from index 1" << endl;
	vec.print();
	vec.deleteAndShift(2);
	cout << "After deleting from index 2" << endl;
	vec.print();
	cout << "Result of find: " << vec.find(898) << endl;
	cout << "Result of find: " << vec.find(989) << endl;
	cout << vec.at(4) << endl;
	cout << vec.at(-5) << endl;
	cout << vec.at(1) << endl;
	cout << "Size: " << vec.Size() << endl;
	vec.print();
	return 0;
}