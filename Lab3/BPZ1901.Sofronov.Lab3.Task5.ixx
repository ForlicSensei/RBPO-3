export module BPZ1901.Sofronov.Lab3.Task5;

import <cmath>;

namespace RBPO {
	namespace Lab3 {
		namespace Task5 {
			export double f1(double x);
			export double f2(double x);
			double a(int i);
			export double f3(int n);
			export double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab3::Task5::f1(double x) {
	return 1 / (sqrt(x) + sqrt(2));
}
double RBPO::Lab3::Task5::f2(double x) {
	if (x < 3.2) return (pow(x, 4) + 9);
	else return (54 * pow(x, 4) / (-5 * x * x + 7));
}
double RBPO::Lab3::Task5::a(int i) {
	return (pow(-1.0, i) * (1 - (2 * i - 1) / (2 * (i + 1))));
}
double RBPO::Lab3::Task5::f3(int n) {
	double acc = 0.0;
	int i = 0;
	do {
		acc += a(i);
		i++;
	} while (i <= n);
	return acc;
}
double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double curr = a(1);
	double acc = prev + curr;
	int i = 2;
	do {
		prev = curr;
		curr = a(i);
		i++;
		acc += curr;
	} while (abs(prev - curr) > eps);
	return acc;
}