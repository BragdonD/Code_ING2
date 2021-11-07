#ifndef __FORME_H__
#define __FORME_H__

#include <cmath>
#include <vector>
#include <SFML/Graphics.hpp>

class forme
{
    protected:
        std::vector<float> m_sideWidth;
        std::vector<float> m_angles;
        float m_nbSide;
        float m_height;
        float m_width;
        bool m_display = false;
        float m_perimeter;
        float m_area;
        sf::CircleShape m_form;
    public:
        forme();
        forme(int _height, int _width, int _nbSide);

        ~forme();

        void setHeight(float _height);
        void setWidth(float _width);
        void setArea(float _area);
        void setPerimeter(float _perimeter);
        void setDisplay(bool _display);
        void setAngles(std::vector<float>& _angles);
        void setSideWidth(std::vector<float>& _sideWidth);
        void setNbSide(int _nbside);
        
        int getNbSide() const;
        std::vector<float> getAngles() const;
        std::vector<float> getSideWidth() const;
        float getWidth() const;
        float getheight() const;
        float getArea() const;
        float getPerimeter() const;
        bool getDisplay() const;

        void displayOnWindow(sf::RenderWindow& window);
};



#endif