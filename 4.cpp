#include <iostream>
#include <string>

int main() {
    int a, b;

    std::cout << "Enter the first number (-99 <= x <= 99): ";
    std::cin >> a;
    std::cout << "Enter the second number (-99 <= x <= 99): ";
    std::cin >> b;

    if (a < -99 || a > 99 || b < -99 || b > 99) {
        std::cout << "Error: numbers must be in the range from -99 to 99!" << std::endl;
        return 1;
    }

    std::string relation;
    if (a < b) {
        relation = "less than";
    }
    else if (a > b) {
        relation = "greater than";
    }
    else {
        relation = "equal to";
    }


    std::cout << "\nComparison result:" << std::endl;


    if (a < 0) {
        std::cout << "minus ";
        a = -a; 
    }
    if (a >= 0 && a <= 19) {
        switch (a) {
        case 0:  std::cout << "zero"; break;
        case 1:  std::cout << "one"; break;
        case 2:  std::cout << "two"; break;
        case 3:  std::cout << "three"; break;
        case 4:  std::cout << "four"; break;
        case 5:  std::cout << "five"; break;
        case 6:  std::cout << "six"; break;
        case 7:  std::cout << "seven"; break;
        case 8:  std::cout << "eight"; break;
        case 9:  std::cout << "nine"; break;
        case 10: std::cout << "ten"; break;
        case 11: std::cout << "eleven"; break;
        case 12: std::cout << "twelve"; break;
        case 13: std::cout << "thirteen"; break;
        case 14: std::cout << "fourteen"; break;
        case 15: std::cout << "fifteen"; break;
        case 16: std::cout << "sixteen"; break;
        case 17: std::cout << "seventeen"; break;
        case 18: std::cout << "eighteen"; break;
        case 19: std::cout << "nineteen"; break;
        }
    }
    else {
        int tens = a / 10;
        int units = a % 10;
        switch (tens) {
        case 2: std::cout << "twenty"; break;
        case 3: std::cout << "thirty"; break;
        case 4: std::cout << "forty"; break;
        case 5: std::cout << "fifty"; break;
        case 6: std::cout << "sixty"; break;
        case 7: std::cout << "seventy"; break;
        case 8: std::cout << "eighty"; break;
        case 9: std::cout << "ninety"; break;
        }
        if (units != 0) {
            std::cout << " ";
            switch (units) {
            case 1: std::cout << "one"; break;
            case 2: std::cout << "two"; break;
            case 3: std::cout << "three"; break;
            case 4: std::cout << "four"; break;
            case 5: std::cout << "five"; break;
            case 6: std::cout << "six"; break;
            case 7: std::cout << "seven"; break;
            case 8: std::cout << "eight"; break;
            case 9: std::cout << "nine"; break;
            }
        }
    }


    std::cout << " " << relation << " ";


    if (b < 0) {
        std::cout << "minus ";
        b = -b; 
    }
    if (b >= 0 && b <= 19) {
        switch (b) {
        case 0:  std::cout << "zero"; break;
        case 1:  std::cout << "one"; break;
        case 2:  std::cout << "two"; break;
        case 3:  std::cout << "three"; break;
        case 4:  std::cout << "four"; break;
        case 5:  std::cout << "five"; break;
        case 6:  std::cout << "six"; break;
        case 7:  std::cout << "seven"; break;
        case 8:  std::cout << "eight"; break;
        case 9:  std::cout << "nine"; break;
        case 10: std::cout << "ten"; break;
        case 11: std::cout << "eleven"; break;
        case 12: std::cout << "twelve"; break;
        case 13: std::cout << "thirteen"; break;
        case 14: std::cout << "fourteen"; break;
        case 15: std::cout << "fifteen"; break;
        case 16: std::cout << "sixteen"; break;
        case 17: std::cout << "seventeen"; break;
        case 18: std::cout << "eighteen"; break;
        case 19: std::cout << "nineteen"; break;
        }
    }
    else {
        int tens = b / 10;
        int units = b % 10;
        switch (tens) {
        case 2: std::cout << "twenty"; break;
        case 3: std::cout << "thirty"; break;
        case 4: std::cout << "forty"; break;
        case 5: std::cout << "fifty"; break;
        case 6: std::cout << "sixty"; break;
        case 7: std::cout << "seventy"; break;
        case 8: std::cout << "eighty"; break;
        case 9: std::cout << "ninety"; break;
        }
        if (units != 0) {
            std::cout << " ";
            switch (units) {
            case 1: std::cout << "one"; break;
            case 2: std::cout << "two"; break;
            case 3: std::cout << "three"; break;
            case 4: std::cout << "four"; break;
            case 5: std::cout << "five"; break;
            case 6: std::cout << "six"; break;
            case 7: std::cout << "seven"; break;
            case 8: std::cout << "eight"; break;
            case 9: std::cout << "nine"; break;
            }
        }
    }

    std::cout << std::endl;
    return 0;
}
