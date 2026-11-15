// Guess the number game
#include <iostream>
#include <cstdlib>//important for rand() and srand()
#include <ctime>
#define SIZE 4

using namespace std;  

void digitize(int num, int arr[]){
    //abcd : d is the one that I get 1st
    //count the entered array's elements
    for(int i = 0; i < SIZE; i++){
        arr[SIZE-1-i] = num % 10;
        num /= 10;
    }
}



int main(){
    int guessNumber;
    int guessAttempts = 0;
    bool begin = true;
    bool Done = false;
    int targetNumberDigits[SIZE] = {};
    int guessNumberDigits[SIZE] = {};
    int nDigitsAtRightPlace;
    int nDigitsAtWrongPlace;
    srand(time(0));

    cout<<" Welcome to Guess the number game "<< endl;
    cout<<"Task: Enter a 4-digit number, in a range of [1023 -9876] having each of the digits "
    << "different from others to guess the random target number given by the computer"<< endl;

    while(targetNumberDigits[0] == targetNumberDigits[1] || targetNumberDigits[0] == targetNumberDigits[2] || targetNumberDigits[0] == targetNumberDigits[3] || targetNumberDigits[1] == targetNumberDigits[2] || targetNumberDigits[1] == targetNumberDigits[3] || targetNumberDigits[2] == targetNumberDigits[3]){
        int targetNumber = 1023 + rand() % (9876-1023+1);
        digitize(targetNumber, targetNumberDigits);
    }

    /*for(int i = 0; i<SIZE; i++){
        cout << " "<<targetNumberDigits[i];
    }*/

    
    while (begin)
    {
        cout << "Enter a 4-digit number: "<<endl;
        cin >> guessNumber;

        if (guessNumber < 0 or guessNumber < 1023 or guessNumber > 9876){
            cout << "enter a valid positive number!! in the range [1023 -9876]"<< endl;
            begin = false;
        }
        else{
            digitize(guessNumber, guessNumberDigits);
        }

        nDigitsAtRightPlace = 0;
        nDigitsAtWrongPlace = 0;

        //now comparing the digits(it is divided into 2 parts)
        for(int i = 0; i< SIZE; i++ ){
            //f a digit in your guess is in the exact same index position as the target number.
            if(targetNumberDigits[i] == guessNumberDigits[i]){
                nDigitsAtRightPlace++;
            }
        }

        for(int k = 0; k < SIZE; k++){
            for(int j = 0; j < SIZE; j++){
                if(guessNumberDigits[k] == targetNumberDigits[j] && k != j){
                    //we do not want to count the ones in the right place && k != j
                    nDigitsAtWrongPlace ++;
                }
            }
        }

        cout << "Score: +" << nDigitsAtRightPlace << " -" << nDigitsAtWrongPlace << endl;
        if(nDigitsAtRightPlace == 4){
            Done = true;
            begin = false;
        }


        guessAttempts ++;
    }

    if(Done){
        cout << "Congratulations! You've found the target number in " << guessAttempts<<" attempts."<<endl;
    }
    
}