#include <iostream>
#include <ctime>
#include <cstdlib>

float const PI = 3.14159265;
//ДЗ1:

//1. Вычислить площадь трапеции с основаниями b1 и b2 и высотой h.
 
float tr_square(float b1, float b2, float h)
{
	return 0.5 * (b1 + b2) * h;    
}

//2. Вычислить длину окружности и площадь круга радиуса г.

float circle_len(float radius) 
{
	return 2 * PI * radius;    
}

float circle_square(float radius) 
{
	return PI * pow(radius, 2);   
}


//3. Вычислить площадь прямоугольного треугольника и гипотенузу.
 
float  triangle_square(float a, float b)
{
	return 0.5 * a * b;    
}

float  hypotenuse(float a, float b)
{
	return pow(pow(a, 2) + pow(b, 2), 0.5);   
}
 
//4. Дано десятичное четырехзначное число.Найти сумму его цифр.
 
int sum_of_digits(int number)
{
	int sum = 0;
	while (number != 0)
	{
		sum += number % 10;  //В этой ф-ции значение переменной sum увеличивается на остаток от деления на 10 аргумента функции, пока число, которое было подано на вход, не станет равным 0
		number /= 10;
	}
	return sum;
}
 
//5. Выполнить переход от декартовых координат к полярным.
 
void decartes_to_polar(float x, float y)
{
	float r = 0, q = 0;
	r = pow(x * x + y * y, 0.5);
	std::cout << "Первая координата = " << r << std::endl;
	q = atan(y / (float)x) * 180 / PI;
	std::cout << "Вторая координата(в градусах) = " << q << std::endl;
}

//6. Выполнить переход от полярных координат к декартовым.

void polar_to_decartes(float r, float q)
{
	float x = 0, y = 0;
	x = r * cos(q * PI / 180);
	y = r * sin(q * PI / 180);
	std::cout << "X: " << x << "\n";
	std::cout << "Y: " << y << "\n";
}

//7. Найти корни квадратного уравнения.
 
void roots_of_the_equation(float a, float b, float c)
{
	float d = pow(b, 2) - 4 * a * c, x1, x2;
	if (d < 0)
	{
		std::cout << "Корней нет\n";
	}
	else if (d == 0)
	{
		x1 = (-b + pow(d, 0.5)) / 2 * a;
		std::cout << "Корень: " << x1 << "\n"; //В этой ф-ции считается дискриминант и в зависимости от его значения выполняются разные действия. По итогу выводится значение корней, если их можно найти
	}
	else
	{
		x1 = (-b + pow(d, 0.5)) / 2 * a;
		x2 = (-b - pow(d, 0.5)) / 2 * a;
		std::cout << "Первый корень: " << x1 << "\n";
		std::cout << "Второй корень: " << x2 << "\n";
	}
}
 
//8. Имеется треугольник со сторонами а, b, с.Найти медианы треугольника, сторонами которого являются медианы исходного треугольника.

bool triangle_existence_check(float a, float b, float c)
{
	return (a < b + c) && (b < a + c) && (c < a + b);  //В этой ф-ции выполняется проверка на существование треугольника
}

void median(float a, float b, float c)
{
	float median1, median2, median3;
	median1 = 0.5 * pow(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2), 0.5);
	median2 = 0.5 * pow(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2), 0.5);
	median3 = 0.5 * pow(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2), 0.5);
	if (triangle_existence_check(median1, median2, median3))
	{
		std::cout << "Медиана 1: " << 0.5 * pow(2 * pow(median1, 2) + 2 * pow(median2, 2) - pow(median3, 2), 0.5) << "\n";
		std::cout << "Медиана 2: " << 0.5 * pow(2 * pow(median1, 2) + 2 * pow(median3, 2) - pow(median2, 2), 0.5) << "\n";
		std::cout << "Медиана 3: " << 0.5 * pow(2 * pow(median2, 2) + 2 * pow(median3, 2) - pow(median1, 2), 0.5) << "\n";
	}
}

//9. Идет k - я секунда суток.Определить, сколько целых часов и целых минут прошло с начала суток.

