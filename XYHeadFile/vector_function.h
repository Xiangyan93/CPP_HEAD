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

//This is function to find the position of a element in a vector. 
template <class Type>
bool FindIdxInVector(Type value, std::vector<Type> value_list, unsigned &idx)
{
  for(unsigned i=0;i<value_list.size();++i){
    if(value==value_list[i]){
      idx = i;
      return true;
    }
  }
  return false;
}