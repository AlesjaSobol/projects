#include <iostream>

using namespace std;

class Matrix
{

private:
	int **arr;
	int rows, cols;



public:
	//�����������
	Matrix(int r, int c)
	{
		this->rows = r;
		this->cols = c;
		arr = new int[10];

		cout << "���������� ����������� " << this << endl;

	};





	//����������
	~Matrix()
	{
		cout << "���������� ���������� " << this << endl;
	};

};




void main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "������\n";

	Matrix matrix(5, 5);

}