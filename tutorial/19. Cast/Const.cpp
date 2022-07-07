int	main()
{
	int			a = 42;

	int const	*b = &a;					// Implicit promotion
	int			*c = b;						// Explicit demotion (WRONG)
	int			*d = const_cast<int *>(b);	//	Explicit demotion (RIGHT)
}
