/*
 * BIT_MATH.h
 *
 *  Created on: Sep 30, 2022
 *      Author: Eng.M
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(var, bit)  var = var|(1 << bit)
#define CLR_BIT(var,bit)   var = var&(~(1 << bit))
#define TOGGLE(var,bit)    var = var^(1 << bit)
#define GET_BIT(var,bit)  (var >> bit) & 1

#endif /* BIT_MATH_H_ */
