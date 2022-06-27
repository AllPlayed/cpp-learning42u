/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:46:51 by ullorent          #+#    #+#             */
/*   Updated: 2022/06/27 13:59:41 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//En C++, cada objeto tiene una copia de los miembros de datos (las variables del .hpp) y
//todos los objetos comparten una única copia de las funciones miembro.
//Para poder hacer referencia a la instancia de este momento, se usa la instancia especial 'this'.
// - 'this' en un namespace puntero.

#include <iostream>
#include "this_class.hpp"

Ejemplo::Ejemplo(void)
{
	std::cout << "Constructor llamado" << std::endl;

	this->num = 42;
	std::cout << "this->num: " << this->num << std::endl;

	//también es posible llamar a una función miembro con 'this'
	this->numb();
}

Ejemplo::~Ejemplo(void)
{
	std::cout << "Destructor llamado" << std::endl;
}

void	Ejemplo::numb(void)
{
	std::cout << "La vida es una mega tómbola de la vida" << std::endl;
}

int	main(void)
{
	Ejemplo	lol;

	//en este caso 'this' no se puede usar fuera de las funciones no estáticas
	std::cout << "esto es this->num " << lol.num << std::endl;
	return (0);
}
