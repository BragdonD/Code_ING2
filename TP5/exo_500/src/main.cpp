#include <iostream>
#include "losange.h"
//#include "rectangle.h"

int main(){
    std::vector<float> temp = {2.5,3.6,2.5,3.6};
    sf::RenderWindow window(sf::VideoMode(800,800),"2D Forms");
    losange myLos(20,30,4);
 

    while(window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event))
        {
            
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed:
                window.clear();
                if(event.key.code == sf::Keyboard::Escape)
                    window.close();
                else if(event.key.code == sf::Keyboard::L){
                    myLos.displayOnWindow(window);
                }
                window.display();
                break;
            default:
                break;
            }
        }
    }

    return 0;
}