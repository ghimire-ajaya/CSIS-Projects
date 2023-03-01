#include <iostream>
#include <iomanip>

using namespace std;

void arrSelectSort(double *, int);
void showArrPtr(double *, int);
void showAverage(double, int);

int main()
{
	double *scores,
	total = 0.0,
	average;
	int Scores;

	cout << "How many test scores would you like to calculate?";
	cin >> Scores;


	scores = new double[Scores];
	if (scores == NULL)
		return 0;


	cout << "Enter the test scores below.\n";

	for (int count = 0; count < Scores; count++)
	{
		cout << "Test score #" << (count + 1) << ": ";
		cin >> scores[count];
		while (scores[count] <= 0)
		{
			cout << "Zero or negative numbers not valid.\n";
			cout << "Test Score #" << (count + 1) << ": ";
			cin >> scores[count];
		}
	}




	for (int count = 0; count < Scores; count++)
	{
		total += scores[count];
	}


	arrSelectSort(scores, Scores);

	cout << "The test scores in ascending order are: \n";
	showArrPtr(scores, Scores);
	showAverage(total, Scores);


	return 0;

}

void arrSelectSort(double *array, int size)
{
	int Scan, minIndex;
	double  minElem;
	for (Scan = 0; Scan < (size - 1); Scan++)
	{
		minIndex = Scan;
		minElem = array[Scan];
		for (int index = Scan + 1; index < size; index++)
		{
			if (array[index]  < minElem)
			{
				minElem = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[Scan];
		array[Scan] = minElem;
	}
}

void showArrPtr(double *array, int size)
{
	for (int count = 0; count< size; count++)
		cout << array[count] << " ";
	cout << endl;
}
void showAverage(double total, int Scores)
{
	double average;

	average = total / Scores;



	cout << fixed << showpoint << setprecision(2);
	cout << "Average Score: " << average << endl;
	system("pause");
}
