#include <iostream>
#include "Matrix.hpp"

using namespace std;

namespace zich{
    Matrix::Matrix(vector<double> vec, int n, int m){

    }
    Matrix::Matrix(const Matrix &other){}
    Matrix& Matrix::operator=(const Matrix& mat){
        return *this;
    }
    Matrix Matrix::operator+(const Matrix &other) const{
        return other;
    }
    Matrix Matrix::operator-(const Matrix &other) const{
        return other;
    }
    Matrix& Matrix::operator+=(const Matrix &other){
        return *this;
    }
    Matrix& Matrix::operator-=(const Matrix &other){
        return *this;
    }
    Matrix Matrix::operator+() const{
        return *this;
    }
    Matrix Matrix::operator-() const{
        return *this;
    }
    bool operator==(const Matrix &mat1, const Matrix &mat2){return(true);}
    bool operator!=(const Matrix &mat1, const Matrix &mat2){return(true);}
    bool operator<(const Matrix &mat1, const Matrix &mat2){return(true);}
    bool operator>(const Matrix &mat1, const Matrix &mat2){return(true);}
    bool operator<=(const Matrix &mat1, const Matrix &mat2){return(true);}
    bool operator>=(const Matrix &mat1, const Matrix &mat2){return(true);}
    Matrix& Matrix::operator++(){
        return *this;
    }
    Matrix& Matrix::operator--(){
        return *this;
    }
    const Matrix Matrix::operator++(const int dummy){
        return *this;
    }
    const Matrix Matrix::operator--(const int dummy){
        return *this;
    }
    Matrix& Matrix::operator*=(const double num){
        return *this;
    }
    Matrix Matrix::operator*(const Matrix &other) const{
        return *this;
    }
    Matrix& Matrix::operator*=(const Matrix &other){
        return *this;
    }
    Matrix operator*(const Matrix &mat, const double num){
        return mat;
    }
    Matrix operator*(const double num, Matrix& mat){
        return mat;
    }
    std::ostream& operator<<(std::ostream& output, const Matrix& other)
    {
        return output;
    }
    std::istream& operator>>(std::istream& input, Matrix& other)
    {
        input>>other.mat[0][0];
        return input;
    }
}