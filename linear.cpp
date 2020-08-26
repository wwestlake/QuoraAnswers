#include <iostream>

float getInput()
{
    float value;
    std::cin >> value;
	return value;
}


float generalLinear(float x, float slope, float y_intercept)
{
	return x * slope + y_intercept;
}

int main(int ac, char ** av)
{
    int slope = 2.0f;
    int y_intercept = 1.0;

    float value = getInput();
    std::cout << generalLinear(value, slope, y_intercept) << std::endl;;


    return 0;
}
