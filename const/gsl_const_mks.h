/* const/gsl_const_mks.h
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

#ifndef __GSL_CONST_MKS__
#define __GSL_CONST_MKS__

#define GSL_CONST_MKS_SPEED_OF_LIGHT (2.99792458e8) /* m / s */
#define GSL_CONST_MKS_GRAVITATIONAL_CONSTANT (6.67259e-11) /* m^3 / kg s^2 */
#define GSL_CONST_MKS_PLANCKS_CONSTANT_H (6.6260755e-34) /* kg m^2 / s */
#define GSL_CONST_MKS_PLANCKS_CONSTANT_HBAR (1.05457266913e-34) /* kg m^2 / s */
#define GSL_CONST_MKS_VACUUM_PERMEABILITY (1.25663706144e-6) /* kg m / A^2 s^2 */
#define GSL_CONST_MKS_ASTRONOMICAL_UNIT (1.495979e11) /* m */
#define GSL_CONST_MKS_LIGHT_YEAR (9.46053620707e15) /* m */
#define GSL_CONST_MKS_PARSEC (3.08567818589e16) /* m */
#define GSL_CONST_MKS_GRAV_ACCEL (9.80665e0) /* m / s^2 */
#define GSL_CONST_MKS_ELECTRON_VOLT (1.60217733e-19) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_MASS_ELECTRON (9.10938961969e-31) /* kg */
#define GSL_CONST_MKS_MASS_MUON (1.88353269879e-28) /* kg */
#define GSL_CONST_MKS_MASS_PROTON (1.67262307095e-27) /* kg */
#define GSL_CONST_MKS_MASS_NEUTRON (1.67492862142e-27) /* kg */
#define GSL_CONST_MKS_RYDBERG (2.17987412173e-18) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_BOLTZMANN (1.3806513e-23) /* kg m^2 / K s^2 */
#define GSL_CONST_MKS_BOHR_MAGNETON (9.27401542715e-24) /* A m^2 */
#define GSL_CONST_MKS_NUCLEAR_MAGNETON (5.05078658357e-27) /* A m^2 */
#define GSL_CONST_MKS_ELECTRON_MAGNETIC_MOMENT (9.28477005945e-24) /* A m^2 */
#define GSL_CONST_MKS_PROTON_MAGNETIC_MOMENT (1.41060761072e-26) /* A m^2 */
#define GSL_CONST_MKS_MOLAR_GAS (8.31447086363e0) /* kg m^2 / K mol s^2 */
#define GSL_CONST_MKS_STANDARD_GAS_VOLUME (2.2413992e-2) /* m^3 / mol */
#define GSL_CONST_MKS_MINUTE (60) /* s */
#define GSL_CONST_MKS_HOUR (3600) /* s */
#define GSL_CONST_MKS_DAY (86400) /* s */
#define GSL_CONST_MKS_WEEK (604800) /* s */
#define GSL_CONST_MKS_INCH (2.54e-2) /* m */
#define GSL_CONST_MKS_FOOT (3.048e-1) /* m */
#define GSL_CONST_MKS_YARD (9.144e-1) /* m */
#define GSL_CONST_MKS_MILE (1.609344e3) /* m */
#define GSL_CONST_MKS_NAUTICAL_MILE (1852) /* m */
#define GSL_CONST_MKS_FATHOM (1.8288e0) /* m */
#define GSL_CONST_MKS_MIL (2.54e-5) /* m */
#define GSL_CONST_MKS_POINT (3.52777777778e-4) /* m */
#define GSL_CONST_MKS_TEXPOINT (3.51459803515e-4) /* m */
#define GSL_CONST_MKS_MICRON (1e-6) /* m */
#define GSL_CONST_MKS_ANGSTROM (1e-10) /* m */
#define GSL_CONST_MKS_HECTARE (10000) /* m^2 */
#define GSL_CONST_MKS_ACRE (4.04685642241e3) /* m^2 */
#define GSL_CONST_MKS_BARN (barn) /* 1 */
#define GSL_CONST_MKS_LITER (1e-3) /* m^3 */
#define GSL_CONST_MKS_US_GALLON (3.78541178402e-3) /* m^3 */
#define GSL_CONST_MKS_QUART (9.46352946004e-4) /* m^3 */
#define GSL_CONST_MKS_PINT (4.73176473002e-4) /* m^3 */
#define GSL_CONST_MKS_CUP (2.36588236501e-4) /* m^3 */
#define GSL_CONST_MKS_FLUID_OUNCE (2.95735295626e-5) /* m^3 */
#define GSL_CONST_MKS_TABLESPOON (1.47867647813e-5) /* m^3 */
#define GSL_CONST_MKS_TEASPOON (4.92892159375e-6) /* m^3 */
#define GSL_CONST_MKS_CANADIAN_GALLON (4.54609e-3) /* m^3 */
#define GSL_CONST_MKS_UK_GALLON (4.546092e-3) /* m^3 */
#define GSL_CONST_MKS_MILES_PER_HOUR (4.4704e-1) /* m / s */
#define GSL_CONST_MKS_KILOMETERS_PER_HOUR (2.77777777778e-1) /* m / s */
#define GSL_CONST_MKS_KNOT (5.14444444444e-1) /* m / s */
#define GSL_CONST_MKS_POUND_MASS (4.5359237e-1) /* kg */
#define GSL_CONST_MKS_OUNCE_MASS (2.8349523125e-2) /* kg */
#define GSL_CONST_MKS_TON (9.0718474e2) /* kg */
#define GSL_CONST_MKS_METRIC_TON (1000) /* kg */
#define GSL_CONST_MKS_UK_TON (1.0160469088e3) /* kg */
#define GSL_CONST_MKS_TROY_OUNCE (3.1103475e-2) /* kg */
#define GSL_CONST_MKS_CARAT (2e-4) /* kg */
#define GSL_CONST_MKS_UNIFIED_ATOMIC_MASS (1.6605402e-27) /* kg */
#define GSL_CONST_MKS_GRAM_FORCE (9.80665e-3) /* kg m / s^2 */
#define GSL_CONST_MKS_POUND_FORCE (4.44822161526e0) /* kg m / s^2 */
#define GSL_CONST_MKS_KILOPOUND_FORCE (4.44822161526e3) /* kg m / s^2 */
#define GSL_CONST_MKS_POUNDAL (1.38255e-1) /* kg m / s^2 */
#define GSL_CONST_MKS_CALORIE (4.1868e0) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_BTU (btu) /* 1 */
#define GSL_CONST_MKS_THERM (105506000) /* kg m^2 / s^2 */
#define GSL_CONST_MKS_HORSEPOWER (7.457e2) /* kg m^2 / s^3 */
#define GSL_CONST_MKS_BAR (1e5) /* kg / m s^2 */
#define GSL_CONST_MKS_STD_ATMOSPHERE (101325) /* kg / m s^2 */
#define GSL_CONST_MKS_TORR (1.33322368421e2) /* kg / m s^2 */
#define GSL_CONST_MKS_METER_OF_MERCURY (1.33322368421e5) /* kg / m s^2 */
#define GSL_CONST_MKS_INCH_OF_MERCURY (3.38638815789e3) /* kg / m s^2 */
#define GSL_CONST_MKS_INCH_OF_WATER (2.4884e2) /* kg / m s^2 */
#define GSL_CONST_MKS_PSI (6.89475729317e3) /* kg / m s^2 */
#define GSL_CONST_MKS_POISE (1e-1) /* kg m^-1 s^-1 */
#define GSL_CONST_MKS_STOKES (1e-4) /* m^2 / s */
#define GSL_CONST_MKS_FARADAY (9.6485308989e4) /* A s / mol */
#define GSL_CONST_MKS_ELECTRON_CHARGE (1.60217733e-19) /* A s */
#define GSL_CONST_MKS_GAUSS (1e-4) /* kg / A s^2 */
#define GSL_CONST_MKS_STILB (1e4) /* cd / m^2 */
#define GSL_CONST_MKS_LUMEN (1) /* cd sr */
#define GSL_CONST_MKS_LUX (1) /* cd sr / m^2 */
#define GSL_CONST_MKS_PHOT (1e4) /* cd sr / m^2 */
#define GSL_CONST_MKS_FOOTCANDLE (1.076e1) /* cd sr / m^2 */
#define GSL_CONST_MKS_LAMBERT (1e4) /* cd sr / m^2 */
#define GSL_CONST_MKS_FOOTLAMBERT (1.07639104e1) /* cd sr / m^2 */
#define GSL_CONST_MKS_CURIE (3.7e10) /* 1 / s */
#define GSL_CONST_MKS_ROENTGEN (2.58e-4) /* A s / kg */
#define GSL_CONST_MKS_RAD (1e-2) /* m^2 / s^2 */

#endif /* __GSL_CONST_MKS__ */