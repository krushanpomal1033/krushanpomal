#include <iostream>
#include <iomanip>

enum class Days {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

std::string get_day_name(Days day) {
    switch (day) {
        case Days::Monday: return "Monday";
        case Days::Tuesday: return "Tuesday";
        case Days::Wednesday: return "Wednesday";
        case Days::Thursday: return "Thursday";
        case Days::Friday: return "Friday";
        case Days::Saturday: return "Saturday";
        case Days::Sunday: return "Sunday";
    }
    return "Invalid day";
}

int main() {
    std::cout << "Enter a number corresponding to the day of the week (1-7): ";

    int choice;
    std::cin >> choice;

    Days day;
    try {
        day = static_cast<Days>(choice - 1); // Adjust the index by 1 to match the enumeration values
    }
    catch (...) {
        std::cerr << "Invalid input. Please enter a number between 1 and 7." << std::endl;
        return 1;
    }

    std::string day_name = get_day_name(day);
    std::cout << "The day corresponding to the number " << choice << " is: " << day_name << std::endl;

    return 0;
}