#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main()
{
    int magicNum = 87;
    int userNum;
    std::string day;
    char hexDigit;

    std::cout << "Enter a number between 20 and 150: ";
    std::cin >> userNum;
    std::cout << std::endl;

    if (userNum == 5)
    {
        std::cout << "The value is five. " << std::endl;
    }

    if (!std::cin)
    {
        std::cout << "Error: the information entered is not a number. Exiting..." << std::endl;
        return 0;
    }
    else if (userNum < 20 || userNum > 150)
    {
        std::cout << "The number should be between 20 and 150. Exiting..." << std::endl;
        return 0;
    }
    std::cout << "Enter a day: ";
    std::cin >> day;
    std::cout << std::endl;

    std::cout << "Enter a hex digit: ";
    std::cin >> hexDigit;

    std::transform(day.begin(), day.end(), day.begin(), ::tolower); // to transform to upper case replace ::tolower with ::toupper

    if (userNum <= magicNum || day != "monday")
    {
        if (day == "monday")
            std::cout << "It is Monday" << std::endl;
        std::cout << "I won!!" << std::endl;
        std::cout << "I have the highest number because I'm the best!!!!" << std::endl;
    }
    else
    {
        std::cout << "Your number was higher." << std::endl;
    }
    std::cout << "Thanks for playing!" << std::endl;

    if (1.0 == (3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0))
        std::cout << "1.0 is the same as 3.0/7.0 + 2.0/7.0 + 2.0/7.0" << std::endl;

    std::cout << (3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0) << std::endl;
    std::string binary;
    switch (hexDigit)
    {
    case '0':
        std::cout << "0000" << std::endl;
        binary = "0000";
        break;
    case '1':
        std::cout << "0001" << std::endl;
        break;
    case '2':
        std::cout << "0010" << std::endl;
        break;
    case '3':
        std::cout << "0011" << std::endl;
        break;
    case '4':
        std::cout << "0100" << std::endl;
        break;
    case '5':
        std::cout << "0101" << std::endl;
        break;
    case '6':
        std::cout << "0110" << std::endl;
        break;
    case '7':
        std::cout << "0111" << std::endl;
        break;
    case '8':
        std::cout << "1000" << std::endl;
        break;
    case '9':
        std::cout << "1001" << std::endl;
        break;
    case 'A':
    case 'a':
        std::cout << "1010" << std::endl;
        break;
    case 'B':
    case 'b':
        std::cout << "1011" << std::endl;
        break;
    case 'C':
    case 'c':
        std::cout << "1100" << std::endl;
        break;
    case 'D':
    case 'd':
        std::cout << "1101" << std::endl;
        break;
    case 'E':
    case 'e':
        std::cout << "1110" << std::endl;
        break;
    case 'F':
    case 'f':
        std::cout << "1111" << std::endl;
        break;
    default:
        std::cout << "You did not enter a hex digit" << std::endl;
    }

    return 0;

     int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << std::endl;
    if (0 <= num && num <= 10)
        std::cout << num << " is within 0 and 10." << std::endl;
    else
        std::cout << num << " is not within 0 and 10." << std::endl;
    return 0; */
}