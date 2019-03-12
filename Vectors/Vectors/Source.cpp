#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
void showVector(const vector<T>&  MyVector) {
	for (unsigned int j = 0; j < MyVector.size(); ++j)
		cout << MyVector[j] << " ";
	cout << endl;
	cout << "/ Output the vector " << MyVector.size() << endl;
}
vector<int> reversed(const vector<int>&  MyVector) {
	auto seq = MyVector;
	for (unsigned int i = 0; i < seq.size() / 2; ++i) {
		auto tmp = seq[i];
		seq[i] = seq[seq.size() - 1 - i];
		seq[seq.size() - 1 - i] = tmp;
	}
	return seq;
}

int main() {
	setlocale(LC_ALL, "Russian");

	typedef vector<string> myStrVector;
	myStrVector a = { "Ivan","Ivanov" };
	myStrVector b = { "is a programmer" };

	vector<int> c = { 1,4,7,3,8,10 };
	showVector(c);
	showVector(reversed(c));



	for (unsigned int i = 0; i < b.size(); ++i) {
		a.push_back(b[i]);
	}
	cout << endl;
	cout << "/ Addition b vector to the a vector " << endl << endl;

	showVector(a);

	system("pause");
}