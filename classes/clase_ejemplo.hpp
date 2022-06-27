/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clase_ejemplo.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:36:28 by ullorent          #+#    #+#             */
/*   Updated: 2022/06/27 13:06:06 by ullorent         ###   ########.fr       */
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

#ifndef CLASE_EJEMPLO_H
# define CLASE_EJEMPLO_H

class	Ejemplo
{
public:
	//Lo que podemos hacer también es añadir funciones 'miembro', que se comparten por toda la clase
	int	counterPrueba(int c);
	
	// En este caso el Destructor se escribe con un '~' delante
	Ejemplo(void); //Tenemos que especificar el nombre de la clase para el constructor
	~Ejemplo(void); //Y lo mismo para el destructor
};

#endif