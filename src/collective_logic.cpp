#include "collective_logic.h"

CollectiveLogic::CollectiveLogic() 
{
}

CollectiveLogic::~CollectiveLogic()
{
}

void CollectiveLogic::AddTargetsByEmail( std::string& email )
{
  mTargets.emplace_back( Person( email ) ); 
}

bool CollectiveLogic::ExitMessage() const
{
  std::string answer;
  std::cout << "Would you like to re run Thanos? y/n" << std::endl;
  std::cin >> answer;
  return answer == "y" ? true : false;
}

void CollectiveLogic::Execute()
{
  // only in app, no args to be handled
  auto phaseRunning = true;
  std::cout << "Greetings! Please choose option 1, 2 or 3" << std::endl;
  while ( phaseRunning )
    phaseRunning = Menu();
}

bool CollectiveLogic::Menu()
{
  std::cout << "1.) I have a name or email address, execute Thanos!" << std::endl;
  std::cout << "2.) I have buncs of names and/or emails, execute on Thanos.txt list" << std::endl;
  std::cout << "3.) Exit" << std::endl;
  
  int menuPoint;
  std::cin >> menuPoint;
  // TODO: handle lists as well
  // keepo.asd 
  // TODO: this should be simplified
  // This section is cool and comkplicated; the user inputs either one email and / or name, or just a text document; menupoint will mean accordingly
  // Sample: if user pushed 1, then email or address wil be given
  std::string NameEmailOrFIle;

  switch ( menuPoint )
  {
    case 1:
    {
      std::cout << std::endl << "menu pont 1 choosen, please give the name or email!" << std::endl;
      std::cin >> NameEmailOrFIle;
      return RunMenuPointOne( NameEmailOrFIle );
    }
    case 2:
    {
      // list process n shit
      std::cout << "menu pont 2 choosen giveme text list!" << std::endl;
      std::cin >> NameEmailOrFIle;
      // TODO: implement
      return RunMenuPointTwo( NameEmailOrFIle ) ;
    }
    default: return false;
  }
}

void CollectiveLogic::PrintTargets()
{
  for ( auto& person : mTargets )
    std::cout << person;
}


bool CollectiveLogic::RunMenuPointOne(std::string& email)
{
  AddTargetsByEmail( email );
  PrintTargets();
   
  return ExitMessage();
}

bool CollectiveLogic::RunMenuPointTwo(const std::string& filename)
{
  std::ifstream nameList;
  std::string name; //TODO: get rid of this temp str
  nameList.open(filename);
  if ( nameList.is_open() )
  {
     while ( nameList >> name )
    {
      mTargets.emplace_back( name );
    }
  }
  else
  {    std::cout << "fk off" << filename << std::endl; return false; }
  PrintTargets();
  return ExitMessage();
}


