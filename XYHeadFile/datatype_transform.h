#pragma once

template <class Type>
std::string anything2str(Type in)
{
	std::stringstream newstr;
	newstr << in;
	return newstr.str();
}

template <class Type>
int anything2int(Type in)
{
	std::stringstream newstr;
	newstr << in;
	int out;
	newstr >> out;
	return out;
}

template <class Type>
unsigned int anything2usint(Type in)
{
	std::stringstream newstr;
	newstr << in;
	int out;
	newstr >> out;
	return out;
}

template <class Type>
double anything2double(Type in)
{
	std::stringstream newstr;
	newstr << in;
	double out;
	newstr >> out;
	return out;
}

template <class Type>
bool anything2bool(Type in)
{
	std::stringstream newstr;
	newstr << in;
	bool out;
	newstr >> out;
	return out;
}

template <class Type>
std::vector <int> anything2int(std::vector <Type> in_list)
{
	std::vector <int> out_list;
	for(unsigned int i=0;i<in_list.size();++i){
		out_list.push_back(anything2int(in_list[i]));
	}
	return out_list;
}

template <class Type>
std::vector <unsigned int> anything2usint(std::vector <Type> in_list)
{
	std::vector <unsigned int> out_list;
	for(unsigned int i=0;i<in_list.size();++i){
		out_list.push_back(anything2int(in_list[i]));
	}
	return out_list;
}

template <class Type>
std::vector <double> anything2double(std::vector <Type> in_list)
{
	std::vector <double> out_list;
	for(unsigned int i=0;i<in_list.size();++i){
		out_list.push_back(anything2double(in_list[i]));
	}
	return out_list;
}

template <class Type>
std::vector <bool> anything2bool(std::vector <Type> in_list)
{
	std::vector <bool> out_list;
	for(unsigned int i=0;i<in_list.size();++i){
		out_list.push_back(anything2bool(in_list[i]));
	}
	return out_list;
}