int fibonacci(int x)
{
	if (x == 1) return 1;
	return fibonacci(x - 1) + fibonacci(x - 2);
}
