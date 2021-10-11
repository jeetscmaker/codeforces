#include <bits/stdc++.h>
using namespace std;

template <class T>
class MyVector {
	T* v;
	int size;
public:
	MyVector(int m) {
		v = new T[size = m];
		for (int i = 0; i < size; ++i)
		{
			v[i] = 0;
		}
	}
	MyVector(T* a) {
		for (int i = 0; i < size; ++i)
		{
			v[i] = a[i];
		}
	}
	T operator*(MyVector &y) {
		T sum = 0;
		for (int i = 0; i < size; ++i)
		{
			sum += this -> v[i] + y.v[i];
		}
		return sum;
	}
};

int main() {
	int x[3] = {1, 2, 3};
	int y[3] = {4, 5, 6};
	MyVector<int> v1(x);
	MyVector<int> v2(y);
	//v1 = x;
	//v2 = y;
	int R = v1*v2;
	cout << "Result = " << R << endl;

	double x2[3] = {1.5, 2.5, 3.5};
	double y2[3] = {4.5, 5.5, 6.5};
	MyVector<double> v3(x2);
	MyVector<double> v4(y2);
	//v3 = x;
	//v4 = y;
	double R2 = v3*v4;
	cout << "Result = " << R2 << endl;
	return 0;
}