/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:51:21 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/13 15:44:21 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):Form(name, 137, 145)
{
    this->target = name;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & new_obj)
{
    this->target = new_obj.target;
}

std::string     ShrubberyCreationForm::getTarget()
{
    return this->target;
}


void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getBoolNumber() == true && executor.getGrade() <= this->getNumberToexecuteForm())
    {
    std::cout << "ha an" << std::endl;
        std::ofstream   myFile;
        myFile.open(this->target + "_shrubbery") ; 
        
        myFile << "            .        +          .      .          ."         << std::endl;
        myFile << "     .            _        .                    ."           << std::endl;
        myFile << "  ,              /;-._,-.____        ,-----.__"              << std::endl;
        myFile << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,"          << std::endl;
        myFile << "  `                 '\'  _|`=:_::..);  '\' __/ / "           << std::endl;
        myFile << "                      ,    `./  \':. `.   )==-'  ."          << std::endl;
        myFile << "    .      ., ,-=-.  ,\', +#./`   \':.  / /           ."     << std::endl;
        myFile << " .           \'/:/`-' , ,\' '` ` `   ): , /_  -o"            << std::endl;
        myFile << "       .    /:+- - + +- : :- + + -:'  /(o-) \')     ."       << std::endl;
        myFile << "  .      ,':  \'    ` `/` ' , , ,:' `'---''--------._/`7"    << std::endl;
        myFile << "   `.   (    \': \',-._` ` + '\', ,  '   _,--._,---':.__/"   << std::endl;
        myFile << "               \':  `  X` _| _,\'/'   .-'"                   << std::endl;
        myFile << ".                 :._:`\'____  /:''  /      .           ."   << std::endl;
        myFile << "                    \'::.  :\'/:'  /              +"         << std::endl;
        myFile << "   .                 `.:.  /:'  }      ."                    << std::endl;
        myFile << "            .           ):_(:;   \'           ."             << std::endl;
        myFile << "                      /:. _/ ,  |"                           << std::endl;
        myFile << "                   . (|::.     ,`                  ."        << std::endl;
        myFile << "     .                |::.    {\' "                          << std::endl;
        myFile << "                      |::.\'  \' `."                         << std::endl;
        myFile << "                      |:::(\'    |"                          << std::endl;
        myFile << "                      |:::(\'    |"                          << std::endl;
        myFile << "                      |:::(\'    |"                          << std::endl;
        myFile << "                      |:::(\'    |"                          << std::endl;
        myFile << "                      |:::(\'    |"                          << std::endl;
        myFile << "              O       |:::/{ }  |                  (o"       << std::endl;
        myFile << "               )  ___/#\'::`/ (O '==._____   O, (O  /'"      << std::endl;
        myFile << "          ~~~w/w~'~~,\'` `:/,-(~`  '~~~~~~~~'~o~\'~/~w|/~'"  << std::endl;
        myFile << "dew   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\'|/~~"          << std::endl;
    }
    else
        throw GradeTooLowException();
}