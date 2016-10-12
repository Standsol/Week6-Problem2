#include <iostream>
#include <string>

template<class T_CLASS>
class Vector2D
{
public:
	T_CLASS x_, y_;

	Vector2D(const T_CLASS& x_input,const T_CLASS& y_input)
		: x_(x_input), y_(y_input)
	{}

	void print()
	{
		std::cout << x_ << " " << y_ << std::endl;
	}
};

//class VectorInt2D
//{
//	int x_, y_;
//};
//
//class VectorFloat2D
//{
//	float x_, y_;
//};
//
//class VectorDouble2D
//{
//	double x_, y_;
//};

int main()
{
	Vector2D<int> int_vector(1, 1);
	int_vector.print();
	Vector2D<float> float_vector(1.123f, 2.345f);
	float_vector.print();
	Vector2D<double> double_vector(1.456, 3.512);
	double_vector.print();

	return 0;
}