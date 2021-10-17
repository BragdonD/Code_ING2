#include <iostream>
#include "game.h"

game::game(){
    for(int i=0; i<RANGE_V; i++){
        for(int j=0; j<RANGE_H; j++){
            if((i == 0 || j == 0) || (i == RANGE_V-1 || j == RANGE_H-1)){
                m_plat[i][j] = '@';
            }else{
                m_plat[i][j] = ' ';
            }
        }
    }
    for(int i=0; i<m_nbApple; i++){
        coordinates temp = generateRandomCoordinates();
        apple anApple;
        anApple.setPosition(temp);
        m_apples.push_back(anApple);
    }
}

game::~game(){}
int game::getPoint() const{return m_points;}
void game::setScore(int _score){m_points = _score;}
void game::setLoose(int _loose){m_loose = _loose;}
void game::setNbApple(int _nb){m_nbApple = _nb;}
char game::getWallCara()const{return m_wallCara;}

bool game::CheckEnd() const{
    bool error1 = (m_snake.getBodyPos(0)[1] == 0 || m_snake.getBodyPos(0)[1] == RANGE_V-1) || (m_snake.getBodyPos(0)[0] == 0 || m_snake.getBodyPos(0)[0] == RANGE_H-1);
    bool error2(false);
    for(int i=2; i<m_snake.getSize(); i++){
        if(m_snake.getBodyPos(0) == m_snake.getBodyPos(i)){
            error2 = true;
            break;
        }
    }
    //std::cout << "error 1 =" <<error1 << std::endl;
    //std::cout << "error 2 =" << error2 << std::endl;
    return error2 || error1;
}


void game::CheckApples(){
    for(int i=0; i<m_nbApple; i++){
       if(m_apples[i].getCoord()[0] == m_snake.getBodyPos(0)[0] &&  m_apples[i].getCoord()[1] == m_snake.getBodyPos(0)[1]){
           m_snake.Grow();
           m_points+=1;
           /*for(int i=0; i<m_snake.getSize(); i++){
               std::cout << "Snake at pos " << i << " x = " << m_snake.getBodyPos(i)[0] << " y = " << m_snake.getBodyPos(i)[1] << std::endl;
           }*/
           coordinates temp = generateRandomCoordinates();
           m_apples[i].setPosition(temp);
       }
       
    }
}

void game::generateSnake(){
    coordinates beginSnakePos;
    beginSnakePos(26,26);
    m_snake.setBody(beginSnakePos);
}

void game::generateApple(){}


void game::putSnakeOnPlat(){
    for(int i=0; i<m_snake.getSize(); i++){
        coordinates temp = m_snake.getBodyPos(i);
        m_plat[temp[0]][temp[1]] = m_snake.getCara();
    }
}
void game::putApplesOnPlat(){
    for(int i=0; i<m_nbApple; i++){
        //std::cout << "Aplle " << i << "x = " << m_apples[i].getCoord()[0] << " y = " << m_apples[i].getCoord()[1] << std::endl;
        m_plat[m_apples[i].getCoord()[0]][m_apples[i].getCoord()[1]] = m_apples[0].getCara();
    }
}

void game::printApples(){
    for(int i=0; i<m_nbApple; i++){
        goToLigCol(m_apples[i].getCoord()[0],m_apples[i].getCoord()[1]);
        std::cout<<m_apples[0].getCara();
    }
}

void game::printSnake(){
    for(int i=0; i<m_snake.getSize(); i++){
        coordinates temp = m_snake.getBodyPos(i);
        goToLigCol(temp[0],temp[1]);
        //std::cout<<m_snake.getCara();
    }
}

void game::printTab() const{
    for(int i=0; i<RANGE_V; i++){
        for(int j=0; j<RANGE_H; j++){
            std::cout << m_plat[i][j];
        }
        std::cout << std::endl;
    }
}

void game::moove(std::string& _moove){
    m_snake.mooveBody(_moove);
}

coordinates generateRandomCoordinates(){
    int x = std::rand()%((RANGE_H-2) - 1 + 1) + 1;
    int y = std::rand()%((RANGE_V-2) - 1 + 1) + 1;
    coordinates temp;
    temp(x,y);
    return temp;
}


void goToLigCol(int _x, int _y){
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c;
    c.X = _x;
    c.Y = _y;
    SetConsoleCursorPosition(screen, c);
}

void game::EraseLastPosSnake(){
    coordinates temp = m_snake.getBodyPos(m_snake.getSize()-1);
    m_plat[temp[0]][temp[1]] = ' ';
    //std::cout << ' ' << std::endl;
}

void game::printInfo() const{
    goToLigCol(0,57);
    std::cout << "snake size = " << m_snake.getSize()<<std::endl;
    //std::cout << "snake last x pos = " << m_snake.getBodyPos(m_snake.getSize()-1)[0]<<std::endl;
    //std::cout << "snake last y pos = " << m_snake.getBodyPos(m_snake.getSize()-1)[1]<<std::endl;
}

std::array<std::array<char,RANGE_H>,RANGE_V> game::getTab() const{return m_plat;}