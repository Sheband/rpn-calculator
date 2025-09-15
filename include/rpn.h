#pragma once

#include <stack>
#include <string>


double evaluate_rpn(const std::string& expression);
std::string InfPostf(const std::vector<std::string>& tokens);
