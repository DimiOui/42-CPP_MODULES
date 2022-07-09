#include <iostream>
#include <iomanip>

template<typename T = float>
class Vertex
{
public:
	Vertex(T const &x, T const &y, T const&z) : _x(x), _y(y), _z(z) {}
	~Vertex() {}

	T const	&getX() const {return this->_x;}
	T const	&getY() const {return this->_y;}
	T const	&getZ() const {return this->_z;}

private:
	T const	_x;
	T const	_y;
	T const	_z;

	Vertex();
};

template<typename T>
std::ostream	&operator<<(std::ostream &o, Vertex<T> const &v)
{
	std::cout.precision(1);
	o << setiosflags(std::ios::fixed);
	o << "Vertex(";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ() << ")";
	return o;
}

int	main()
{
	Vertex<int>	v1(12, 23, 34);
	Vertex<>	v2(12, 23, 34); // DEFAULT TYPE

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return (0);
}
