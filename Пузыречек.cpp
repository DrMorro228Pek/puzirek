// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{	
	int m[5] = {0,2,3,-3,1};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (m[j] > m[j + 1]) {
				int tmp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		std::cout << m[i] << "\n";
	}

	system("pause");
    return 0;
}

