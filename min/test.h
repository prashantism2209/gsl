/* min/test.h
 * 
 * Copyright (C) 1996, 1997, 1998, 1999, 2000 Brian Gough
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

typedef double simple_function (double x);
typedef struct { simple_function * f; simple_function * df; } function_pair ;

gsl_function create_function (simple_function * f) ;
double eval_function (double x, void * params) ;

void
test_f_e (const gsl_min_fminimizer_type * T, 
	  const char * description, gsl_function *f,
	  double lower_bound, double minimum, double upper_bound, 
          double correct_minimum);

void
test_f (const gsl_min_fminimizer_type * T, 
        const char * description, gsl_function *f,
	double lower_bound, double middle, double upper_bound, 
        double correct_minimum);

void
test_bracket (const char * description,gsl_function *f,double lower_bound, 
	      double upper_bound, int max);

double func1 (double x);
double func2 (double x);
double func3 (double x);
