#include <iostream>

class Foo
{
	public:
		Foo(float const v) : _v(v) {}

		float		getV()			{return this->_v;}

		operator	float()			{ return this->_v;}
		operator	int()			{ return static_cast<int>(this->_v);}

	private:
		float		_v;
};

int	main()
{
	Foo		a(420.024f);
	float	b = a;
	int		c = a;

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	return (0);
}

//static_cast : entre types de même famille. Il s'agit la plupart du temps d'expliciter
//des conversions qui auraient pu être effectuées de manière implicite mais souvent avec un
//avertissement du compilateur.

//reinterpret_cast : entre types de familles différentes. Il s'agit simplement de dire au compilateur
// « je sais que je manipule une donnée de type X, mais on va faire comme si elle était de type Y ».
// De ce fait aucune donnée n'est physiquement modifiée, cet opérateur de conversion n'est qu'une
// indication pour le compilateur.

//dynamic_cast identifie à l'exécution le type réel de l'expression reçue au moyen des informations
//de type à l'exécution. Cette fonctionnalité doit donc être activée dans votre compilateur pour
//pouvoir utiliser dynamic_cast, ce qui n'est pas le cas par défaut avec certains compilateurs
