// Samuel Castro
// Lab 4 
// FA2023
/* Description: Design and write a C++ program that inputs a series of hourly temperature
from a file, and outputs a bar chart (using stars) of the temperatures. The temperature
should be printed to the left of the corresponding bar, and there should be a heading
that gives the scale of the chart. The range of temperatures should be from -30 to 120.
Because it is hard to display 150 characters on the screen, you should have each star
represent a range of 3 degrees. That way, the bars will be at most 50 characters wide.
Use meaningful variable names, proper indentation, and appropriate comments.
Thoroughly test the program using your own data sets. Make sure to vet the values from
the input file. Use good programming practices including, classes, comments, and
pre/post conditions.*/

#include <iostream>
#include "temperature_chart.h" // Include the header file for the TemperatureChart class

int main() {
    const std::string filename = "temperatures.txt"; // Define the filename for the input file containing temperature data

    // Create an instance of the TemperatureChart class with the specified filename
    TemperatureChart chart(filename);

    // Generate the temperature chart by calling the generateChart method
    chart.generateChart();

    return 0; // Indicate successful program completion
}

