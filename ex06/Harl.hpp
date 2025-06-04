#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:
		std::string	levels[4];
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void		(Harl::*functions[4])();
		int			find_level(std::string level);
};

#endif