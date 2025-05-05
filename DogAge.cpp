#include <iostream>
/*let's have a look you buddy's age 
learning code */

int main(){
    //set name you buddy
    std::string buddy_name;
    //
    int dog_age ;// set as dog's age 

    int early_years,later_years, human_years;
   
   
    early_years = 21;//age of first two years for dog
  
    std::cout<<"Enter you buddy name ?  ";
    std::cin >> buddy_name;

    std::cout<< "How old are they now?  ";
    std::cin >> dog_age;

    later_years = (dog_age - 2)*4;// formular cout age as 4 human y
    human_years = early_years + later_years;//set age as human


    std::cout<<"My name is "<<buddy_name<<"Ruff ruff, I am "<<human_years<<" years old in human years. ";
}