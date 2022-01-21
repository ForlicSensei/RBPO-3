export module BPZ1901.Sofronov.Lab3.Task1;

import <cmath>;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			export double f1(double x) {
				return 1 / (sqrt(x) + sqrt(2));
			}
			export double f2(double x) {
				return (x < 3.2) ? (pow(x, 4) + 9) : (54 * pow(x, 4) / (-5 * x * x + 7));
			}
			double a(int i) {
				return (pow(-1.0, i) * (1 - (2 * i - 1) / (2 * (i + 1))));
			}
			export double f3(int n) {
				double acc = 0.0;
				for (int i = 0; i <= n; i++) {
					acc += a(i);
				}
				return acc;
			}
			export double f4(double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				for (int i = 2; abs(prev - curr) > eps; i++) {
					prev = curr;
					curr = a(i);
					acc += curr;
				}
				return acc;
			}
		}
	}
}