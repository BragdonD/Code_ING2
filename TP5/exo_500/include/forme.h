#ifndef __FORME_H__
#define __FORME_H__

#include <cmath>
#include <vector>

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
    public:
        forme();
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
};

forme::forme(){}
forme::~forme(){}
void forme::setHeight(float _height){m_height = _height;}
void forme::setWidth(float _width){m_width = _width;}
void forme::setArea(float _area){m_area = _area;}
void forme::setPerimeter(float _perimeter){m_perimeter = _perimeter;}
void forme::setDisplay(bool _display){m_display = _display;}
void forme::setAngles(std::vector<float>& _angles){m_angles = _angles;}
void forme::setSideWidth(std::vector<float>& _sideWidth){m_sideWidth = _sideWidth;}
void forme::setNbSide(int _nbside){m_nbSide = _nbside;}
int forme::getNbSide() const{return m_nbSide;}
std::vector<float> forme::getAngles() const{return m_angles;}
std::vector<float> forme::getSideWidth() const{return m_sideWidth;}
float forme::getWidth() const{return m_width;}
float forme::getheight() const{return m_height;}
float forme::getArea() const{return m_area;}
float forme::getPerimeter() const{return m_perimeter;}
bool forme::getDisplay() const{return m_display;}

#endif