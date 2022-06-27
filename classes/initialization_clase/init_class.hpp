/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:02:12 by ullorent          #+#    #+#             */
/*   Updated: 2022/06/27 14:09:15 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_CLASS_H
# define INIT_CLASS_H

# include <iostream>

//En estos ejemplos vamos a crear una 'lista de inicialización'
//
//Estas listas sirven para inicializar los datos 'miembros' de una clase.

class	Ejemplo
{
public:
	//atributos
	int	b1;
	char	b2;
	float	b3;

	Ejemplo(int a1, char a2, float a3);
	~Ejemplo(void);
};

#endif