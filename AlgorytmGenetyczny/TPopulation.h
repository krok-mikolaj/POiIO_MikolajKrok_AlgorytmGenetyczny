#pragma once

#include <vector>
#include "TCandidate.h"

class TPopulation
{
	static unsigned int			population_count;
	static unsigned int				_id;
	unsigned int				candidated_count;
	std::vector<TCandidate>		candidates;
	double						best_val = 0;

public:
					TPopulation(unsigned int cands_count = 10);
	void			calculate();
	TCandidate		get_best_candidate();

	unsigned int	get_id() { return _id; }
	unsigned int	get_candidates_count() { return candidated_count; }
	double			get_best_val() { return best_val; }
	
	void			info();
};