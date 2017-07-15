/*
 * Much of this code is taken from JustGarble
 * (https://github.com/irdan/justGarble). Our implementation is a
 * slimmed-down version of JustGarble and supports the half-gates
 * optimization (https://eprint.iacr.org/2014/756).
 *
 * JustGarble is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JustGarble is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with JustGarble.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef garble
#define garble 0

#include "common.h"
#include "justGarble.h"
#include "dkcipher.h"

#define FIXED_ZERO_GATE 1
#define FIXED_ONE_GATE 15
#define ANDGATE 8
#define ORGATE 14
#define XORGATE 6
#define NOTGATE 5

#define TABLE_ID -1
#define XOR_ID -2
#define NOT_ID -3

int getNextWire(GarblingContext *garblingContext);
void removeGarbledCircuit(GarbledCircuit *garbledCircuit);

#endif
