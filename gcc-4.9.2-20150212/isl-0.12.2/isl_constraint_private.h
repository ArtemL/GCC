#ifndef ISL_CONSTRAINT_PRIVATE_H
#define ISL_CONSTRAINT_PRIVATE_H

#include <isl/constraint.h>
#include <isl/local_space.h>
#include <isl/vec.h>

struct isl_constraint {
	int ref;

	int eq;
	isl_local_space	*ls;
	isl_vec		*v;
};

#undef EL
#define EL isl_constraint

#include <isl_list_templ.h>

struct isl_constraint *isl_basic_set_constraint(struct isl_basic_set *bset,
	isl_int **line);

#endif