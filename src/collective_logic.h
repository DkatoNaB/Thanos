#ifndef _COLLECTIVE_LOGIC_H
#define _COLLECTIVE_LOGIC_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "person.hpp"

class CollectiveLogic
{
  std::vector< Person > mTargets;
  
  
  void AddTargetsByEmail( std::string& );
  // private members
public:
  CollectiveLogic();
  ~CollectiveLogic();

  CollectiveLogic(const CollectiveLogic&) = delete;
  CollectiveLogic(CollectiveLogic&&) = delete;
  CollectiveLogic& operator=(const CollectiveLogic&) = delete;
  
  void Execute();
  bool ExitMessage() const;
  bool Menu();
  // print targets
  void PrintTargets();
  void PrintResults();
  bool RunMenuPointOne(std::string&);
  bool RunMenuPointTwo(std::string&);
  void ShowStat();
  //helper functions; operators
//  friend std::ostream& operator<<(std::ostream& out, const Person& o)

};

#endif // _COLLECTIVE_LOGIC_HPP
