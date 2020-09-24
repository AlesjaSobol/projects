#include <iostream>
#include <string>

using namespace std;

/*����������� ����� String, ������� � ���������� ����� �������������� ���
������ �� ��������. ����� ������ ���������:
- �����������, ����������� ��������� ������ ������������� �������;
- �����������, ������� ������ ������ � �������������� � �������,
���������� �� ������������;
- ������ ��� �����/������ ������;
- ����� ������������ ����� ������;
- �����, ����������� ��������������� ������ � ������� � ���������� �������
(���� ������� �����).
����� ������������ ��������� �� ����������� ����������.
*/

class String
{
private:

	string str;
	int size;
public:
	String();
	String(string str);
	void InPut();
	void OutPut();
	int length();
};

String::String()
{
	string str("DEFAULT CONSTRUCTOR: Study its very interesting\n");
	cout << str << endl;
}

String::String(string str)
{

}

void String::InPut()
{
	cout << "Enter a string\n";
	getline(cin,str);
}

int String::length()
{

	int k = 0;
	cout << str << endl;//�������

	int size = str.size(); //�������� ������ ������
	for (int i = 0; i < size; i++)
	{
		//str.at(i) = '!'; // �������� �������

		k++;
		if (str[i] == ' ')
			k++;
	}
	//cout << str.at(i);

	cout << endl;
	cout << "_________________\n";
	cout << k;
	return k;
}

void String::OutPut()
{
	cout << "The line is filled in by the user " << str << endl;
}

int main()
{

	String all_string_1;

	all_string_1.InPut();
	all_string_1.OutPut();
	all_string_1.length();
}