#include "Sample.hpp"

int	main()

{
	Sample	sample;

	sample.bar('a');
	sample.bar(42);
	sample.bar(3.14f);
	sample.bar(sample);
	return (0);
}
