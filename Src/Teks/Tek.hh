//
// Tek.hh for  in /home/merran_g/work/fun/MyTek.cpp
// 
// Made by Geoffrey Merran
// Login   <merran_g@epitech.net>
// 
// Started on  Thu Jan 22 12:45:18 2015 Geoffrey Merran
// Last update Thu Jan 22 13:22:10 2015 Geoffrey Merran
//

#ifndef __TEK_H
# define __TEK_H
# include <iostream>
# include <ostream>
# include <string>

class			Tek
{
public:
  Tek(std::string const &, unsigned int, unsigned int);
  virtual ~Tek();

  std::string		getName() const;
  unsigned int		getYear() const;
  unsigned int		getPromoYear() const;
  int			getGhosts() const;
  void			setGhosts(int &);
  int			getMedals() const;
  void			setMedals(int &);

protected:
  std::string		Name;
  unsigned int	       	Year;
  unsigned int		PromoYear;
  int			Ghosts;
  int			Medals;
};

std::ostream&		operator<<(std::ostream&, Tek const &);

#endif /* __TEK_H */
