#include <iostream>
#include <ctime>
#include <cstdlib>

float const PI = 3.14159265;
//��1:

//1. ��������� ������� �������� � ����������� b1 � b2 � ������� h.
 
float tr_square(float b1, float b2, float h)
{
	return 0.5 * (b1 + b2) * h;    
}

//2. ��������� ����� ���������� � ������� ����� ������� �.

float circle_len(float radius) 
{
	return 2 * PI * radius;    
}

float circle_square(float radius) 
{
	return PI * pow(radius, 2);   
}


//3. ��������� ������� �������������� ������������ � ����������.
 
float  triangle_square(float a, float b)
{
	return 0.5 * a * b;    
}

float  hypotenuse(float a, float b)
{
	return pow(pow(a, 2) + pow(b, 2), 0.5);   
}
 
//4. ���� ���������� �������������� �����.����� ����� ��� ����.
 
int sum_of_digits(int number)
{
	int sum = 0;
	while (number != 0)
	{
		sum += number % 10;  //� ���� �-��� �������� ���������� sum ������������� �� ������� �� ������� �� 10 ��������� �������, ���� �����, ������� ���� ������ �� ����, �� ������ ������ 0
		number /= 10;
	}
	return sum;
}
 
//5. ��������� ������� �� ���������� ��������� � ��������.
 
void decartes_to_polar(float x, float y)
{
	float r = 0, q = 0;
	r = pow(x * x + y * y, 0.5);
	std::cout << "������ ���������� = " << r << std::endl;
	q = atan(y / (float)x) * 180 / PI;
	std::cout << "������ ����������(� ��������) = " << q << std::endl;
}

//6. ��������� ������� �� �������� ��������� � ����������.

void polar_to_decartes(float r, float q)
{
	float x = 0, y = 0;
	x = r * cos(q * PI / 180);
	y = r * sin(q * PI / 180);
	std::cout << "X: " << x << "\n";
	std::cout << "Y: " << y << "\n";
}

//7. ����� ����� ����������� ���������.
 
void roots_of_the_equation(float a, float b, float c)
{
	float d = pow(b, 2) - 4 * a * c, x1, x2;
	if (d < 0)
	{
		std::cout << "������ ���\n";
	}
	else if (d == 0)
	{
		x1 = (-b + pow(d, 0.5)) / 2 * a;
		std::cout << "������: " << x1 << "\n"; //� ���� �-��� ��������� ������������ � � ����������� �� ��� �������� ����������� ������ ��������. �� ����� ��������� �������� ������, ���� �� ����� �����
	}
	else
	{
		x1 = (-b + pow(d, 0.5)) / 2 * a;
		x2 = (-b - pow(d, 0.5)) / 2 * a;
		std::cout << "������ ������: " << x1 << "\n";
		std::cout << "������ ������: " << x2 << "\n";
	}
}
 
//8. ������� ����������� �� ��������� �, b, �.����� ������� ������������, ��������� �������� �������� ������� ��������� ������������.

bool triangle_existence_check(float a, float b, float c)
{
	return (a < b + c) && (b < a + c) && (c < a + b);  //� ���� �-��� ����������� �������� �� ������������� ������������
}

void median(float a, float b, float c)
{
	float median1, median2, median3;
	median1 = 0.5 * pow(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2), 0.5);
	median2 = 0.5 * pow(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2), 0.5);
	median3 = 0.5 * pow(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2), 0.5);
	if (triangle_existence_check(median1, median2, median3))
	{
		std::cout << "������� 1: " << 0.5 * pow(2 * pow(median1, 2) + 2 * pow(median2, 2) - pow(median3, 2), 0.5) << "\n";
		std::cout << "������� 2: " << 0.5 * pow(2 * pow(median1, 2) + 2 * pow(median3, 2) - pow(median2, 2), 0.5) << "\n";
		std::cout << "������� 3: " << 0.5 * pow(2 * pow(median2, 2) + 2 * pow(median3, 2) - pow(median1, 2), 0.5) << "\n";
	}
}

//9. ���� k - � ������� �����.����������, ������� ����� ����� � ����� ����� ������ � ������ �����.

void time(int k)
{
	int hour, minute;
	hour = k / 60 / 60;
	minute = k / 60;
	std::cout << "������ ����� : " << hour << "\n";    //� ���� �-��� ��������� ����� ����� �����, ������� ����� ����� ������ / 3600, � ����� ����� �����, ������� ����� ����� ������ / 60.
	std::cout << "������ ����� : " << minute << "\n";   //�� ����� �-��� ������� ��� ��������
}
 
//10. ����������, �������� �� ����������� �� ��������� a, b, c ��������������.
bool triangle_check(float a, float b, float c)
{
	return (a == b && a != c) || (a == c && a != b) || (b == c && b != a);  
}
 
