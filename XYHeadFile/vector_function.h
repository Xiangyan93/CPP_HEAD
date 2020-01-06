#pragma once
//This is function to find if there is repeated element in a vector. 
template <class Type>
bool NoRepeat(std::vector<Type> value)
{
  for(unsigned i=0;i<value.size();++i){
    for(unsigned j=i+1;j<value.size();++j){
      if(value[i]==value[j])
        return false;
    }
  }
  return true;
}