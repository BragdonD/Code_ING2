#ifndef __LOSANGE_H__
#define __LOSANGE_H__
#pragma once

#include "forme.h"

class losange : public forme
{
    private:
        float m_sideWidth;
    public:
        losange(/* args */);
        ~losange();
};

losange::losange(/* args */)
{
}

losange::~losange()
{
}

#endif