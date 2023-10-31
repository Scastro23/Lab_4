#include "temperature_chart.h"
#include <iostream>
#include <fstream>

TemperatureChart::TemperatureChart(const std::string& filename) : filename(filename), minTemperature(-30), maxTemperature(120), starRange(3) {
    // Constructor for the TemperatureChart class. Initializes filename, min and max temperature ranges, and star range.
}

std::vector<int> TemperatureChart::readTemperatures() const {
    std::ifstream inputFile(filename); // Open the input file to read temperatures
    std::vector<int> temperatures; // Vector to store the temperatures

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the input file." << std::endl;
        return temperatures; // Return an empty vector if file opening fails
    }

    int temperature;
    while (inputFile >> temperature) {
        temperatures.push_back(temperature); // Read temperatures from file and store them in the vector
    }

    inputFile.close(); // Close the file after reading
    return temperatures; // Return the vector containing temperatures
}

void TemperatureChart::generateChart() const {
    std::vector<int> temperatureData = readTemperatures(); // Retrieve temperature data from the input file

    std::cout << "Temperature Bar Chart Range: " << minTemperature << " to " << maxTemperature << " degrees" << std::endl;
    // Display the temperature chart range from minTemperature to maxTemperature

    for (int temperature : temperatureData) {
        if (temperature < minTemperature || temperature > maxTemperature) {
            std::cout << "Temperature out of range: " << temperature << std::endl;
            // If temperature is out of the specified range, display a message
        }
        else {
            int numStars = (temperature - minTemperature) / starRange;
            std::string stars(numStars, '*');
            std::cout << temperature << " | " << stars << std::endl;
            // Display the temperature value and a corresponding number of stars based on temperature range
        }
    }
}
