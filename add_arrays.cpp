
#include <iostream>


template <typename T, int rows, int columns>
class Matrix {
protected:
    T _matrix[rows][columns];

public:

    T& operator()(int r, int c) { return _matrix[r][c]; }

    friend Matrix<T, rows, columns> operator +(Matrix<T, rows, columns>& m1, Matrix<T, rows, columns>& m2)
    {
        Matrix<T, rows, columns> result;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
            {
                result(i,j) = m1(i,j) + m2(i,j);
            }

        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, Matrix<T, rows, columns>& matrix)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                os << matrix(i,j) << " ";
            }
            os << std::endl;
        }
        return os;
    }


};


int main(int ac, char**av)
{

    Matrix<double, 4, 3> m1;
    Matrix<double, 4, 3> m2;
    Matrix<double, 4, 3> m3;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            {
                m1(i,j) = rand() % 100;
                m2(i,j) = rand() % 100;
            }

    std::cout << "Matrix 1" << std::endl;
    std::cout << m1 << std::endl;
    std::cout << "Matrix 2" << std::endl;
    std::cout << m2 << std::endl;

    m3 = m1 + m2;

    std::cout << "The sum" << std::endl;
    std::cout << m3 << std::endl;

    return 0;
}
