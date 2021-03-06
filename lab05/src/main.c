//1

//Визначити найбільший спільний дільник для двох заданих чисел

int main(){
    const int num1 = 175;
    const int num2 = 250;
    int a = num1;
    int b = num2;
    int result = 0;
    while (a != 0 && b != 0){
        if (a > b) a = a % b;
        else b = b % a;
    }
    result = a + b;


//2

//Визначити, чи є задане ціле число простим

	#define NUM 4
	char result1;
	if (NUM == 2){
		result1 = 'Y';
	}
	if (NUM > 1){
		for (int i = 2; i < NUM; i++){
			if (NUM % i == 0){
				result1 = 'N';
				break;
			}
			else{
				result1 = 'Y';
			}
		}
	}


//3

//Визначити, чи є ціле 6-ти значне число "щасливим" квитком

    int n = 228912;
    int res1 = 0;
    int res2 = 0;
    char res;

    while (n / 1000) {
        res1 += n % 10;
        n = n / 10;
    }
    while (n % 1000) {
        res2 += n % 10;
        n = n / 10;
    }
    if (res1 == res2) {
        res = 'Y';
    } else {
        res = 'N';
    }

//4

//Визначити чи є задане число досконалим

    int num3 = 28;
    int sum3 = 0;
    char result3;
    for (int i = 1; i <= num3 / 2; i++){
        if (num3 % i == 0) sum3 += i;
    }
    if (sum3 == num3) result3 = 'Y';
    else result3 = 'N';


//5

//Визначити корінь заданого числа

/*#define MIST 0.01
	double sqrt = 0;
	double num4 = 225;
	while (sqrt * sqrt < num4){
		sqrt += MIST;
	}*/

#define VALUE 225
double v = VALUE;
double a1 = 0.0000000001;
double root = v / 2;
for (; root - v / root > a1 ;)
{
    root = 0.5 * ( root + v / root );
}

   return 0;
}

