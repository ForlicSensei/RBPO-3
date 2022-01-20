
module BPZ1901.Sofronov.Lab3.Task2;

namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
            double f1(double x) {
                return 1 / (sqrt(x) + sqrt(2));
            }

            double f2(double x) {
                if (x < 3.2) return (pow(x, 4) + 9);
                else return (54 * pow(x, 4) / (-5 * x * x + 7));
            }

            double a(int i) {
                return (pow(-1.0, i) * (1 - (2 * i - 1) / (2 * (i + 1))));
            }

            double f3(int n) {
                double acc = 0.0;
                int i = 0;
                while (i <= n) {
                    acc += a(i);
                    i++;
                }
                return acc;
            }

            double f4(double eps) {
                double prev = a(0);
                double curr = a(1);
                double acc = prev + curr;
                int i = 2;
                while (abs(prev - curr) > eps) {
                    prev = curr;
                    curr = a(i);
                    i++;
                    acc += curr;
                }
                return acc;
            }
		}
	}
}
