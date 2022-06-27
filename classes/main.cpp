/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:14:59 by ullorent          #+#    #+#             */
/*   Updated: 2022/06/27 13:07:56 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Al ser C++ un lenguaje de objetos, los cuales se crean con una 'clase'.
// - Una clase es un tipo de dato definido por un usuario
//    - Funcionan para construir objetos o como "planos" para crear objetos.
//    - Las clases son estáticas
//    - La instancia es la parte dinámica.

// Dentro de las clases tenemos dos funciones especiales: 'destructors' y 'constructors'
// -> 'Constructor' suele alojar memoria y sirve también para crear objetos.
// -> 'Destructor' sirve para limpiar memoria y también para destruir los objetos ya creados.
// Ambas funciones no devuelven ningún valor (no returnean ningún valor de int)
// El compilador automaticamente llama a los constructores para poder crear objetos y los destruye cuando están
// fuera de "rango" o de "ámbito". O lo que es o mismo, cuando estos se borran de cualquier manera.

#include <iostream>
#include "clase_ejemplo.hpp"

Ejemplo::Ejemplo(void)
{
	std::cout << "Constructor llamado y creado" << std::endl;
	return ;
}

Ejemplo::~Ejemplo(void)
{
	std::cout << "Constructor destruído y eliminado" << std::endl;
	return ;
}

int	Ejemplo::counterPrueba(int c)
{
	while (c < 10)
		c++;
	return (c);
}

int	main(void)
{
	int	c;

	c = 0;
	//Ahora, para poder conseguir la información de la clase 'Ejemplo', tenemos que inicializar una instancia.
	Ejemplo	Ejemplo1;
	
	//Para llamar a las funciones Miembro, tendríamos que hacerlo con el '.' y con el nombre
	//de la instancia que ya habíamos inicializado previamente.
	c = Ejemplo1.counterPrueba(c);
	std::cout << "c en este caso final es = " << c << std::endl;
	return (0);
}