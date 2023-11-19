
// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Nov, 19, 2023
// This program will display all valid RGB
// colors with nested loops

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // Display a message about the program
    std::cout << "This program will display all valid RGB colors";

    // nested loop to find all valid color of RGB
    for (int red = 0; red <= 255; red++) {
        for (int green = 0; green <= 255; green++) {
            for (int blue = 0; blue <= 255; blue++) {
                // display RGB values with color
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)\n", red, green, blue, red, green, blue);
            }
        }
    }
}