//11. ��������� ��������� ������� � ������ ������.������ � 10 % ���������������, ���� ����� ������� ��������� 1000 ������.

float purchase_price(int sum)
{
	return sum > 1000 ? sum * 0.9 : sum;   //� ���� �-��� � return ������������ ��������� ��������, ������� ��������� ������ ��������. ���� ����� ������ 1000, �� ����������� ����� �� ������� 10%
}
 
//12. ���� ������������ ������������ � ��������� ������ � ����� �������� ��� �����������, ���� ��������� ��� ������������ ��������(���� - 100 = ��������� ���).

void ideal_weight_check(int height, int weight)
{
	int ideal_weight = height - 100;
	bool ideal = ideal_weight == weight;
	if (ideal)
	{
		std::cout << "��� ��� ���������" << "\n";
	}
	else if (ideal_weight > weight)    //������� � �-��� �������������� ��������� ���, ����� �� ������������ � �����, ������� ��� ������������. � ����������� �� ���������� ��������� ������ ������������
	{
		std::cout << "��� ����� ������� " << ideal_weight - weight << " ��" << "\n";
	}
	else if (ideal_weight < weight)
	{
		std::cout << "��� ����� �������� �� " << weight - ideal_weight << " ��" << "\n";
	}

}

//13. ��������� ���������� ��� ��������� ����� � ��������� �� 1 �� 9. ����������� ������ ��������� ������������ ���� �����.��������� �������� ������������ ������ �� ��� ���.
 
int number_generation()
{
	return 1 + rand() % 9; //�-��� ��������� �����, ������� ���� �������� �������������
}

void number_check(int number, int user_number)
{
	if (number == user_number)
	{
		std::cout << "�� ��������� ���������"; //� ���� �-��� ����������� ��������� ������ ������������ � ���������� ��������� ��������������� ����� � ��������� ���������, � ������� �������, ������ �� ������������ ���������� ����� 
	}
	else
	{
		std::cout << "�� ��������";
	}
}
 
//14. �������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� ������ 20 % .������ ����������������� ��������� � ���� ������(����� �� 1 �� 7).
 
float total_price(int day, int period, float price)
{
	return day == 6 || day == 7 ? period * price * 0.8 : period * price;  //� ���� �-��� ������������ ��������� ��������, ������� ��������� ��������� ����������� �� �������, ���� ��� ���������� � ������� ��� �����������, ��� ��� ������ � ���� ������
}
 
//15. ������ � ���������� ����� ������.������ ��������� � �������� ������ � ������� ����.

void month(int number_of_month)
{
	std::string name_of_month, season;
	if (number_of_month == 12 || number_of_month == 1 || number_of_month == 2)
	{
		season = "����";
		switch (number_of_month)
		{
		case 12:
			name_of_month = "�������";
			break;
		case 1:
			name_of_month = "������";
			break;
		case 2:
			name_of_month = "�������";
			break;
		default:
			break;
		}
	}
	else if (number_of_month == 3 || number_of_month == 4 || number_of_month == 5)
	{
		season = "�����";
		switch (number_of_month)
		{
		case 3:
			name_of_month = "����";
			break;
		case 4:
			name_of_month = "������";
			break;
		case 5:
			name_of_month = "���";
			break;
		default:
			break;
		}
	}
	else if (number_of_month == 6 || number_of_month == 7 || number_of_month == 8)
	{
		season = "����";
		switch (number_of_month)
		{
		case 6:
			name_of_month = "����";
			break;
		case 7:
			name_of_month = "����";
			break;
		case 8:
			name_of_month = "������";
			break;
		default:
			break;
		}
	}
	else if (number_of_month == 9 || number_of_month == 10 || number_of_month == 11)
	{
		season = "�����";
		switch (number_of_month)
		{
		case 9:
			name_of_month = "��������";
			break;
		case 10:
			name_of_month = "�������";
			break;
		case 11:
			name_of_month = "������";
			break;
		default:
			break;
		}
	}
	else
	{
		std::cout << "������������ ����\n";
		season = "-";
		name_of_month = "-";
	}
	std::cout << "����� ����: " << season << "\n";
	std::cout << "�����: " << name_of_month << "\n";
}
 
//16. ����������, �������� �� ������������ ����� "����������"

int lucky_number(int number)
{
	int sum_of_first_three_number = 0, sum_of_last_three_number = 0;
	for (int i = 0; i < 3; i++)
	{
		sum_of_last_three_number += number % 10;  //��������� ����� ��������� ��� ����
		number /= 10;
	}
	for (int i = 0; i < 3; i++)
	{
		sum_of_first_three_number += number % 10;  //��������� ����� ������ ��� ����
		number /= 10;
	}
	return sum_of_first_three_number == sum_of_last_three_number;  //����������� ��������� ��������� ������������ ����
}

//17. �������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ��������� � ���� ����� "�������" � ���������� �����.

std::string correct_ending(int number)
{
	std::string ending;
	if (number % 10 == 1 && number != 11)
	{
		ending = "���";
	}
	else if(number % 10 == 2 && number != 12 || number % 10 == 3 && number != 13 || number % 10 == 4 && number != 14)
	{
		ending = "���";
	}
	else
	{
		ending = "��";
	}
	return ending;
}

//18. ���� ����������� �������������� �����.��������, �������� �� ��� �����������.

bool palindrome(int number)
{
	int number1, number2, number3, number4;
	number4 = number % 10;
	number3 = number / 10 % 10;
	number2 = number / 10 / 10 % 10;
	number1 = number / 10 / 10 / 10;
	return (number1 == number4) && (number2 == number3);
}

//19. ���� ���������� �����.����������: 19.1 �������� �� ������������ ��� ���� ������ ����� b 19.2 ������ �� 7 ����� ��� ����.
 
bool comparison_of_number(int number, int b)
{
	int product_of_numbers = 1;
	while (number != 0)
	{
		product_of_numbers *= number % 10;   //� ����� while ��������� ������������ ���� �����
		number /= 10;
	}
	return product_of_numbers > b;  //����������� ��������� ��������� ������������ ���� ����� � ����� b
}

bool multiplicity_check(int number)
{
	int sum = 0;
	while (number != 0)
	{
		sum += number % 10;   //� ����� while ��������� ����� ���� �����
		number /= 10;
	}
	return sum % 7 == 0;  //����������� ��������� �������� ����� �� ��������� 7
}
 
//20. ���� ������������ ������������� ����� a, b, c, d.��������, ����� �� ������������� �� ��������� a, b ��������� � ������������� �� ��������� c, d ���, ����� ������� ������ �������������� ���� ����������� �������� �������.

std::string rectangle_check(float a, float b, float c, float d)
{
	return ((a < c && b < d) || (a < d && b < c)) ? "����� ���������" : "������ ���������"; //� return ������������ ��������� ��������, ������� ��������� ������, ��� ������ ���������, ������� ������� �� ����, ���������� �� ��������� �������
}

//21.(�� �������) �������� ���������, � ������� ��������� ������� �������� ����� ������.������� ������.

void size_of_data_types()
{
	std::cout << "Size of bool: " << sizeof(bool) << " byte\n";
	std::cout << "Size of short: " << sizeof(short) << " bytes\n";
	std::cout << "Size of int: " << sizeof(int) << " bytes\n";
	std::cout << "Size of long: " << sizeof(long) << " bytes\n";
	std::cout << "Size of long long: " << sizeof(long long) << " bytes\n";
	std::cout << "Size of char: " << sizeof(char) << " byte\n";
	std::cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes\n";
	std::cout << "Size of char16_t: " << sizeof(char16_t) << " bytes\n";
	std::cout << "Size of char32_t: " << sizeof(char32_t) << " bytes\n";
	std::cout << "Size of float: " << sizeof(float) << " bytes\n";
	std::cout << "Size of double: " << sizeof(double) << " bytes\n";
	std::cout << "Size of long double: " << sizeof(long double) << " bytes\n";
}


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(nullptr));
//number 1
	/*float square, b1, b2, h;
	std::cout << "������� ����� ��������� b1 � ��������: ";
	std::cin >> b1;
	std::cout << "������� ����� ��������� b2 � ��������: ";
	std::cin >> b2;
	std::cout << "������� ����� ������ h � ��������: ";
	std::cin >> h;
	square = tr_square(b1, b2, h);
	std::cout << "�������� �������� = " << square;*/

//number 2
	/*float radius, length, square;
	std::cout << "������� ������ ����������: ";
	std::cin >> radius;
	length = circle_len(radius);
	square = circle_square(radius);
	std::cout << "����� ���������� = " << length << "\n������� = " << square;*/

//number 3
	/*float a, b, c, square;
	std::cout << "������� ����� ������� ������ �������������� ������������: ";
	std::cin >> a;
	std::cout << "������� ����� ������� ������ �������������� ������������: ";
	std::cin >> b;
	square = triangle_square(a, b);
	c = hypotenuse(a, b);
	std::cout << "������� ������������ = " << square << "\n���������� = " << c;*/

//number 4
	/*int number, sum;
	std::cout << "������� 4-������� ���������� �����: ";
	std::cin >> number;
	sum = sum_of_digits(number);
	std::cout << "����� ���� ����� = " << sum;*/

//number 5
	/*float x = 0, y = 0;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;
	decartes_to_polar(x, y);*/

