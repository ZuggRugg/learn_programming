#include <iostream>
#include <string>

/*
getQuantityPhrase() should take a single int parameter representing the quantity of something and return the following descriptor:

    < 0 = “negative”
    0 = “no”
    1 = “a single”
    2 = “a couple of”
    3 = “a few”
    > 3 = “many”

getApplesPluralized() should take a single int parameter parameter representing the quantity of apples and return the following:

    1 = “apple”
    otherwise = “apples”

This function should use the conditional operator.
*/


// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(int numApples) {
  std::string answer = "";
  return answer;
}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(int maryApples) {
  std::string answer = "";
  return answer;
}


int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
