/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:45:47 by ullorent          #+#    #+#             */
/*   Updated: 2022/06/24 14:34:46 by ullorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	valor = 10;
int	f(void) {return 1;}

namespace	Prueba {
	int	valor = 5;
	int	f(void) {return 3;}
}

namespace	Lol {
	int	valor = 7;
	int	f(void) {return 2;}
}

// vamos a usar :: para poder llamar al namespace

// En esta siguiente linea, vamos a crear un namespace que 
// iguale a un namespace ya creado con sus propios valores

namespace	Si = Lol;

int	main(void)
{
	printf("valor = [%d]\n", valor);
	printf("f(); = [%d]\n\n", f());

	//aqui empezamos a meter namespaces
	// si solo ponemos "::NombreDeVariable" iriamos al valor global
	printf("::\n");
	printf("valor = [%d]\n", ::valor);
	printf("f(); = [%d]\n\n", ::f());

	// podemos llamar a otro namespace simplemente añadiendo el nombre como un prefijo
	// con esto, obtendremos el valor de ese namespace concreto
	// ej.; Unai::NombreDeVariable
	printf("Prueba::\n");
	printf("valor = [%d]\n", Prueba::valor);
	printf("f(); = [%d]\n\n", Prueba::f());

	printf("Lol::\n");
	printf("valor = [%d]\n", Lol::valor);
	printf("f(); = [%d]\n\n", Lol::f());

	// en este caso, los valores son iguales a los de Lol tal y como hemos especificado en la línea 33
	printf("Si::\n");
	printf("valor = [%d]\n", Si::valor);
	printf("f(); = [%d]\n\n", Si::f());
}
