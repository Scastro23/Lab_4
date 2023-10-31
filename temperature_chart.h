#ifndef TEMPERATURE_CHART_H
#define TEMPERATURE_CHART_H

#include <string>
#include <vector>

class TemperatureChart {
public:
    TemperatureChart(const std::string& filename); // Constructor for the TemperatureChart class

    void generateChart() const; // Method to generate the temperature chart

private:
    const std::string filename; // Filename of the input file
    int minTemperature; // Minimum temperature range
    int maxTemperature; // Maximum temperature range
    int starRange; // Range to determine the representation of temperatures using stars

    std::vector<int> readTemperatures() const; // Method to read temperatures from the input file
};

#endif
