#include <iostream>
#include <vector>

using namespace std;

int inputValidate(int, const string);
bool binarySearch(const vector<int>, const int);

int main()
{
    vector<int> lottery_numbers { 13579, 26791, 26792, 33445, 55555,
                                      62483, 77777, 79422, 85647, 93121 };

    int win_numbers = inputValidate(win_numbers, "Enter 5-digit lotto numbers:");

    bool number_found = binarySearch(lottery_numbers, win_numbers);

    if (number_found)
        cout << "Winner!!" << endl;
    else
        cout << "None of you lottery numbers match the winning numbers." << endl;


    return 0;
}

int inputValidate(int user_number, const string prompt)
{
    cout << prompt << endl;

    while (!(cin >> user_number))
    {
        cout << "Error. A number must be entered." << endl;
        cout << prompt << endl;
        cin.clear();

    }
    return user_number;
}

bool binarySearch(const vector<int> vector_array, const int search_term)
{
    bool is_found = false;
    int first = 0,
        last = vector_array.size() - 1,
        middle;

    while (!is_found && first <= last)
    {
        middle = (first + last) / 2;
        if (vector_array[middle] == search_term)
            is_found = true;
        else if (vector_array[middle] > search_term)
            last = middle - 1;
        else
            first = middle + 1;
    }

    return is_found;
}
