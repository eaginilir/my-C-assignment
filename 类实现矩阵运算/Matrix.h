#pragma once

class Matrix
{
	int r, c;
	int** mem;
public:
	Matrix(Matrix& a)
	{
		r = a.r;
		c = a.c;
		mem = new int* [r];
		for (int i = 0; i < r; i++)
		{
			mem[i] = new int[c];
			for (int j = 0; j < c; j++)
			{
				mem[i][j] = a.mem[i][j];
			}
		}
	};
	Matrix(int row, int col, int* mat = nullptr)
	{
		r = row;
		c = col;
		mem = new int* [r];
		for (int i = 0; i < r; i++)
		{
			mem[i] = new int[c];
			if (mat != nullptr)
			{
				for (int j = 0; j < c; j++)
				{
					mem[i][j] = *(mat + c * i + j);
				}
			}
			else
			{
				for (int j = 0; j < c; j++)
				{
					mem[i][j] = 0;
				}
			}
		}
	};
	~Matrix()
	{
		for (int i = 0; i < r; i++)
		{
			delete[]mem[i];
		}
		delete[]mem;
	};
	Matrix operator+(Matrix& a)
	{
		Matrix result(r, c);
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				result.mem[i][j] = mem[i][j] + a.mem[i][j];
			}
		}
		return result;
	};
	Matrix operator-(Matrix& a)
	{
		Matrix result(r, c);
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				result.mem[i][j] = mem[i][j] - a.mem[i][j];
			}
		}
		return result;
	};
	Matrix operator*(Matrix& a)
	{
		Matrix result(r, a.c);
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < a.c; j++)
			{
				result.mem[i][j] = 0;
				for (int k = 0; k < c; k++)
				{
					result.mem[i][j] += mem[i][k] * a.mem[k][j];
				}
			}
		}
		return result;
	};
	Matrix operator*(int x)
	{
		Matrix result(r, c);
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				result.mem[i][j] = mem[i][j] * x;
			}
		}
		return result;
	};
	Matrix operator~()
	{
		Matrix result(c, r);
		for (int i = 0; i < c; i++)
		{
			for (int j = 0; j < r; j++)
			{
				result.mem[i][j] = mem[j][i];
			}
		}
		return result;
	};
	Matrix& operator=(const Matrix& a)
	{
		if (this != &a)
		{
			for (int i = 0; i < r; i++)
			{
				delete[]mem[i];
			}
			delete[]mem;
		}
		r = a.r;
		c = a.c;
		mem = new int* [r];
		for (int i = 0; i < r; i++)
		{
			mem[i] = new int[c];
			for (int j = 0; j < c; j++)
			{
				mem[i][j] = a.mem[i][j];
			}
		}
		return *this;
	};
	void display()
	{
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << mem[i][j] << " ";
			}
			cout << endl;
		}
	};
	void initialise(int** arr)
	{
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				mem[i][j] = arr[i][j];
			}
		}
	}
	friend ostream& operator<<(ostream& out, const Matrix& a)
	{
		for (int i = 0; i < a.r; i++)
		{
			for (int j = 0; j < a.c; j++)
			{
				cout << a.mem[i][j] << " ";
			}
			cout << endl;
		}
		return out;
	};
};
