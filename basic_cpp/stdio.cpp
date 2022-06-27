/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:39:11 by ullorent          #+#    #+#             */
/*   Updated: 2022/06/27 09:06:20 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//los streams actuan como intermediarios entre los programas
//y el input y output que nosotros especifiquemos
//En este caso, usamos los dobles símbolos '<<' y/o '>>'

int	main(void)
{
	int	x;
	char	buff[512];
	
	//Primero, vamos a imprimir un String, y para ello utilizaremos el namespace "std"
	//y dentro de este, utilizaremos la variable "cout" (character output)
	std::cout << "Hello World!" << std::endl;
	//en este caso usamos '<<' porque queremos introducir en la variable unos carácteres en concreto,
	//así que lo insertamos dentro del "cout"
	//Usamos "std::endl" para poder cerrar el programa con un salto de línea
	
	std::cout << "Buenas tardes, pon tu edad muchacho: ";
	//Ahora vamos a hacer que el usuario pueda interaccionar con el programa.
	//Para ello utilizaremos la variable "cin" (character input)
	std::cin >> x;
	std::cout << "Ahora, dime tu nombre: ";
	std::cin >> buff;
	//En este caso usaremos '>>' porque queremos sacar el valor que hemos introducido anteriormente
	//en otra variable. En este caso la meteremos en la variable 'x' que es un 'integer'
	std::cout << "Te llamas " << buff << " y tienes " << x << " años" << std::endl;
	//Y después, como si de un printf se tratase, tenemos que especificar que variable queremos sacar.
}
