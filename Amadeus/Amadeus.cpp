// Amadeus.cpp : This file contains the 'main' function. Program execution begins and ends there.
/**
 * @file Amadeus.cpp
 *
 * \class Amadeus
 *
 * @brief
 *
 * @author Diego Cejas
 *
 * @date 2022 Copyright All Rights Reserved
 *
 * Goal: 
 *
 * <br>
 * <table border="1">
 * 	<tr> <th> Autor </th> <th> Fecha </th> <th> Comentarios </th>  </tr>
 * 	<tr> <td> Diego Cejas </td> <td> 10/08/2022 </td> <td> first release </td> </tr>
 * </table>
 */

#include "./Amadeus.h"

using namespace std;



// Function
const auto getEventWithMaxOccurrences(vector <string> events)
{
    // length vector
    cout << "Length events: " << events.size() << endl;
    unsigned int length = events.size();

    // Define variable
    char word[255];

    // Ocurrency for word
    unsigned int ocurrency[10];
    memset(ocurrency, 0, sizeof(ocurrency));        // clean vector

    // orden alfabetics
    sort(events.begin(), events.end());

    // algorithm
    for (int i = 0; i < length; i++) {

        cout << "Name events["<< i << "]: " << events[i] << endl;

 /*       if (events[i] == "WRITE") {
            ocurrency[0] += 1;
        }        
        if (events[i] = "READ") {
            ocurrency[1] += 1;
        }
        if (events[i] = "STATS") {
            ocurrency[2] += 1;
        }
        if (events[i] = "ERROR") {
            ocurrency[4] += 1;
        }*/
    }
    

    return 0;
}

int main()
{
    // First message debug
    cout << "Alten Amadeus test\n";

    // Vector events
    vector <string> events = { "WRITE","WRITE","READ","READ","STATS","WRITE","ERROR","READ","WRITE" };

    // Call function
    const auto event_with_max_occurrences = getEventWithMaxOccurrences(events);

    //std::cout << "event: " << event_with_max_occurrences.first << " , # occurrences: " << event_with_max_occurrences.second << std::endl;

    // should output
    //event: WRITE, # occurrences : 4

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