void time(int k)
{
	int hour, minute;
	hour = k / 60 / 60;
	minute = k / 60;
	std::cout << "Прошло часов : " << hour << "\n";    //В этой ф-ции считается целое число часов, которое равно число секунд / 3600, и целое число минут, которое равно число секунд / 60.
	std::cout << "Прошло минут : " << minute << "\n";   //По итогу ф-ция выводит эти значения
}
 
//10. Определить, является ли треугольник со сторонами a, b, c равнобедренным.
bool triangle_check(float a, float b, float c)
{
	return (a == b && a != c) || (a == c && a != b) || (b == c && b != a);  
}
 
//11. Вычислить стоимость покупки с учётом скидки.Скидка в 10 % предоставляется, если сумма покупки превышает 1000 рублей.

float purchase_price(int sum)
{
	return sum > 1000 ? sum * 0.9 : sum;   //В этой ф-ции в return используется тернарный оператор, который возращает разные значения. Если сумма больше 1000, то возращается сумма со скидкой 10%
}
 
//12. Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если идеальный вес определяется формулой(рост - 100 = идеальный вес).

void ideal_weight_check(int height, int weight)
{
	int ideal_weight = height - 100;
	bool ideal = ideal_weight == weight;
	if (ideal)
	{
		std::cout << "Ваш вес идеальный" << "\n";
	}
	else if (ideal_weight > weight)    //Сначала в ф-ции подсчитывается идеальный вес, затем он сравнивается с весом, который ввёл пользователь. В зависимости от результата сравнения даются рекомендации
	{
		std::cout << "Вам нужно набрать " << ideal_weight - weight << " кг" << "\n";
	}
	else if (ideal_weight < weight)
	{
		std::cout << "Вам нужно похудеть на " << weight - ideal_weight << " кг" << "\n";
	}

}

//13. Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат произведения этих чисел.Программа сообщает тестируемому ошибся он или нет.
 
int number_generation()
{
	return 1 + rand() % 9; //Ф-ция возращает число, которое было случайно сгенерировано
}

void number_check(int number, int user_number)
{
	if (number == user_number)
	{
		std::cout << "Вы правильно посчитали"; //В этой ф-ции выполняется сравнение ответа пользователя и результата умножения сгенерированных чисел и выводится результат, в котором указано, указал ли пользователь правильный ответ 
	}
	else
	{
		std::cout << "Вы ошиблись";
	}
}
 
//14. Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется скидка 20 % .Ввести продолжительность разговора и день недели(число от 1 до 7).
 
float total_price(int day, int period, float price)
{
	return day == 6 || day == 7 ? period * price * 0.8 : period * price;  //В этой ф-ции используется тернарный оператор, который возращает стоимости переговоров со скидкой, если они состоялись в субботу или воскресенье, или без скидки в ином случае
}
 
//15. Ввести с клавиатуры номер месяца.Выдать сообщение о названии месяца и времени года.

void month(int number_of_month)
{
	std::string name_of_month, season;
	if (number_of_month == 12 || number_of_month == 1 || number_of_month == 2)
	{
		season = "Зима";
		switch (number_of_month)
		{
		case 12:
			name_of_month = "Декабрь";
			break;
		case 1:
			name_of_month = "Январь";
			break;
		case 2:
			name_of_month = "Февраль";
			break;
		default:
			break;
		}
	}
	else if (number_of_month == 3 || number_of_month == 4 || number_of_month == 5)
	{
		season = "Весна";
		switch (number_of_month)
		{
		case 3:
			name_of_month = "Март";
			break;
		case 4:
			name_of_month = "Апрель";
			break;
		case 5:
			name_of_month = "Май";
			break;
		default:
			break;
		}
	}
	else if (number_of_month == 6 || number_of_month == 7 || number_of_month == 8)
	{
		season = "Лето";
		switch (number_of_month)
		{
		case 6:
			name_of_month = "Июнь";
			break;
		case 7:
			name_of_month = "Июль";
			break;
		case 8:
			name_of_month = "Август";
			break;
		default:
			break;
		}
	}
	else if (number_of_month == 9 || number_of_month == 10 || number_of_month == 11)
	{
		season = "Осень";
		switch (number_of_month)
		{
		case 9:
			name_of_month = "Сентябрь";
			break;
		case 10:
			name_of_month = "Октябрь";
			break;
		case 11:
			name_of_month = "Ноябрь";
			break;
		default:
			break;
		}
	}
	else
	{
		std::cout << "Некорректный ввод\n";
		season = "-";
		name_of_month = "-";
	}
	std::cout << "Время года: " << season << "\n";
	std::cout << "Месяц: " << name_of_month << "\n";
}
 
