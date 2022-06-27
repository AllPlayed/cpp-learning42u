/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:02:25 by ullorent          #+#    #+#             */
/*   Updated: 2022/06/27 14:14:03 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_class.hpp"

//En estos ejemplos vamos a crear una 'lista de inicialización'
//
//Estas listas sirven para inicializar los datos 'miembros' de una clase.
//En la función principal las listas de miembros para inicializar, se indican con
//un constructor con una lista separada por comas seguido de un ';'
//
//ejemplo.; Ejemplo instance(a, b, '10', 20);

//Aquí inicializamos los atributos en una clase
Ejemplo::Ejemplo(int a1, char a2, float a3) : b1(a1), b2(a2), b3(a3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->b1 << std::endl;
	std::cout << "this->a2 = " << this->b2 << std::endl;
	std::cout << "this->a3 = " << this->b3 << std::endl;
}

Ejemplo::~Ejemplo(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	main(void)
{
	//De esta manera, podemos pasar los valores al namespace
	Ejemplo	prueba(10, 'a', 29.3);
	return (0);
}
