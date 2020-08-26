
#include <iostream>

class Matrix {
protected:
    double ** _matrix;
    int _rows;
    int _columns;

public:
    Matrix(int rows, int columns)
    {
        _rows = rows;
        _columns = columns;
        _matrix = new double*[rows];
        for (int i = 0; i < rows; i++)
        {
            _matrix[i] = new double[columns];
        }

    }    

    int getNumRows() const { return _rows; } 
    int getNumCols() const { return _columns; } 

    ~Matrix()
    {
        for (int i = 0; i < _rows; i++)
        {
            delete [] _matrix[i];
        }
        delete [] _matrix;
    }

    int set(int row, int col, double value)
    {
        _matrix[row][col] = value;
    }

    int get(int row, int col) const
    {
        return _matrix[row][col];
    }


    friend Matrix operator+(const Matrix& a, const Matrix& b)
    {
        if (a.getNumCols() != b.getNumCols() || a.getNumRows() != b.getNumRows()) throw std::exception();
        Matrix c(a.getNumRows(), a.getNumCols());
        for (int i = 0; i < a.getNumCols(); i++)
        {
            for (int j = 0; j < a.getNumRows(); j++)
            {
                c.set(i,j, a.get(i,j) + b.get(i,j) );
            }
        }

        return c;
    }

    friend std::ostream& operator <<(std::ostream & os, const Matrix& mat)
    {
        for (int i = 0; i < mat.getNumCols(); i++)
        {
            for (int j = 0; j < mat.getNumRows(); j++)
            {
                os << mat.get(i,j) << "  ";
            }
            os << std::endl;
        }
        return os;
    }


};

int main(int ac, char ** av)
{
    Matrix a(2,2);
    a.set(0,0,1.0);
    a.set(1,0,1.0);
    a.set(0,1,1.0);
    a.set(1,1,1.0);

    Matrix b = a + a;

    std::cout << a << std::endl << b << std::endl;


    return 0;
}






