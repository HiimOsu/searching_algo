#include <iostream>
#include <SFML\Graphics.hpp>

using namespace std;

#comment


int main(){
    cout << "\n\n\n"
        << "==============Entering Main=================\n\n\n";
    
    sf::RenderWindow wind;

    wind.create(sf::VideoMode(100,100), "A Window");

    while(wind.isOpen()){
        sf::Event event;

        if(wind.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                wind.close();
            }
        }
    }

    cout << "\n\n\n"
        << "==============Leaving Main==================\n\n\n";
    return  0;
}
