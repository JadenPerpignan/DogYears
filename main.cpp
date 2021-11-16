#include <iostream>

int main ( ) {
    int dog_age = 7;
    //My dog's age is seven

    int early_years; // for your dog's first two years
    int later_years; // for your dog's following years
    int human_years; // for your dog's total human years

    early_years = 21; // The first two years of a dog's life counts as 21 human years

    later_years = ( dog_age - 2 ) * 4;
    human_years = early_years + later_years; //This is how to calculate human years

    std::cout << "My name is Dean! Ruff ruff, I am " << human_years << " in human years.";


}
