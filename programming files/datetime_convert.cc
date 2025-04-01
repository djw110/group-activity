#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    // Declare and define datetime
    std::string date_str = "2022-03-17 10:45:30";
    // Declare structure for holding date and time info
    std::tm date_obj = {};
    // Save date string into string stream
    std::istringstream ss(date_str);
    // Format date string within string stream
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%m:%S");
    // Declare string stream variable to hold formatted date string
    std::stringstream formatted_date_ss;
    // Output variable from date_obj into formatted string stream variable
    formatted_date_ss << std::put_time(&date_obj, "%M/%d/%Y %H:%m:%S");
    // Convert form string stream to string variable
    std::string formatted_date = formatted_date_ss.str();
    
    // Print formatted date
    std::cout << formatted_date_ss << std::endl;

    return 0;
}
