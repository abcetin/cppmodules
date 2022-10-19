#include "iter.hpp"

static void tLower(char *s)
{
	*s = toupper(*s);
}

template <typename T> void iter(T *arr, size_t len, void (*f)(T *))
{
	for (size_t i = 0; i < len; i++)
		f(&arr[i]);
}

int main(void)
{
	char a[9] = "Abdullah";
	iter(a, strlen(a), tLower);
	std::cout << a << std::endl;
	return 0;
}