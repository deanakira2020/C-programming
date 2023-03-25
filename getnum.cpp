#include <stdio.h>

float getnum() // function used to convert getchar into a number
{
	char num;
	int decimal = 0;
	float numb = 0;
	float number = 0;
	int digits = 0;
	float numb2 = 0;
	bool negative = false;
	int e = 0;


	while (((num = getchar()) >= '0' && num <= '9') || num == '-' || num == '.')
	{


		if (num >= '0' && num <= '9' && decimal == 0)
		{
			numb = (numb * 10) + (num - '0');


		}
		else if (decimal >= 1 && num >= '0' && num <= '9')
		{
			numb2 = (numb2 * 10) + (num - '0');
			decimal = decimal + 1;

		}
		else if (num == '.' && decimal == 0)
		{
			decimal = decimal + 1;

		}
		else if (num == '-' && e == 0)
		{
			negative = true;


		}
		else
			break;
		e = e + 1;

	}
	int a;
	int power = 1;
	decimal = decimal - 1;
	while (decimal >= 1)
	{
		power = power * 10;
		decimal = decimal - 1;

	}

	numb2 = numb2 / power;
	numb2 + numb;



	float numbfinal = numb + numb2;
	ungetc(num, stdin);

	if (negative == true)
	{
		numbfinal = numbfinal * -1;
	}


	//printf("%f ", numbfinal);
	return numbfinal;
}

