#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //seed the random number generator
    std::srand(std::time(0));
    //generate a random number between 1 and 100
    int number_to_guess=std::rand()%100+1;
    int user_guess;

    std::cout<<"I have chosen a number between 1 and 100. Try to guess it !"<<std::endl;

    while(true)
    {
        std::cout<<"Enter your guess:";
        std::cin>>user_guess;

        if(user_guess<number_to_guess)
        {
            std::cout<<"Too low! try again"<<std::endl;
        }
        else if (user_guess>number_to_guess)
        {
            std::cout<<"Too high! try again"<<std::endl;
        }
        else
        {
            std::cout<<"Congratulations! you guessed the number"<<number_to_guess<<"."<<std::endl;
            break;
        }
    }
    return 0;
}
