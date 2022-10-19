#include "Array.hpp"

template<class T>
Array<T>::Array(){
	this->_len = 0;
	this->_arr = new T[0];
}

template<class T>
Array<T>::Array(unsigned int n)
{
	this->_len = n;
	this->_arr = new T[n];
	// for (size_t i = 0; i < n; i++)
	// 	this->_arr[i] = 0;
}

template<class T>
Array<T>::Array(const Array &arr)
{
	*this = arr;
}

template<class T>
Array<T> &Array<T>::operator=(const Array &arr)
{
	this->_len = arr._len;
	this->_arr = new T[arr._len];
	for (size_t i = 0; i < this->_len; i++)
		this->_arr[i] = arr._arr[i];
	return *this;
}

template<class T>
T& Array<T>::operator[](int index)
{
	if (index < 0)
		throw Array::MyException("Invalid Index");
	return this->_arr[index];
}

template<class T>
unsigned int Array<T>::size(void)
{
	return this->_len;
}

template<class T>
Array<T>::~Array(){
	delete[] this->_arr;
}