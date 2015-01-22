//
// Merran_g.hh for  in /home/merran_g/work/fun/MyTek.cpp
// 
// Made by Geoffrey Merran
// Login   <merran_g@epitech.net>
// 
// Started on  Thu Jan 22 13:03:28 2015 Geoffrey Merran
// Last update Thu Jan 22 13:26:26 2015 Geoffrey Merran
//

#ifndef __MERRAN_G_H
# define __MERRAN_G_H
# include "Tek.hh"

class			Merran_g : public Tek
{
public:
  Merran_g();
  Merran_g(Merran_g const &);
  Merran_g&		operator=(Merran_g const &);
  virtual ~Merran_g();

  void			finishAHardTask(bool taskReturn);
  Merran_g*		getClone();
private:
  unsigned long int	Money;
  bool			MerranPositif;
};

#endif /* __MERRAN_G_H */
