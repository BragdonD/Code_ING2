#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

class rectangle{
    public:
    ///constructor
    rectangle(float n_width, float n_height);
    rectangle();
    ///destructor
    ~rectangle();
    ///modify methodes
    void changeWidth(int n_width);
    void changeHeight(int n_height);
    ///calculative methode
    int calculPerimeter();
    int calculArea();
    ///getter
    void printInfo();

    private:
    float m_width;
    float  m_height;
};

#endif