//number 6
	/*float r = 0, q = 0;
	std::cout << "Enter radius: ";
	std::cin >> r;
	std::cout << "Enter angle: ";
	std::cin >> q;
	polar_to_decartes(r, q);*/

//number 7
	/*float a = 0, b = 0, c = 0;
	std::cout << "������� ����������� a ����������� ���������: ";
	std::cin >> a;
	std::cout << "������� ����������� b ����������� ���������: ";
	std::cin >> b;
	std::cout << "������� ����������� c ����������� ���������: ";
	std::cin >> c;
	roots_of_the_equation(a, b, c);*/
 
//number 8
	/*float a, b, c;
	std::cout << "������� ������� ������������\n";
	std::cout << "������� a: ";
	std::cin >> a;
	std::cout << "������� b: ";
	std::cin >> b;
	std::cout << "������� c: ";
	std::cin >> c;
	if (triangle_existence_check(a, b, c))
	{
		median(a, b, c);
	}
	else
	{
		std::cout << "������������ ����\n";
	}*/
 
//number 9
	/*int k;
	std::cout << "������� ����������� ������: ";
	std::cin >> k;
	time(k);*/
 
//number 10
	/*int a, b, c;
	std::cout << "������� ������� ������������\n";
	std::cout << "������� ������� a: ";
	std::cin >> a;
	std::cout << "������� ������� b: ";
	std::cin >> b;
	std::cout << "������� ������� c: ";
	std::cin >> c;
	if (triangle_existence_check(a, b, c))
	{
		if (triangle_check(a, b, c))
		{
			std::cout << "����������� ��������������\n";
		}
		else
		{
			std::cout << "����������� ����������������\n";
		}
	}
	else
	{
		std::cout << "������������ ����";
	}*/
 
//number 11
	/*int sum;
	std::cout << "������� ����� �������: ";
	std::cin >> sum;
	std::cout << "�������� ��������� �������: " << purchase_price(sum);*/
 
//number 12
	/*int weight, height;
	std::cout << "������� ���� ����: ";
	std::cin >> height;
	std::cout << "������� ���� ���: ";
	std::cin >> weight;
	ideal_weight_check(height, weight);*/
 
//number 13
	/*int a, b, product_of_numbers;
	a = number_generation();
	b = number_generation();
	std::cout << "������ �����: " << a << "\n";
	std::cout << "������ �����: " << b << "\n";
	std::cout << "������� ��������� ��������� �����: ";
	std::cin >> product_of_numbers;
	number_check(a*b, product_of_numbers);*/

//number 14
	/*int day = 0, period = 0;
	float price = 0;
	std::cout << "Enter price(per hour): ";
	std::cin >> price;
	std::cout << "Enter day(Monday - 1, Tuesday - 2, ...): ";
	std::cin >> day;
	std::cout << "Enter period(how many hours): ";
	std::cin >> period;
	std::cout << "Total price: " << total_price(day, price, period) << "\n";*/
 
//number 15
	/*int number_of_month;
	std::cout << "������� ����� ������: ";
	std::cin >> number_of_month;
	month(number_of_month);*/
 
//number 16
	/*int number;
	std::cout << "������� ������������ �����: ";
	std::cin >> number;
	if (lucky_number(number))
	{
		std::cout << "����� ����������";
	}
	else
	{
		std::cout << "����� �� �������� ����������";
	}*/
  
//number 17
	/*std::string word = "����", ending;
	int number;
	std::cout << "������� ����� �� 1 �� 99: ";
	std::cin >> number;
	ending = correct_ending(number);
	std::cout << number << " " + word + ending;*/
 
//number 18
	/*int number;
	std::cout << "������� ������������� �����: ";
	std::cin >> number;
	if (palindrome(number))
	{
		std::cout << "����� �������� �����������";
	}
	else
	{
		std::cout << "����� �� �������� �����������";
	}*/

//number 19
	/*int number, b;
	std::cout << "������� ���������� �����: ";
	std::cin >> number;
	std::cout << "������� ����� b: ";
	std::cin >> b;
	if (comparison_of_number(number, b))
	{
		std::cout << "������������ ���� ������ ����� b\n";
	}
	else
	{
		std::cout << "������������ ���� ������ ����� b\n";
	}
	if (multiplicity_check(number))
	{
		std::cout << "����� ���� ������ 7\n";
	}
	else
	{
		std::cout << "����� ���� �� ������ 7\n";
	}*/
 
//number 20
	/*int a = 0, b = 0, c = 0, d = 0;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;
	std::cout << "Enter d: ";
	std::cin >> d;
	std::cout << rectangle_check(a, b, c, d) << "\n";*/

//number 21
	/*size_of_data_types();*/

	return 0;
}