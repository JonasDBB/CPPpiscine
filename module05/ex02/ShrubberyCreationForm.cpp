/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbennink <jbennink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 08:14:48 by jbennink      #+#    #+#                 */
/*   Updated: 2020/09/24 10:40:16 by jbennink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("shrubbery creation", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &og)
{
	setTarget(og.getTarget());
	setSigned(og.getSigned());
	return (*this);
}

void					ShrubberyCreationForm::action() const
{
	std::ofstream ofs(this->getTarget() + "_shrubbery");
	ofs << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@           ,\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@##@%@%@   ,,*.\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@&@@@@(@@%%%/.. ./  *   .    .    ,             .\n\
@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@&&@%%%@%%&%@(@@#@@@@,  */, ./ , ,,,,,,  *(.\n\
@@@@@@@@@@@@@@@@@@@&@%@@@@@@#&@@@@%##%%@#&/,@%@(@@@%% ,/. %, **  (.((*,. .   .   *\n\
@@@@@@@@@@@@@@@@@@@@@@@@%@@(@@@@@@&%%%#*@(#%&%&&@@((@ *.(/@ ,(*.  %( ..,@.       .\n\
@@@@@@@@@@@@@@@@@@@@@@@@@&#%@@@@@#&&@%@@.&/@/%@%.,%&%../(,@( ,, ,.%,.(*/./*        .\n\
@@@@@@@@@@@@@&@@@@&@@@@*@@@@%&#@%%@%%/@@@%#&#@%*#@*&(  %/.@ ( /,(( // .#&,#     *  * .(\n\
@@@@@@@@@@@@@@@&@@@@@@@(@(&@&@@@(&/#&&%#@&@ ((&(@ ( & .#*(@  ,@  #.,##%(***.,.*, /       ,\n\
@@@@@@@@@@@@&@#@@@@@@@@@@#*%@/#@@&/*%&/#(&#% &&*& %((#* ,#,( ,,.&, ./@,, .,,,,  /    .*\n\
@@@@@@@@@@@@@@@@@%%@@@@@@%&#.@&/@@@&*/##@@@#@.### %#@.@.#@,,     %@ @../ *,, ,@. (/ ..\n\
@@@@@@@@@@@@@@@@&@@@@@@@&&@#&&,,@##&@/ @&#@&%/@ # #@.. @@. ,/  . ..@/,  ,  &/( . ,\n\
@@@@@@@@@&@@@@@@@@@*@%#&@@&%&#&#,#%@%%@%,(@@&&%@ # @ (&@*,,  /   .@  #&, , ,(,*  .\n\
@@@@@@@@@@@@@#@@&@(@&&@*@%@&@&%&#%,&@%&@@  ,@@@&@& #%%@%,/.@ ,.,&(@* ,*   .,*,, (. ,,.\n\
@@@@@@@@@@@@@@@@*@@&@#&%#@%@@&@@&&* . ,&%&&#%.,(&@  @@%/%(,  *%,,. ,. /.  (, *,   ..\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@#@@@@   ( @ @  ,  @ @@  @@,     .**@ ,  . ,\n\
@@@@@@@@@@@@@@@@@@@@%%%&%&%#*@@@%&&@@&,,   *,  &@*   @@@ @@  %@@@@@#@,   (,   ,    .\n\
@@@@@@@@@@@@@@@@@@@@%@@%#%@#@&&@&# *@@@@@@@@@@@      @@@@@                ,\n\
@@@@@@@@@@@@@@@@@@@@@&@@@@&&&@%@%@@@@@@@@@@@@@@@@#   @@@*             .  . .,\n\
@@@@@@@@@@@@@@@@@@@@&@#@#&@&&%/&@@@@@@@@@@@@@@@@@@@  @@,                 . . ,,\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@&@(@@@@@@@@@@@@@@@@@@@@@@  @@#                     .\n\
@@@@@@@@@@@@@@@@@@@@@@&@@%@@@@@@@@@@@@@@@@@@@@@@@@@  @@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  @@@@                         .\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   @@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    @@@@.\n\
@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    @@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*     @@@@@@\n\
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&.      #/#@@@@\n";
	ofs.close();
}
