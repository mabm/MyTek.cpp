//
// Tek.cpp for  in /home/merran_g/work/fun/MyTek.cpp
// 
// Made by Geoffrey Merran
// Login   <merran_g@epitech.net>
// 
// Started on  Thu Jan 22 12:50:53 2015 Geoffrey Merran
// Last update Thu Jan 22 13:35:19 2015 Geoffrey Merran
//

#include "Tek.hh"

Tek::Tek(std::string const & name, unsigned int year, unsigned int promoYear) : Name(name), Year(year), PromoYear(promoYear), Ghosts(0), Medals(0)
{
  
}

Tek::~Tek()
{

}

std::string			Tek::getName() const
{
  return (this->Name);
}

unsigned int			Tek::getYear() const
{
  return (this->Year);
}

unsigned int			Tek::getPromoYear() const
{
  return (this->PromoYear);
}

int				Tek::getGhosts() const
{
  return (this->Ghosts);
}

void				Tek::setGhosts(int & ghosts)
{
  this->Ghosts = ghosts;
}

int				Tek::getMedals() const
{
  return (this->Medals);
}

void				Tek::setMedals(int & medals)
{
  this->Medals = medals;
}

std::ostream&			operator<<(std::ostream& os, Tek const & tek)
{
  os << tek.getName() << ", Tek" << tek.getYear() << ", " << tek.getPromoYear();x
  return (os);
}
