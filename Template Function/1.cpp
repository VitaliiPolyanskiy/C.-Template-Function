#include <iostream>
#include "Header.h"
using namespace std;



int main()
{
	cout << "\nMaximum=";
	// Создание экземпляра шаблона функции
	cout << Maximum(10, 15); // генерируется int-версия
	cout << ", " << Maximum('z','a'); // генерируется char-версия
	cout << ", " << Maximum(3.14, 5.5); //генерируется double-версия
	cout << ", "<< Maximum(10L, 15L); //генерируется long-версия

	// ошибка компиляции: неявных преобразований типов не происходит
	//cout << ", " << Maximum(10, 7.3); 

	cout << "\nMinimum: " << Minimum(2.8, 5l); // T1 Minimum(T1 a, long b)
	cout << "\nMinimum: " << Minimum(2.8, 5); // T1 Minimum(T1 a, T2 b)
	cout << "\nMinimum: " << Minimum(3, 6.7, 1.1); // T2 Minimum(T1 a, T2 b, T3 c)

	return 0;
}