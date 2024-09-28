#include <iostream>
using namespace std;

int main()

{
    int target = rand() % 100;
    int guess=-1;
    int attempt = 0;
    int points = 0;

    cout << "guess a number between 0 and 99" << endl;
    

    while (guess != target)
    {
        cin >> guess;
        attempt++;
        if (guess > target)
        {
            cout << "Too high! Try again" << endl;
        }

        else if (guess < target)
        {
            cout << "Too low! Try again" << endl;
        }

        else
        {
            if (attempt == 1)
            {
                points = 10;
            }

            else if (attempt <= 5)
            {
                points = 5;
            }
            else if (attempt <= 10 && attempt >= 5)
            {
                points = 2;
            }
            else
            {
                points = 1;
            }

            cout << "congratulations! you guessed the number in " << attempt << " turns" << endl;
            cout << "you scored " << points << " points!" << endl;
            break;
        }
}
        return 0;
}