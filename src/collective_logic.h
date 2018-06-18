#ifndef _COLLECTIVE_LOGIC_H
#define _COLLECTIVE_LOGIC_H

class CollectiveLogic
{
  std::vector< Person > mTargets;
  
  void AddTargetsByEmail( const std::string& );
  bool DeadOrAlive() const;

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
  void PrintTargets() const;
  void PrintResults() const;
  bool RunMenuPointOne(const std::string&);
  bool RunMenuPointTwo(const std::string&);
  void ShowStat() const;
  //helper functions; operators
//  friend std::ostream& operator<<(std::ostream& out, const Person& o)

};

#endif // _COLLECTIVE_LOGIC_HPP
