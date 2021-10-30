#include <iostream>
#include <algorithm>
#include "grid.h"

grid::grid(){
    resetGrid();
}

//Puts All value of the grid to 0
void grid::resetGrid(){
    for(auto& line : m_grid){
        for(auto& column : line){
            column = 0;
        }
    }
}

grid::~grid(){}

//Generate a Sudoku Grid
int grid::generateGrid(){
    int test(0);
    bool testInProd(false);
    do{
        resetGrid();
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                std::vector<int> values{1,2,3,4,5,6,7,8,9};
                if(i==2 && j==2){
                    fillLastBlock(i,j,values);
                }
                else{
                    testInProd = fillBlock(i,j,values);
                    ///hard stuck so we reset
                    if(testInProd == false){i=0; j=0;}
                }
            }
        }
        test++;
    }while(checkValidity() == false);
    return test;
}

//Function that fill a block and if blocked will stop and reset the block
bool grid::fillBlock(int lineInput, int columnInput, std::vector<int>& values){
    for(int i=lineInput*3; i<(lineInput+1)*3; i++){
        for(int j=columnInput*3; j<(columnInput+1)*3; j++){
            bool result(false),temp2(false);
            int temp(0),block(0);
            do{
                ///small stuck
                if(temp2){
                    block++;
                    temp = 0;
                    resetBlock( lineInput, columnInput);
                    values = {1,2,3,4,5,6,7,8,9};
                    i = lineInput*3;
                    j = columnInput*3;
                }
                //hard stuck
                if(block>10){resetGrid();return false;}
                //rand the vector
                std::random_shuffle(values.begin(), values.end());
                //test to check if the first value of the vector can go at the (i,j) position
                bool testLine = isInLine(*values.begin(),i);
                bool testColumn = isInColumn(*values.begin(),j);
                result = testLine || testColumn;
                ///value computing to check if we are not stuck
                if(temp>=10 && result){temp2 = true;}
                if(result == true){temp++;}
            }while(result);
            //Value assigment            
            m_grid[i][j] = *values.begin(); 
            values.erase(values.begin());
        }
    }
    return true;
}

//print the grid
void grid::printGrid(){
    for(const auto& line : m_grid){
        for(const auto& column : line){
            if(column == 0)
                std::cout << "  ";
            else
                std::cout << column << ' ';
        }
        std::cout << std::endl;
    }
}

//check if an input is in a column which index is given
bool grid::isInColumn(int valueToTest, int IndexColumn){
    auto temp = getColumn(IndexColumn);
    return (std::find(temp.begin(),temp.end(), valueToTest)!=temp.end());
}

//check if an input is in a line which index is given
bool grid::isInLine(int valueToTest, int IndexLine){
    auto temp = getLine(IndexLine);
    return (std::find(temp.begin(),temp.end(), valueToTest)!=temp.end());
}

///return the line at the index position of the matrix
std::vector<int> grid::getColumn(int index) const {
    std::vector<int> toReturn(9);
    for(int i=0; i<9; i++){
        toReturn[i] = m_grid[i][index];
    }
    return toReturn;
}

///return the line at the index position of the matrix
std::vector<int> grid::getLine(int index) const {
    std::vector<int> toReturn;
    for(const auto& it : m_grid[index]){
        toReturn.push_back(it);
    }
    return toReturn;
}

///Function which reset a block of 3*3 to 0 if the values puts are blocked 
void grid::resetBlock(int lineInput, int columnInput){
    for(int i=lineInput*3; i<(lineInput+1)*3; i++){
        for(int j=columnInput*3; j<(columnInput+1)*3; j++){          
            m_grid[i][j] = 0; 
        }
    }
}

//function who fill the block at (2,2)
void grid::fillLastBlock(int lineInput, int columnInput, std::vector<int>& values){
    for(int i=lineInput*3; i<(lineInput+1)*3; i++){
        for(int j=columnInput*3; j<(columnInput+1)*3; j++){
            for(const auto& it: values){
                //We try to fill the values 1 by 1 if impossible it will automaticly skip it and the grid will be reset
                if((isInLine(it,i) || isInColumn(it,j)) == false){
                    m_grid[i][j] = it;
                    values.erase(std::find(values.begin(),values.end(),it));
                    break;
                }
            }
        }
    }
}

///Check the validity of the grid will return *false* if the grid contain a 0 and true if we have a correct grid
bool grid::checkValidity(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(m_grid[i][j] == 0){
                return false;
            }
        }
    }
    return true;
}

void grid::removeSomeNumbers(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int nbToDelete((std::rand()%(7-5+1))+5);
            int nbDelete(0);
            for(int k=i*3; k<(i+1)*3; k++){
                for(int l=j*3; l<(j+1)*3; l++){
                    if(nbDelete<nbToDelete){
                        int x,y;
                        do{
                            x = std::rand()%(((i+1)*3)-(i*3-1)+1)+(i*3-1);
                            y = std::rand()%(((j+1)*3)-(j*3-1)+1)+(j*3-1);
                            if(x<0){x=0;}
                            else if(x>8){x=8;}
                            if(y<0){y=0;}
                            else if(y>8){y=8;}
                        }while(m_grid[x][y] == 0);
                        m_grid[x][y] = 0;
                        nbDelete++;
                    }
                }
            }
        }
    }
}