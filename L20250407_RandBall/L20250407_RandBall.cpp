#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
    int drawNum = 0;
    bool basket[53] = {};
    char inputCheck = 'a';
    int ballArray[53] = {};
    int j = 0;
    cout << "\n";
    while (drawNum++ < 52)
    {
        cout << "Now Turn : " << drawNum << "\n";
        cout << "NextNum : Enter, Stop : s -> input: ";
        cin.get(inputCheck);
        system("cls");
        if (inputCheck == 's')
            break;
        while (true)
        {
            static std::mt19937 gen = std::mt19937((unsigned int)time(NULL));
            static std::uniform_real_distribution<> dist(0, 1);
            int randNum = dist(gen) * 52 + 1;

            if (basket[randNum] == false)
            {
                basket[randNum] = true;
                ballArray[j++] = randNum;
                for (int k = 0;k < j;k++)
                {
                    cout << ballArray[k] << " ";
                }
                cout << "\n";
                break;
            }
            
        }
    }
}
