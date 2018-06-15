#ifndef _PERSON_HPP
#define _PERSON_HPP

#include<string>
#include<iostream>

class Person
{

  std::string mName;
  std::string mEmail;

public:
  
  // sample input: kappa.KEEPO@xd.com
  Person(std::string& email) 
  {
    auto sepAt  = email.find( "@" );
    auto sepDot = email.find( "." );
    mEmail = email;
    mName  = email.substr( 0, sepAt ).replace(sepDot, 1, " ");

  }
  
  // TODO: move ctor

  friend std::ostream& operator<<(std::ostream& out, const Person& o)
  {
    out << " name: " << o.mName  << std::endl;
    out << "email: " << o.mEmail << std::endl;
    return out;
  }


  ~Person()=default;

};

#endif // _PERSON_HPP
