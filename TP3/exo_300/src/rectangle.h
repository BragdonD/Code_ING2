#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

class rectangle{
    private:
        float m_width;
        float  m_height;

    public:
        ///constructor
        rectangle(float n_width, float n_height);
        rectangle();
        ///destructor
        ~rectangle();
        ///setter
        bool setWidth(float n_width);
        bool setHeight(float n_height);
        ///getter
        float getPerimeter() const;
        float getArea() const;
        float getHeight() const;
        float getWidth() const;
        //others
        void printInfo() const;
 
};

#endif