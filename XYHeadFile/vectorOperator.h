#pragma once
#include <regex>


std::vector<std::string> split(const std::string& str, const std::string& delimiters) {
    std::vector<std::string> splitStrings;
    size_t prev = 0;
    size_t next = 0;
    while ((next = str.find_first_of(delimiters, prev)) != std::string::npos) {
        if (next - prev != 0) {
            splitStrings.push_back(str.substr(prev, next - prev));
        }
        prev = next + 1;
    }
    if (prev < str.size()) {
        splitStrings.push_back(str.substr(prev));
    }
    return splitStrings;
}

//itoa
std::string itoa(const unsigned n)
{
	std::stringstream newstr;
	newstr << n;
	return newstr.str();
}
std::string itoa(const unsigned long long n)
{
	std::stringstream newstr;
	newstr << n;
	return newstr.str();
}
//atof
std::vector <double> atof(std::vector <std::string> s)
{
  std::vector <double> a;
  for(unsigned i=0;i<s.size();++i){
    a.push_back(atof(s[i].c_str()));
  }
  return a;
}
//atoi
std::vector <unsigned> atoi(std::vector <std::string> s)
{
  std::vector <unsigned> a;
  for(unsigned i=0;i<s.size();++i){
    a.push_back(atoi(s[i].c_str()));
  }
  return a;
}
