int	main()
{
	float	a = 420.042f;

	void	*b = &a;							// implicit promotion
	int		*c = reinterpret_cast<int *>(b);	// Explicit demotion
	int		&d = reinterpret_cast<int &>(b);	// Explicit demotion
}

// Permet de retyper une donnée dont on a perdu l'information de type
