/*
    Copyright (c) 2016 Juraj Major

    This file is part of LTL3TELA.

    LTL3TELA is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    LTL3TELA is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with LTL3TELA.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef INTERFACES_H
#define INTERFACES_H
#include <cassert>
#include <climits>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <queue>
#include <bddx.h>
#include <spot/tl/parse.hh>
#include <spot/tl/simplify.hh>

extern bool o_single_init_state;	// -i
extern bool o_vwaa_determ;			// -d
extern unsigned o_eq_level;			// -e
extern bool o_mergeable_info;		// -m
extern bool o_ac_filter_fin;		// -t
extern bool o_spot_simulation;		// -u
extern bool o_spot_scc_filter;		// -z

extern unsigned o_u_merge_level;	// -F
extern unsigned o_g_merge_level;	// -G
extern bool o_x_single_succ;		// -X

// returns the DNF representation of LTL formula f
std::set<std::set<spot::formula>> f_bar(spot::formula f);

// parses arguments from argv
std::map<std::string, std::string> parse_arguments(int argc, char* argv[]);

#endif
