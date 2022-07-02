// ConsoleApplication25.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

string str1{ "avadakedavra" };
string str2{ "av" };

void Insert(int startIndex, string value)
{
	int index = str1.find(str2);

	if (index < 0) return;

	//for (size_t i = startIndex; i < str1.length(); i++)
	//{
			str1.insert(i, 1, '(');
			str1.insert(i + str2.length() + 1, 1, ')');

		//	break;
		//}
	}


}
int main()
{

	while (str1.find(str2) != string::npos)
	{
		size_t i = str1.find(str2);
		

	}

	cout << str1;
}
