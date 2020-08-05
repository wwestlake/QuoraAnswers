#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main(int ac, char ** av)
{
	wchar_t * test = L"This is a test 我不是中国人。";

	printf("%lu\n", sizeof test);
	printf("%lu\n", wcslen(test));


	return 0;
}
