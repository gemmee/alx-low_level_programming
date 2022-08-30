/**
  *print_name - prints a name.
  *@name: pointer to name.
  *@f: function pointer.
  *
  *Return: void
  *Author: Jaba
  *Date: Aug 29 2022 @kp10b
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