//16. Определить, является ли шестизначное число "счастливым"

int lucky_number(int number)
{
	int sum_of_first_three_number = 0, sum_of_last_three_number = 0;
	for (int i = 0; i < 3; i++)
	{
		sum_of_last_three_number += number % 10;  //считается сумма последних трёх цифр
		number /= 10;
	}
	for (int i = 0; i < 3; i++)
	{
		sum_of_first_three_number += number % 10;  //считается сумма первых трёх цифр
		number /= 10;
	}
	return sum_of_first_three_number == sum_of_last_three_number;  //возращается результат сравнения получившихся сумм
}

//17. Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово "копейка" в правильной форме.

std::string correct_ending(int number)
{
	std::string ending;
	if (number % 10 == 1 && number != 11)
	{
		ending = "йка";
	}
	else if(number % 10 == 2 && number != 12 || number % 10 == 3 && number != 13 || number % 10 == 4 && number != 14)
	{
		ending = "йки";
	}
	else
	{
		ending = "ек";
	}
	return ending;
}

//18. Дано натуральное четырехзначное число.Выяснить, является ли оно палиндромом.

bool palindrome(int number)
{
	int number1, number2, number3, number4;
	number4 = number % 10;
	number3 = number / 10 % 10;
	number2 = number / 10 / 10 % 10;
	number1 = number / 10 / 10 / 10;
	return (number1 == number4) && (number2 == number3);
}

//19. Дано трёхзначное число.Определить: 19.1 является ли произведение его цифр больше числа b 19.2 кратна ли 7 сумма его цифр.
 
bool comparison_of_number(int number, int b)
{
	int product_of_numbers = 1;
	while (number != 0)
	{
		product_of_numbers *= number % 10;   //в цикле while считается произведение цифр числа
		number /= 10;
	}
	return product_of_numbers > b;  //возращается результат сравнения произведения цифр числа и числа b
}

bool multiplicity_check(int number)
{
	int sum = 0;
	while (number != 0)
	{
		sum += number % 10;   //в цикле while считается сумма цифр числа
		number /= 10;
	}
	return sum % 7 == 0;  //возращается результат проверки суммы на кратность 7
}
 
//20. Даны вещественные положительные числа a, b, c, d.Выяснить, можно ли прямоугольник со сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного прямоугольника были параллельны сторонам другого.

std::string rectangle_check(float a, float b, float c, float d)
{
	return ((a < c && b < d) || (a < d && b < c)) ? "Можно поместить" : "Нельзя поместить"; //в return используется тернарный оператор, который возращает строку, где указан результат, который зависит от того, выполнится ли указанное условие
}

//21.(По желанию) Написать программу, в которой выводятся размеры основных типов данных.Сделать выводы.

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
	std::cout << "Введите длину основания b1 в трапеции: ";
	std::cin >> b1;
	std::cout << "Введите длину основания b2 в трапеции: ";
	std::cin >> b2;
	std::cout << "Введите длину высоты h в трапеции: ";
	std::cin >> h;
	square = tr_square(b1, b2, h);
	std::cout << "Пллощадь трапеции = " << square;*/

//number 2
	/*float radius, length, square;
	std::cout << "Введите радиус окружности: ";
	std::cin >> radius;
	length = circle_len(radius);
	square = circle_square(radius);
	std::cout << "Длина окружности = " << length << "\nПлощадь = " << square;*/

//number 3
	/*float a, b, c, square;
	std::cout << "Введите длину первого катета прямоугольного треугольника: ";
	std::cin >> a;
	std::cout << "Введите длину второго катета прямоугольного треугольника: ";
	std::cin >> b;
	square = triangle_square(a, b);
	c = hypotenuse(a, b);
	std::cout << "Площадь треугольника = " << square << "\nГипотенуза = " << c;*/

