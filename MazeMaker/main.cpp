#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 800), "My window");


    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        sf::RectangleShape rect(sf::Vector2f(100.f, 100.f));
        rect.setPosition(sf::Vector2f(40.f, 50.f));

        window.draw(rect);

        // end the current frame
        window.display();
    }

    return 0;
}