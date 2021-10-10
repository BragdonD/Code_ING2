#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__
#pragma once

#include <unordered_set>
#include <string>
#include <functional>

bool DoesTheWordExist(const std::string& valueToTest, const std::unordered_set<std::string>& Dictionary);

#endif