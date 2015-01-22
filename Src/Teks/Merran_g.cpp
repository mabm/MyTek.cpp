//
// Merran_g.cpp for  in /home/merran_g/work/fun/MyTek.cpp
// 
// Made by Geoffrey Merran
// Login   <merran_g@epitech.net>
// 
// Started on  Thu Jan 22 13:06:51 2015 Geoffrey Merran
// Last update Thu Jan 22 13:26:49 2015 Geoffrey Merran
//

#include "Merran_g.hh"

Merran_g::Merran_g() : Tek("Geoffrey Merran", 2, 2018)
{
  this->Medals = 42;
  this->MerranPositif = false;
  this->Money = 3000;
  std::cout << this->Name << " : I have money and skill" << std::endl;
}

Merran_g::Merran_g(Merran_g const & other) : Tek("Geoffrey Merran", 2, 2018)
{
  this->Ghosts = other.Ghosts;
  this->Medals = other.Medals;
  this->Money = other.Money;
  this->MerranPositif = false;
}

Merran_g&		Merran_g::operator=(Merran_g const & other)
{
  if (&other != this)
    {
      this->Name = other.Name;
      this->Year = other.Year;
      this->PromoYear = other.PromoYear;
      this->Ghosts = other.Ghosts;
      this->Medals = other.Medals;
      this->Money = other.Money;
      this->MerranPositif = false;
    }
  return (*this);
}

Merran_g::~Merran_g()
{
  std::cout << this->Name << " : Got work to do" << std::endl;
}

void			Merran_g::finishAHardTask(bool taskReturn)
{
  if (taskReturn)
    {
      this->MerranPositif = true;
    }
}

Merran_g*		Merran_g::getClone()
{
  if (this->MerranPositif)
    {
      std::cout << this->Name << " : Putain, je suis trop bon, il me faudrait un double" << std::endl;
      this->MerranPositif = false;
      return (new Merran_g(*this));
    }
  return (NULL);
}
