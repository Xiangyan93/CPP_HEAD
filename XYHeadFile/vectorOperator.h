#pragma once
#include <regex>


//split a vector using split symbol "pattern"; return a vector of string
std::vector <std::string> split(const std::string & s, std::string rgx_str = "\\s+") {
	std::vector<std::string> elems;

	std::regex rgx (rgx_str);

	std::sregex_token_iterator iter(s.begin(), s.end(), rgx, -1);
	std::sregex_token_iterator end;

	while (iter != end)  {
		//std::cout << "S43:" << *iter << std::endl;
		elems.push_back(*iter);
		if (elems.back().length() == 0) {
			elems.pop_back();
		}
		++iter;
	}

	return elems;
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
