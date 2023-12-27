//
// Created by António Cunha on 26/12/2023.
//

#include "Menu.h"
#include <iostream>
#include "FMSGraph.h"
using namespace std;

void Menu::getMainMenu(FMSGraph graph) {
    cout<<"------FSM------"<< endl;
    cout<<"1. Network Statistics"<< endl;
    cout<<"2. Search Flight Options"<< endl;
    cout<<"3. Extras"<< endl;
    cout<<"4. Quit"<< endl;
    cout<< "Select:"<< endl;
    int selected;
    cin >> selected;
    switch (selected){
        case 1 :
            getStatMenu(graph);
            break;
        case 2 : 
            getFlightMenu(graph);
            break;
        case 3 :
            getExtrasMenu(graph);
            break;
        case 4 :
            exit(0);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

void Menu::getStatMenu(FMSGraph graph){
    cout<<"----Stat Menu----"<< endl;
    cout<<"1. Number of airports and available flights;"<< endl;
    cout<<"2. Number of flights out of an airport and different airlines"<< endl;
    cout<<"3. Number of flights per city/airline"<< endl;
    cout<<"4. Number of different countries that a given airport/city flies to"<< endl;
    cout<<"5. Number of destinations available for a given airport"<< endl;
    cout<<"6. Number of reachable destinations from a given airport in a maximum number of X stops "<< endl;
    cout<<"7. Maximum trip and corresponding pair of source-destination airports"<< endl;
    cout<<"8. Airport with the greatest air traffic capacity / with the greatest number of flights"<< endl;
    cout<<"9. Essential airports to the networks circulation capability "<< endl;
    cout<<"10. Go back"<< endl;
    cout<< "Select:"<< endl;
    int selected;
    cin >> selected;
    int choice3, choice4, stops6, numAirports8;
    string city3, airline3, city4, airport4, code2, code5, airport6;
    switch(selected){
        case 1:
            graph.airportFlightCount();
            getMainMenu(graph);
            break;
        case 2:
            cout<<"Insert the airport code"<< endl;
            cin>>code2;
            graph.flighsPerAirline(code2);
            getMainMenu(graph);
            break;
        case 3:
            cout << "Do you wish to search for :"<< endl;
            cout << "1. City " << endl;
            cout << "2. Airline"<< endl;
            cout << "Select:"<< endl;
            switch(choice3){
                case 1:
                    cout<<"Input the city name"<< endl;
                    cin >> city3;
                    graph.flightsPerCity(city3);
                    getMainMenu(graph);
                    break;
                case 2:
                    cout<<"Input the airline name"<< endl;
                    cin >> airline3;
                    graph.flighsPerAirline(airline3);
                    getMainMenu(graph);
                    break;
                default:
                    cout <<"Please select a valid choice."<< endl;
            }
            break;

        case 4:
            cout << "Do you wish to search for :"<< endl;
            cout << "1. City"<< endl;
            cout << "2. Airport"<< endl;
            cout << "Select:"<< endl;
            cin >> choice4;

            switch(choice4){
                case 1:
                    cout<<"Input the city name"<< endl;
                    cin >> city4;
                    graph.numOfDestinationsCity(city4);
                    getMainMenu(graph);
                    break;
                case 2:
                    cout<<"Input the airport name"<< endl;
                    cin >> airport4;
                    graph.numOfDestinationsAirport(airport4);
                    getMainMenu(graph);
                    break;
                default:
                    cout <<"Please select a valid choice."<< endl;
            }
            break;

        case 5:

            cout << "Insert the airport code"<< endl;
            cin >> code5;
            graph.airportDestinations(code5);
            getMainMenu(graph);
            break;

        case 6:

            cout << "Insert the airport code"<< endl;
            cin >> airport6;
            cout << "Insert the number of stops"<< endl;
            cin >> stops6;
            graph.reachableDestinationsInXStops(airport6, stops6);
            getMainMenu(graph);
            break;
        case 7:
            graph.maxTrip();
            getMainMenu(graph);
            break;
        case 8:

            cout << "Insert the number of airports on the list"<< endl;
            cin >> numAirports8;
            graph.topAirports(numAirports8);
            getMainMenu(graph);
            break;
        case 9:
            graph.essentialAirports();
            getMainMenu(graph);
            break;
        case 10:
            getMainMenu(graph);
        default :
            cout << "Invalid choice. Please try again." << endl;
            getStatMenu(graph);
    }
}
void Menu::getFlightMenu(FMSGraph graph){
    cout<<"----Flight Menu----"<< endl;
    //WIP
}
void Menu::getExtrasMenu(FMSGraph graph){
    cout<<"----Extras Menu----"<< endl;
    //WIP
}



