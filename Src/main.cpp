//
// main.cpp for  in /home/merran_g/work/fun/MyTek.cpp
// 
// Made by Geoffrey Merran
// Login   <merran_g@epitech.net>
// 
// Started on  Thu Jan 22 12:43:38 2015 Geoffrey Merran
// Last update Thu Jan 22 13:20:32 2015 Geoffrey Merran
//

#include "Teks/Tek.hh"
#include "Teks/Merran_g.hh"

int		main()
{
  Tek		*merran_g = new Merran_g();

  std::cout << *merran_g << std::endl;
  delete merran_g;
  return (0);
}
