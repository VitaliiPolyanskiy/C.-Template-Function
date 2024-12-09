//template <class T>
template <typename T> T Maximum(T a, T b)
{
	return (a > b ? a : b);
}

template <typename T1, typename T2> T1 Minimum(T1 a, T2 b)
{
	cout << "\nTemplate function:";
	return (a < b ? a : b);
}

template <typename T1> T1 Minimum(T1 a, long b)
{
	cout << "\nlong:";
	return (a < b ? a : b);
}

template <typename T1, typename T2, typename T3> T2 Minimum(T1 a, T2 b, T3 c)
{
	if (a < b && a < c)
		return a;
	if (b < a && b < c)
		return b;
	if (c < a && c < b)
		return c;
}