//number 4
	/*int number, sum;
	std::cout << "Введите 4-значное десятичное число: ";
	std::cin >> number;
	sum = sum_of_digits(number);
	std::cout << "Сумма цифр числа = " << sum;*/

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
	std::cout << "Введите коэффициент a квадратного уравнения: ";
	std::cin >> a;
	std::cout << "Введите коэффициент b квадратного уравнения: ";
	std::cin >> b;
	std::cout << "Введите коэффициент c квадратного уравнения: ";
	std::cin >> c;
	roots_of_the_equation(a, b, c);*/
 
//number 8
	/*float a, b, c;
	std::cout << "Введите стороны треугольника\n";
	std::cout << "Сторона a: ";
	std::cin >> a;
	std::cout << "Сторона b: ";
	std::cin >> b;
	std::cout << "Сторона c: ";
	std::cin >> c;
	if (triangle_existence_check(a, b, c))
	{
		median(a, b, c);
	}
	else
	{
		std::cout << "Некорректный ввод\n";
	}*/
 
//number 9
	/*int k;
	std::cout << "Введите колличество секунд: ";
	std::cin >> k;
	time(k);*/
 
//number 10
	/*int a, b, c;
	std::cout << "Введите стороны треугольника\n";
	std::cout << "Введите сторону a: ";
	std::cin >> a;
	std::cout << "Введите сторону b: ";
	std::cin >> b;
	std::cout << "Введите сторону c: ";
	std::cin >> c;
	if (triangle_existence_check(a, b, c))
	{
		if (triangle_check(a, b, c))
		{
			std::cout << "Треугольник равнобедренный\n";
		}
		else
		{
			std::cout << "Треугольник неравнобедренный\n";
		}
	}
	else
	{
		std::cout << "Некорректный ввод";
	}*/
 
//number 11
	/*int sum;
	std::cout << "Введите сумму покупки: ";
	std::cin >> sum;
	std::cout << "Итоговая стоимость покупки: " << purchase_price(sum);*/
 
//number 12
	/*int weight, height;
	std::cout << "Введите свой рост: ";
	std::cin >> height;
	std::cout << "Введите свой вес: ";
	std::cin >> weight;
	ideal_weight_check(height, weight);*/
 
//number 13
	/*int a, b, product_of_numbers;
	a = number_generation();
	b = number_generation();
	std::cout << "Первое число: " << a << "\n";
	std::cout << "Второе число: " << b << "\n";
	std::cout << "Введите результат умножения чисел: ";
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
	std::cout << "Введите номер месяца: ";
	std::cin >> number_of_month;
	month(number_of_month);*/
 
//number 16
	/*int number;
	std::cout << "Введите шестизначное число: ";
	std::cin >> number;
	if (lucky_number(number))
	{
		std::cout << "Число счастливое";
	}
	else
	{
		std::cout << "Число не является счастливым";
	}*/
  
//number 17
	/*std::string word = "копе", ending;
	int number;
	std::cout << "Введите число от 1 до 99: ";
	std::cin >> number;
	ending = correct_ending(number);
	std::cout << number << " " + word + ending;*/
 
//number 18
	/*int number;
	std::cout << "Введите четырёхзначное число: ";
	std::cin >> number;
	if (palindrome(number))
	{
		std::cout << "Число является палиндромом";
	}
	else
	{
		std::cout << "Число не является палиндромом";
	}*/

//number 19
	/*int number, b;
	std::cout << "Введите трёхзначное число: ";
	std::cin >> number;
	std::cout << "Введите число b: ";
	std::cin >> b;
	if (comparison_of_number(number, b))
	{
		std::cout << "Произведение цифр больше числа b\n";
	}
	else
	{
		std::cout << "Произведение цифр меньше числа b\n";
	}
	if (multiplicity_check(number))
	{
		std::cout << "Сумма цифр кратна 7\n";
	}
	else
	{
		std::cout << "Сумма цифр не кратна 7\n";
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