////Тема 1 - Базовые элементы языка С++
////Упражнение 1. Вычислить значение выражения
////2) e^-x - cosx + sin2xy
//#include <cstdio>
//#include <iostream> 
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//
//  setlocale(LC_ALL, ".1251"); 
// 
//	int x, y;
//	cout << "Введите X и Y :" << endl;
//	cin >> x >> y;
//
//
//	cout << "Решение: " << endl;
//	cout << " e^-" << x << " - " << round(cos(x)) << " + " << round(sin(2 * x * y)) << " = ";
//	cout << " e^-" << x << " + " << 0 - round(cos(x)) + round(sin(2 * x * y));
//
//	return 0; 
//}

////Упражнение 2. Написать программу, которая подсчитывает:
////2) площадь равностороннего треугольника, периметр которого равен p.
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main() 
//{
//
//    setlocale(LC_ALL, ".1251");
//
//    double p, a;
//    double S;
//    cin >> p; 
//
//    a = p / 3;
//    S = a * a * sqrt(3.0) / 4.0; 
//    cout << "Площадь равностороннего треугольника = " << S << endl;
//    return 0;
//}

////Упражнение 3. Написать программу, которая определяет:  
////2)является ли заданное число четным
//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, ".1251");
//	int n;
//	cout << "Число: " << endl;
//	cin >> n;
//
//	if (n % 2 == 0) cout << "Да";
//	else cout << "Нет";
//
//	return 0;
//}