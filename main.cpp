#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short min_value = 1;
    const short max_value = 6;
    srand(time(0));
    short die1 = (rand() % (max_value - min_value + 1)) + min_value;
    short die2 = (rand() % (max_value - min_value + 1)) + min_value;

    cout << die1 << " " << die2;
    return 0;
}
