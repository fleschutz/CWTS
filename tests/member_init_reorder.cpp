struct Alpha {
	int beta;
	int gamma;
	Alpha(): gamma(0), beta(1) { } // oops, member reordered
};
