
/***********************************************************************************************
* Mit dieser Vorlage koennen Sie die einzelnen Teilaufgaben bei der Abnahme schnell anwaehlen  *
* Der Quelltext von Aufgabe a ist schon eingetragen. F�r die anderen Teilaufgaben kopieren Sie *
* diesen Quelltext in die entsprechenden Bereiche der Vorlage und modifizieren ihn.            *
*                                                                                              *
* Welcher Quelltext dann �bersetzt werden soll, bestimmen Sie in den Target Options / C166     *
* Dort tragen Sie im Feld "Define:" einfach "TEIL_A" oder "TEIL_B" oder "TEIL_C" usw. ein.     *
***********************************************************************************************/


#ifdef TEIL_A //Teilaufgabe a)

void main(void) {
	int fahr, celsius;
	int lower, upper,step;

	lower = 0;
	upper = 300;
	step = 20;


	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr-32) / 9;
		fahr = fahr + step;
	}
}

#endif //Teilaufgabe a)

#ifdef TEIL_B  //Teilaufgabe b)
int celsius;

void main(void) {
	int fahr;
	int lower, upper,step;

	lower = 0;
	upper = 300;
	step = 20;


	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = 5 * (fahr-32) / 9;
		fahr = fahr + step;
	}
}

#endif //Teilaufgabe b)

#ifdef TEIL_C //Teilaufgabe c)
int celsius;

int fahr2cels(int fahr){
		 return 5 * (fahr-32) / 9; 
}

void main(void) {
	int fahr;
	int lower, upper,step;

	lower = 0;
	upper = 300;
	step = 20;


	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = fahr2cels(fahr);
		fahr = fahr + step;
	}
}

#endif //Teilaufgabe c)


#ifdef TEIL_D1 //Teilaufgabe d)	mit long
long celsius;

long fahr2cels(long fahr){
		 return 5 * (fahr-32) / 9; 
}

void main(void) {
	long fahr;
	int lower, upper,step;

	lower = 0;
	upper = 300;
	step = 20;


	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = fahr2cels(fahr);
		fahr = fahr + step;
	}
}

#endif //Teilaufgabe d) mit long

#ifdef TEIL_D2 //Teilaufgabe d)	mit float
float celsius;

float fahr2cels(float fahr){
		 return 5 * (fahr-32) / 9; 
}

void main(void) {
	float fahr;
	int lower, upper,step;

	lower = 0;
	upper = 300;
	step = 20;


	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = fahr2cels(fahr);
		fahr = fahr + step;
	}
}

#endif //Teilaufgabe d) mit float

#ifdef TEIL_D3 //Teilaufgabe d)	mit double
double celsius;

double fahr2cels(double fahr){
		 return 5 * (fahr-32) / 9; 
}

void main(void) {
	double fahr;
	int lower, upper,step;

	lower = 0;
	upper = 300;
	step = 20;


	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = fahr2cels(fahr);
		fahr = fahr + step;
	}
}

#endif //Teilaufgabe d) mit double



