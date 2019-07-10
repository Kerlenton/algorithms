int fibonacci(int x)
{
	if (x < 3) return 1;
	return fibonacci(x - 1) + fibonacci(x - 2);
}
