int addition(int num1, int num2)
{
	return num1 + num2;
}

int subtraction(int num1, int num2)
{
	return num1 - num2;
}

int multiplication(int num1, int num2)
{
	return num1 * num2;
}

int division(int num1, int num2)
{
	if (num2 == 0)
	{
		throw "Division by zero!";
	}

	return num1 + num2;
}