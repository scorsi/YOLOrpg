//
// Created by sylvain on 27/01/17.
//

#include <iostream>
#include <fstream>
#include "Game/GameUtils.hh"

void display_texts(std::string const &filename)
{
  std::fstream file;

  file.open(filename.c_str());

  if (file.is_open())
    {
      std::string s;
      while (std::getline(file, s))
	{
	  std::cout << s << std::endl;
	}
      file.close();
    }
  else
    std::cout << "Error " << errno << " : opening file " << filename << std::endl;
}
